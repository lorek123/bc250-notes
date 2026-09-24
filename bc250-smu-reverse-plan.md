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

## Update 2026-09-24 — community developments

Our own work paused on 2026-06-08 (Phase 2.A exhausted). Since then:

- **Our SMU blobs are not encrypted** (own re-check, 2026-09-24). The PSP
  header says `encrypted=0`, and the "ciphertext" region is plaintext Xtensa
  code. Phase 2 is unblocked. See the Phase 2 status below.

- **Q3 msg `0x98` has been decoded** (rw-r-r-0644/bc250-core-unlock). It
  writes the constant `0xFF` to an arbitrary SMN address given in ARG0;
  `arg == 0` hangs the SMU. It is used to set the core-presence mask SMN
  `0x0115A870` from `0x77` to `0xFF` (8-core unlock). The mask persists
  across a warm reboot and reverts on a cold boot. Treat `0x98` as
  **dangerous**: it can write to any SMN register.
- **Handler-level pseudocode exists in the community** (`msg_q3_98` with
  `pmfw_queue_read_arg`, `smn_window_write`, `panic_lock_HANGS`). This is
  consistent with the finding above: the firmware was readable all along.
- **Secure-access gate (Phase 4) has a lead.** `Hexxeh/bc250-efi-core-unlock`
  says it "unlocks SMU secure access" from an EFI shim before the OS boots.
  Read its `smu.c` / `unlock.c`. The gate is likely a pre-OS SMU message
  sequence, not a PSP-signed operation.
- There is a known race: amdgpu uses the same `0xB8`/`0xBC` SMN index/data
  pair and the same mailbox. Any tool in `smu/` should issue its sequences
  atomically (single `setpci` call) or run with amdgpu idle.

See `community-status-2026-09.md` for the full snapshot.

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

**Secure access group** (Q3: 0x27, 0x2A–0x2F) — *lead as of 2026-09: see
Hexxeh EFI shim in the update above*:
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
- **Never send Q3:0x98** in any sweep — arbitrary-address SMN write of
  `0xFF`; `arg == 0` hangs the SMU (community-decoded, 2026-09).
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

**STATUS: UNBLOCKED (2026-09-24). The "AES-encrypted" conclusion below was
wrong.** A re-check (`smu/smu-xtensa-check.py`) shows:

- The PSP header of every SMU blob we hold (v2.00, v5.00, and the psptool
  extract) has `encrypted = 0` (offset 0x18) and `compressed = 0`. The PSP
  loads the body as-is.
- The high-entropy region 0x20000–0x3A000 is **plaintext Xtensa code**.
  It contains about 1,300 `retw.n` (`1d f0`) and about 900 `entry`
  (`36 xx 0x`) patterns, where random data would give about 2 of each.
  Capstone 6 linear-decodes ~96% of it as valid Xtensa: `l32r`, `call8`,
  `memw`, `l32i`/`s32i`… A sample function at body offset 0x2004c is
  `entry a1,0x20` → an MMIO read-modify-write with `memw` → a polling loop
  → `retw.n`.
- Dense Xtensa code (24/16-bit mixed encoding, windowed ABI) simply
  measures ~7.1–7.3 b/B. Entropy alone was the wrong test. "0 ARM `BX LR`"
  was the wrong ISA check.
- The low region (0x00000–0x1C000) holds literal pools, tables and strings.
  Code references into it with `l32r` (e.g. `l32r a4, 0x1753c`), consistent
  with a flat image loaded at 0.

This matches the community having handler pseudocode (`msg_q3_98`). Next
step: load the body in Ghidra as Xtensa LE at base 0, then find the queue
dispatch tables. Check whether the local Ghidra install ships an Xtensa
processor module (`ls ~/ghidra/Ghidra/Processors | grep -i xtensa`). If
not, use the community plugin.

The original (incorrect) analysis is kept below for the record.

### What we found

The SMU firmware blob (PSP type 0x08, 256KB, at Robin5.00 ROM offset 0x8FEE00)
has two distinct sections:

