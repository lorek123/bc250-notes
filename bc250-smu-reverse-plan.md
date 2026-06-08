# BC-250 SMU Mailbox Reverse Engineering Plan

## Context

The Cyan Skillfish APU communicates with its SMU (System Management Unit)
through a custom 5-queue mailbox protocol over PCI config space on `00:00.0`.
This is entirely separate from the standard AMD PPSMC message interface exposed
by the kernel driver (`cyan_skillfish_ppt.c`), which only covers GPU DPM, GFX
clock, and GPU voltage.

The bc250-collective has substantially reverse-engineered this protocol. This
plan covers what remains open, why it matters, and how to attack it safely.

---

## Current state

The `bc250_smu_oc` library exposes 5 queues:

| Queue | Address (CMD/RSP/ARG) | Status |
|---|---|---|
| Q0 | 0x03B10A08 / 68 / 48 | ~30 commands known; ~8 unknown |
| Q1 | 0x03B10A00 / 60 / 40 | **2 commands, both unknown** |
| Q2 | 0x03B10528 / 564 / 998 | Feature management; ~15 unknowns |
| Q3 | 0x03B10A20 / A80 / A88 | Rich OC/voltage queue; ~40 unknowns + locked group |
| Q4 | 0x03B10A24 / A84 / A8C | **~11 commands, all unknown** |

### What's already working

- CPU frequency: per-core P-state, soft min/max CCLK, OC clock to 4+ GHz
- CPU voltage: VID force/unforce, offset tuning, curve scaling, droop calibration
- GPU frequency and voltage: force/query GFX clock and VID
- Temperature limits: separate CPU and GPU maximums
- SMU metrics table: per-CCX freq/power/temp, GPU clock, SoC clock, voltages
- Core enable/disable mask
- SoC DPM level query

### Known gaps

**Secure access group** (Q3: 0x27, 0x2A–0x2F):
Six commands flagged in the source with the comment: *"accessible if some flag
is passed to SMU at boot from BIOS. Currently we have no idea how to do it."*
These are likely privileged operations behind a PSP/BIOS-controlled unlock.

**CAC weights** (Q0: 0x2F–0x31):
Three commands referencing "AMD Patents" with no known semantics. CAC
(Current Autocorrelation Capacitance) weights tune dynamic power estimation
inside the SMU. Unknown what effect changing them has.

**Q4** — entirely unmapped. The naming (`_q5_*`) suggests this was found late
in exploration. `0x0A` is noted as "freq_op1" but unverified.

**Q1** — two isolated commands. Purpose unknown.

**Q2 unknowns** — several in the 0x20–0x30 range including two labelled
"probably power limit settings" (0x2C, 0x2D) that need verification.

**Memory/fabric clocks** (FCLK/MEMCLK) — SMU metrics expose these values but
no command to set them has been found in Q0–Q4.

**ALIB backend** — the ACPI ALIB function 6 (PCIe hot-plug power sequencing)
has no SMU backend implemented. Unknown if a SMU command covers this at all.

**Boot-time initialisation sequence** — the `cyan-skillfish-governor-smu`
must be running for CPU to reach high performance states. The exact SMU state
it sets up at init that unlocks CPU boosting is not fully documented.

---

## Why these gaps matter

| Gap | Impact if solved |
|---|---|
| Secure access group | Could expose power limit (PPT/TDC/EDC), deeper thermal control, or PS5-era boot knobs |
| FCLK/MEMCLK control | Memory bandwidth tuning; significant for GPU-compute workloads |
| Q4 | Completely unknown; could be VCN/SDMA management or security features |
| CAC weights | Fine-grained power model tuning; potential efficiency gains |
| ALIB backend | PCIe hot-plug power management (low priority; no hot-plug use case on BC-250) |
| Init sequence doc | Prerequisite for writing a minimal CPU power daemon without the full governor |

---

## Safety framework

**Hard limits (never violate):**
- CPU VID ≤ 1.325 V — one board has been bricked exceeding this
- Always monitor temperature during any SMU experiment; stop at 95 °C
- Keep CH341A programmer + SOIC8 clip on hand for BIOS recovery
- Never run new SMU commands without first reading back current state
- **Never blindly enumerate Q2:0x11+ or Q4** — confirmed to cause permanent
  firmware hang requiring reboot (observed 2026-06-08). Ghidra analysis of
  the handler code is required before probing those ranges.

**Safe exploration protocol:**
1. Save current SMU state (metrics table snapshot, current VIDs/freqs)
2. Send one new command; record response status byte
3. If status = `0xFE` (unknown): command not implemented, safe to move on
4. If status = `0xFF` (failed): command exists but rejected; note and retry
   with different arguments
5. If status = `0xFD` (prereq rejected): command needs something else first
6. If status = `0x00` (timeout): firmware never responded — DO NOT retry
   blindly; the firmware core may be stuck. Verify Q3 test message responds
   before continuing. If Q3 hangs, reboot required.