| Offset | Size | Entropy | Content |
|---|---|---|---|
| 0x00000–0x1FFFF | 128 KB | 0.2–4.5 b/b | **Cleartext**: PSP cert header, firmware version (v88.7.1), command-dispatch metadata, configuration tables, C++ debug strings |
| 0x20000–0x3BFFF | 112 KB | 7.2–7.3 b/b | **AES-encrypted**: actual ARM code section; PSP-fused key, no public decryption path |
| 0x3C000–0x40200 | ~16 KB | 0.0 b/b | Zero padding |

~~Key evidence for encryption~~ (superseded, see status above): 0 BX LR (0x4770) instructions at aligned addresses
across the entire blob; no compression magic bytes; no valid ARM CM vector table;
entropy matches AES ciphertext. Decompression attempts (zlib, LZMA) failed.

### What we can read from the cleartext section

The `ioIf::setUpDiscTable_malloc` C++ symbol is at blob offset 0x15944. The
surrounding area (0x15800–0x15970) is the static initialization table for the
ioIf (IO Interface = mailbox) object. This is configuration DATA — function
pointers and parameter blocks pre-allocated in SRAM at runtime.

This data tells us the ioIf object EXISTS and has 5 queues, but does not
directly reveal the handler addresses (those are encrypted).

### Why the bc250-collective could use Ghidra

The collective's Ghidra work on this firmware used a **different BIOS version**.
Older AMD BIOS versions for related chips (Renoir, Cezanne, and possibly early
BC-250 BIOS P1.x/P2.x) ship with unencrypted SMU firmware. The Robin5.00
modded BIOS has encryption enabled for the SMU code section.

**Actionable alternatives:**

### Phase 2.D — PSP ABL analysis (COMPLETED 2026-06-08)

psptool (`pip install psptool`) successfully extracted and decompressed the PSP
ABL (AGESA Boot Loader) blobs from Robin5.00. These run on the PSP (Cortex-A5)
and use a PSP→SMU mailbox via `svc #0x28`.

**PSPSMC message IDs decoded from ABL1 + ABL4:**

| Message ID | Name | Source |
|---|---|---|
| 0x07 | PSPSMC_MSG_SwitchToStartupDfPstate | ABL4 `GnbSmuPStateChangeCAR` |
| 0x08 | PSPSMC_MSG_QueryNumberOfDfPstates | ABL1 `GnbSmuGetNumOfDfPstatesCAR` |
| 0x09 | PSPSMC_MSG_ConfigSocRail | ABL1 `GnbSmuInitAblCAR` |
| 0x0A | PSPSMC_MSG_QueryMemFreqOfDfPstate | ABL1 `GnbSmuGetMemFreqOfDfPstateCAR` |
| 0x0B | PSPSMC_MSG_ChangeGfxMode | ABL1 `GnbSmuRequestChangeGfxModeCAR` |
| 0x0D | PSPSMC_MSG_RequestMemoryTraining | ABL4 `GnbSmuSwitchToMemTrainingPstateCAR` |
| **0x0E** | **PSPSMC_MSG_SetupFclkPll** | **ABL1 `GnbSmuInitAblCAR`** |
| **0x0F** | **PSPSMC_MSG_SetupUclkPll** | **ABL1 `GnbSmuInitAblCAR`** |

**Critical finding for Phase 3**: FCLK (SetupFclkPll) and UCLK/MEMCLK
(SetupUclkPll) setup uses the **PSP→SMU PSPSMC interface** (SVC #0x28 from PSP
core). This is a separate, privileged mailbox — NOT the user-accessible Q0–Q4
interface. The PSPSMC interface uses different registers and is only accessible
from the PSP firmware, not from Linux userspace.

This means FCLK/MEMCLK runtime control via the user-accessible Q0–Q4 mailbox
may not exist. The PSP does FCLK/UCLK setup once at boot via PSPSMC; any
runtime control would need to be through the user mailbox Q0/Q3, and no
such command has been found. Phase 3 must verify this via Q4:0x0A ("freq_op1")
testing or unencrypted SMU firmware analysis.

Extracted blobs saved to `smu/abl/` (cleaned up names).