7. After any command that changes state: verify metrics table looks sane
8. Never chain unknown commands without verifying each step

**Q0 caveat**: Q0 is "disabled by default" in the library. It must be
explicitly enabled and treated with extra caution.

---

## Phase 0 — Tooling and baseline

0.1 Ensure `bc250_smu_oc` is installed and `bc250-detect` runs cleanly.

0.2 Write a baseline capture script that snapshots:
- All SMU metrics (per-core freq/temp/power, GPU clock, voltages)
- Current feature mask (`get_enabled_smu_features`)
- All P-state clocks Q3:0x3B for pstate 0–7
- Core frequencies Q3:0x43 for cores 0–7
- SoC DPM values Q3:0x42 for indices 0–19
- Current VIDs Q0:0x38, Q3:0x36/0x37

0.3 Set up a continuous monitor alongside experiments:
`watch -n1 'cat /sys/class/hwmon/hwmon*/temp*_input'`

DELIVERABLE: `smu-baseline.py` — idempotent state snapshot tool.

---

## Phase 1 — Systematic enumeration of Q1, Q2 unknowns, Q4

**STATUS: Partially complete (2026-06-08). Results in `smu/smu-enumerate-2026-06-08.txt`.**

### Confirmed safe range (Q1 and Q2:0x01–0x10)

| Cmd | Status | Response | Notes |
|---|---|---|---|
| Q1:0x01 | OK | value+1 | Test/ping message — same as Q3:0x01 |
| Q1:0x02 | OK | 0x00580600 | Firmware version (v0x58.06.00), same on Q2 |
| Q1:0x08 | FAILED | 0 | Command exists, hard-rejected; gated |
| Q1:0x10 | OK | arg echo | Scratchpad / address setter |
| Q2:0x01 | OK | value+1 | Test/ping |
| Q2:0x02 | OK | 0x00580600 | Firmware version |
| Q2:0x03 | OK | 0x17 (23) | Known constant |
| Q2:0x04 | OK | "AMD BC-250" | Device name (indexed) |
| Q2:0x07–0x0A | OK | arg echo | Arg echo; 0x0A returns 3/2 (count?) |
| Q2:0x0B | OK | 0x9C8D0000 | Indexed: idx=0 has data, idx=1 returns 0 |
| Q2:0x0C | FAILED | 0 | Exists, hard-rejected |
| Q2:0x0D–0x10 | OK | arg echo | Likely address setters (matches 0x0D/0x0E names) |

### DANGER ZONE — do not probe without Ghidra analysis first

**Q2:0x11–0x3F and all of Q4**: sending these commands caused permanent SMU
firmware hang requiring reboot (2026-06-08). They are NOT simple "unknown"
commands returning 0xFE — the firmware starts executing them and never
completes within any reasonable timeout. The single-threaded SMU firmware core
blocks all other queues (including Q3) until reboot.

Root cause hypothesis: these are DRAM training, memory controller
reconfiguration, or boot-sequencing operations that were never designed to be
called at runtime.

**Next step for this range: Phase 2 (Ghidra) must come first.**

### Q2:0x0B data: 0x9C8D0000

Index 0 returns 0x9C8D0000; index 1 returns 0; index ≥ 0xFF → FAILED.
Best guess: packed dual-clock value (upper 16 bits = 0x9C8D = 40077). Unknown
domain. Candidates: LPDDR5 PHY frequency, DF/fabric frequency in some encoding.
Cross-reference against Ghidra firmware analysis.

DELIVERABLE: `smu-enumerate.py` (done); annotated results pending Ghidra.

---

## Phase 2 — SMU firmware extraction and Ghidra analysis

The bc250-collective found the mailbox descriptor table at offset `+0x00B00000`
in the SMU firmware image via Ghidra. The firmware is embedded in the BIOS ROM.

2.1 **Extract the SMU firmware from Robin5.00** (already in the repo):
```bash
binwalk -e Robin5.00  # already done
# Find the MP1 firmware blob — typically an ARM Cortex-M3/M4 image
# marked by PSP firmware header or AMD firmware entry
```

2.2 **Load in Ghidra** with ARM Cortex-M architecture. The base address is
known from the `+0x00B00000` descriptor table offset. Look for:
- The mailbox dispatch table: indexed by command ID, each entry is a function
  pointer
- The secure access gate: what flag the 0x27/0x2A–0x2F group checks
- FCLK/MEMCLK command handlers: search for DRAM clock register writes
- The boot-init sequence: what state changes on first valid message

2.3 **Cross-reference** with `smu_v11_8_ppsmc.h` and `smu_v11_8_pmfw.h`
from the Linux kernel — these define the standard message IDs; any handler
that doesn't match a standard message is a custom/PS5-era command.

2.4 **Trace the secure access flag**: find where the Q3 0x27/0x2A–0x2F group
checks its gate condition. If it's a BIOS-set flag in a memory-mapped
register, it may be settable at runtime. If it's a PSP-signed blob, it's
PSP-locked and not reachable from Linux.

DELIVERABLE: Ghidra project + annotated function list for the SMU firmware.

---

## Phase 3 — FCLK/MEMCLK control

The SMU metrics table exposes `MemclkFrequency` and `SocclkFrequency` but no
set command has been mapped. This is a high-value target: GDDR6 memory
bandwidth directly affects GPU compute throughput.

3.1 Search the Ghidra output for register writes to the UMCCH (Unified Memory
Controller Channel) or DF (Data Fabric) address space that alter FCLK.

3.2 Cross-reference against the `query_vddcr_soc_clock(index)` (Q0:0x11)
response — if this returns DPM levels, there may be a corresponding set command
in a nearby command slot.

3.3 The DF DPM levels (FCLK) on standard Ryzen are set via PPSMC
`SetMinDeepSleepDcfclk` / `SetHardMinFclkByFreq`. Check if an equivalent
exists in Q0 or Q3 by searching for handlers that write to DF registers.

3.4 If found, test on-device with careful steps: increase FCLK by one DPM
level at a time, verifying stability with a short GPU compute benchmark
(e.g. `clinfo` + `ROCm` kernel) before each step.

DELIVERABLE: `FCLK` control command(s) documented and added to the library.

---

## Phase 4 — Secure access group investigation

The six locked Q3 commands (0x27, 0x2A–0x2F) need their gate condition found.

4.1 From the Ghidra analysis (Phase 2), identify what the gate checks:
- A specific memory-mapped register bit?
- A PSP-signed message result?
- A specific prior command sequence?

4.2 If gate is a runtime register: write the flag and test each command
in sequence, noting responses and any observable system state changes.

4.3 If gate is PSP-managed: document as unreachable from userspace without
a PSP exploit or modified firmware. Low priority — these commands may be
factory calibration tools anyway.

4.4 Cross-reference with the BIOS Advanced → CPU Configuration settings:
enabling SVM Mode or IOMMU changed AGESA state at boot — check whether any
of those changes set the SMU secure access flag.

DELIVERABLE: Gate mechanism documented; commands either decoded or confirmed
PSP-locked.

---

## Phase 5 — HDT+ JTAG exploration (advanced)

The BC-250 has an unpopulated 20-pin AMD HDT+ debug connector at J2 (bottom
of board). This provides JTAG access to the APU for hardware debugging.

5.1 Identify a compatible HDT+ probe (AMD-sourced or third-party Lauterbach/
Segger with AMD support).

5.2 Use JTAG to set breakpoints in the SMU firmware at the command dispatch
table entries for the secure access group. Observe what register values are
checked and what the commands do when executed under the debugger.

5.3 Use JTAG to trace the PS5 boot flow if alternative firmware can be loaded
— this is exploratory and requires PSP bypass research beyond current scope.

This phase is a stretch goal. The HDT+ connector being unpopulated means it
needs to be soldered. Requires an AMD-compatible JTAG probe.

---

## Phase 6 — CAC weights

The three CAC weight commands (Q0: 0x2F–0x31) reference AMD patents on dynamic
power modelling but have unknown effects. Lower priority than FCLK.

6.1 Find the CAC weight table handler in Ghidra. Identify which hardware
block's power model it feeds (GFX? CPU? L3?).

6.2 Test with small deltas from the current value; monitor power consumption
via the SMU metrics `Power[]` fields. If power consumption changes without
frequency changing, the CAC weights are affecting the SMU's internal power
estimate (which feeds boost decisions).

---

## Open questions for the community

1. **What does the `cyan-skillfish-governor-smu` init sequence do to the SMU
   that enables CPU boosting?** The exact command(s) sent at startup that
   change CPU power headroom need documenting.

2. **Does Q4 0x0A control FCLK or MEMCLK?** It's labelled "freq_op1" but
   untested. This is the lowest-risk entry point to Phase 3.

3. **Is the secure access flag related to the BIOS SVM/IOMMU setting?**
   Enabling IOMMU changes AGESA state significantly; worth checking if it also
   sets an SMU register the secure group checks.

4. **What are Q1 0x08 and 0x10?** These are isolated with no context. They may
   be simple health-check or version queries given Q1's short command list.

---

## Reference

- `bc250-collective/bc250_smu_oc` — the Python SMU library (baseline)
- `filippor/cyan-skillfish-governor` — GPU governor; SMU init sequence
- `bc250-collective/amd_smu_reverse_engineering` — Ghidra work (partial)
- `drivers/gpu/drm/amd/pm/swsmu/smu11/cyan_skillfish_ppt.c` — standard SMU
  interface (only 11 messages exposed to kernel)
- `drivers/gpu/drm/amd/pm/swsmu/inc/pmfw_if/smu11_driver_if_cyan_skillfish.h`
  — metrics table structure; VID encoding reference
- `mothenjoyer69/bc250-documentation/hardware.md` — J2 HDT+ pinout