**How the blobs were extracted** (reconstructed 2026-09-24; no script was
committed):
```
pip install psptool            # also needs cffi on some systems
psptool -E Robin5.00           # list all PSP/BIOS directories + entries
psptool -X -d 0 -u -o smu/abl Robin5.00   # dir 0, decompress zlib'd entries
```
The `dNN_eMM_TYPE~0xTT_version` filenames are psptool's `-X` naming. Only
**directory 0** (the PSP L1 directory) was saved. The other directories in
the ROM (BIOS directory, any L2 / secondary PSP directory) were not extracted.
`Robin5.00` itself is gitignored. psptool's `-c` (decrypt) is irrelevant
here: it only knows the Zen/Zen+ IKEKs, and no dir-0 entry is encrypted.

2.A **Unencrypted SMU firmware — MOOT (2026-09-24): our own blobs are
already plaintext.** Original 2026-06-08 survey, based on the same flawed
entropy test (the other chips' images may be plaintext too):
- BC-250 v2.00 (earliest available): encrypted (7.0-7.3 b/b)
- Van Gogh (Steam Deck, AMD official `firmware_binaries` repo): encrypted
- Renoir v2000a, Cezanne, Mendocino, Picasso: all encrypted or .csbin (8.0 b/b)
- No separate `*_smc.bin` in linux-firmware for Cyan Skillfish or Renoir
- Quarkslab Steam Deck PSP research = UEFI/SMM, not SMU firmware decryption
AMD encrypts SMU firmware as a consistent policy across all Zen-era chips.

**Architecture note**: AMD SMU "since Zen" uses **Xtensa cores** (not ARM Cortex-M).
This confirms why ARM Ghidra analysis found 0 functions. If decrypted firmware is
ever obtained, use the `ghidra-xtensa` community plugin (Xtensa ISA support).
Ghidra does not include Xtensa by default.

Remaining paths: PSP exploit (academic/advanced), collaborating with bc250-collective
on whether their "Ghidra analysis" used ABL-level data or actual decrypted SMU.

2.B **Cleartext analysis**: The 128 KB cleartext section contains command
metadata. A systematic read of the dispatch table area (0x15800–0x16000) may
reveal command ID → handler mapping offsets, even without the code.

2.C **PSP public-key path (advanced)**: AMD PSP vulnerability research has
occasionally enabled firmware decryption. Monitor AMD PSP research; not
actionable today.

DELIVERABLE: PSPSMC message table documented (done). SMU Q0–Q4 dispatch table:
now doable. Load the plaintext Xtensa image in Ghidra.

---

## Phase 2.E — Is there a VCN power-up handler? (2026-09-24)

**Question:** the m2jgh8tg7r-bot VCN research is stuck on whether the VCN
block can be powered at all. Does the SMU firmware contain a VCN power-up
handler?

**Answer: no VCN power-up path exists.** Evidence, from five independent
angles:

1. **SMU firmware strings** (`smu_p300_v58060_mp1_fw.bin`, the v0.58.6.0
   image matching the running board): 187 printable strings, none matching
   `vcn|uvd|jpeg|vce|gate|video`. Only `AMD BC-250` and one `ioIf::` symbol.
2. **Ghidra decompilation** (Xtensa LE, base 0, 1,280 functions). No PLL /
   divider / clock-setup idioms. The heavy register functions load bases
   from the literal pool (no inline VCN register block identifiable), and
   nothing decompiles to a VCN enable/ungate sequence.
3. **No VCN message in the exposed interface.** The kernel Cyan PPSMC list
   (`smu_v11_8_ppsmc.h`) has no VCN/JPEG message; Renoir's `PowerUpVcn 0xC`
   is `RequestCorePstate` on Cyan. `cyan_skillfish_ppt_funcs` has no
   `dpm_set_vcn_enable`, so nothing ever asks the SMU to power VCN.
4. **Boot never clocks VCN.** The PSP ABL's complete clock-setup command set
   is `SetupFclkPll` + `SetupUclkPll` only (repo `ghidra-psp/` strings).
   There is no VCLK/DCLK (VCN clock) PLL setup at boot. VCLK/DCLK appear in
   the SMU metrics struct, but that is read-only monitoring, and with the
   PLLs unprogrammed those fields have no real source.
5. **No VCN firmware to run.** The BIOS PSP directory ships no VCN image
   (see `community-status-2026-09.md` §6b), and linux-firmware has none for
   this part.

**Caveat:** without symbols or a datasheet, a dormant handler that is wired
to no message and touches no named register cannot be *disproven* by
decompilation alone. But every reachable path, every clock-setup step, and
every firmware-provenance check says VCN is simply not a subsystem this SMU
manages. Powering VCN would need new SMU firmware, not a hidden command.

**Reproduce:**
```
# extract the version-matched SMU code body
python3 -c "b=open('smu/smu_p300_v58060_mp1_fw.bin','rb').read(); \
            open('/tmp/smu_code.bin','wb').write(b[0x100:0x100+0x40000])"
# Ghidra 12.x headless, Xtensa little-endian, base 0
analyzeHeadless proj smu -import /tmp/smu_code.bin \
    -processor "Xtensa:LE:32:default" -loader BinaryLoader -loader-baseAddr 0x0
```

---

## Phase 3 — FCLK/MEMCLK control

**STATUS: Updated with ABL findings (2026-06-08). FCLK/UCLK setup confirmed
at PSP→SMU level (PSPSMC 0x0E/0x0F). User-accessible Q0–Q4 equivalent unknown.**

The SMU metrics table exposes `MemclkFrequency` and `SocclkFrequency` but no
set command has been mapped in Q0–Q4. The PSP ABL analysis confirms the SMU
firmware has FCLK/UCLK PLL setup capability (PSPSMC_MSG_SetupFclkPll/UclkPll)
but these are privileged PSP-only messages.

3.1 **Test Q4:0x0A ("freq_op1")**: The library labels this "freq_op1" but it
has never been safely tested. With the Phase 1 finding that Q4 causes firmware
hangs, this must wait for Ghidra analysis of an unencrypted SMU firmware (2.A).

3.2 **Cross-reference Q0:0x11** (`query_vddcr_soc_clock(index)`) baseline data:
From the Phase 0 baseline, DPM[11,12] returned 0xFFFFFFFF — those slots are
likely FCLK/MEMCLK DPM levels that have no corresponding set command in Q0.

3.3 **DPM baseline table interpretation** (from Phase 0 snapshot):
```
DPM[ 0]: 1254 MHz  ← active SocClk/FCLK
DPM[ 1]:  500 MHz  ← DPM level 0
DPM[ 2]:  762 MHz  ← DPM level 1
DPM[ 3]:  762 MHz  ← DPM level 2 (duplicate?)
DPM[ 8]:  500 MHz  }
DPM[ 9]:  738 MHz  } different domain, possibly UCLK/MCLK DPM levels
DPM[10]: 1000 MHz  }
DPM[11,12]: 0xFFFF ← not populated (FCLK/MEMCLK PLL not user-settable?)
```

3.4 If an unencrypted SMU firmware reveals a Q0/Q3 FCLK set command: test with
careful steps (one DPM level at a time, stability check via `clinfo` workload).

DELIVERABLE: FCLK control command — pending unencrypted SMU firmware analysis.

---

## Phase 4 — Secure access group investigation

The six locked Q3 commands (0x27, 0x2A–0x2F) need their gate condition found.

4.0 **(New, 2026-09 — do this first.)** Read `Hexxeh/bc250-efi-core-unlock`
(`smu.c`, `unlock.c`). It claims to unlock SMU secure access pre-OS. Document
the message sequence and check if it also unlocks Q3 0x27/0x2A–0x2F.

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
   (Likely superseded: the EFI shim sets it from pre-OS; see 4.0.)
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
- `rw-r-r-0644/bc250-core-unlock` — Q3 0x98 handler decode, 8-core unlock
- `Hexxeh/bc250-efi-core-unlock` — EFI shim, SMU secure-access unlock
- `GabriWar/bc250-core-cu-unlock` — Linux-side 0x98 tool, raw register sequence
