# BC-250 Community State — Snapshot (2026-09-24)

What the wider BC-250 ecosystem looks like as of late September 2026, and how
it relates to the findings in this repo. This file is a literature survey of
public repos and guides. **None of it has been re-tested on our board** unless
the text says so. Our own measurements date from 2026-05-31 → 2026-06-08.

---

## TL;DR — what changed since our June work

| Area | June 2026 (our notes) | September 2026 (community) |
|---|---|---|
| Recommended kernel | 6.18.18 LTS / 6.17.11+ | **7.1.x** (CachyOS default) or **6.18 LTS**. Still avoid 6.15.0–6.15.6 and 6.17.8–6.17.10 |
| Mesa | 26.x | 26.x standard. Out-of-tree RADV patches enable async compute |
| GPU CUs | 24 of 40 | **40-CU unlock** works (runtime tool or kernel patch) |
| CPU cores | 6 of 8 | **8-core unlock** works (SMU Q3 msg `0x98`, EFI shim, or patched BIOS) |
| ROCm | crashes (`ring sdma0 timeout`) | SDMA root cause found: **wrong SDMA microcode**. The navi12 microcode fixes it; most of the ROCm stack runs with kernel patches |
| IOMMU | **working** via BIOS toggle (our finding) | Community guides **still say "broken, disable in BIOS"** |
| SMU secure-access group | gate unknown | EFI shim claims to "unlock SMU secure access" pre-OS. Handler pseudocode for Q3 messages is circulating |

---

## 1. Kernel / OS

- Community guides (katzzero guide, verified 2026-09-14) recommend
  **Linux 7.1.x or 6.18 LTS**. The broken ranges are unchanged:
  6.15.0–6.15.6 and 6.17.8–6.17.10 (display failures).
- Mesa 26.x is the standard. CachyOS is the recommended distro. Bazzite,
  Fedora 43+, Arch, Debian and Ubuntu are all in use.
- BIOS guidance: P2.00–P3.00 or P5.00, **avoid P4.00**, always clear CMOS
  after flashing, never use Smokeless_UMAF.
- GPU governor: voltage floor ≥ 700 mV, otherwise the GPU locks at 1500 MHz.

**Impact on this repo:** our tests ran on Bazzite kernel 6.19.14-ogc5.1, which
is outside both recommended lines. Re-validate IOMMU and SSDT-PST on 6.18 LTS
and 7.1.x before writing anything up upstream.

## 2. 40-CU GPU unlock

- `duggasco/bc250-40cu-unlock` (forked widely) re-enables the 16 harvested CUs
  by writing **two** registers at amdgpu init: the CC harvest mask and the SPI
  dispatch mask. Neither register works alone. Gated on PCI ID `0x13FE`,
  `amdgpu.bc250_cc_write_mode=3`.
- 1.61× compute scaling has been verified. At 40 CU / 2 GHz the chip draws
  ~181 W and hits 96 °C. The recommended sweet spot is 1500 MHz / 900 mV.
- No firmware change is involved. The unlock is a kernel parameter/patch, or a
  runtime "Live Manager" tool.

## 3. 8-core CPU unlock (August 2026)

- Only 6 of 8 Zen 2 cores are enabled from the factory. The other two are
  **masked, not fused**. The mask is SMN `0x0115A870`: factory value `0x77`
  (6 cores), `0xFF` for 8 cores.
- The unlock uses **SMU queue 3, message `0x98`** (our Q3 = CMD `0x03B10A20`,
  RSP `0x03B10A80`, ARG `0x03B10A88`). It is reached through the `0xB8`/`0xBC`
  SMN index/data pair on `00:00.0`. Handler pseudocode published by
  `rw-r-r-0644/bc250-core-unlock`:
  ```c
  void msg_q3_98(pmfw_queue_t queue) {
      int arg = pmfw_queue_read_arg(queue);
      if (arg != 0) {
          smn_window_write(0, arg, 0xff, 2);   // writes 0xFF to any SMN addr
          smn_window_read(0, arg, 2);
      } else
          panic_lock_HANGS();                  // arg==0 hangs the SMU
      pmfw_queue_write_status(queue, 1);
  }
  ```
  It looks like a debug leftover: it writes `0xFF` to an arbitrary SMN address.
- There are three delivery methods:
  1. Linux tool (`rw-r-r-0644/bc250-core-unlock`, `GabriWar/bc250-core-cu-unlock`):
     set mask, then warm reboot (`/sys/kernel/reboot/mode=warm`). The unlock
     **reverts on cold boot**, which serves as a guaranteed escape hatch.
  2. EFI shim (`Hexxeh/bc250-efi-core-unlock`): runs every boot from USB/ESP
     and "unlocks SMU secure access", writes the mask, and warm-reboots.
  3. Patched BIOS (`Bc250CoreUnlockDxe` DXE driver): permanent, but needs an
     external programmer for recovery.
- Reported gain: +5–14% FPS in CPU-bound games.
- There is a known race: amdgpu uses the same `0xB8`/`0xBC` pair and SMU
  mailbox. The tools issue the sequence as one `setpci` call to narrow the
  race window, but the race is not eliminated.

**Impact on this repo:** see §7. Our SSDT-PST covers only 12 logical CPUs.

## 4. GPU compute queues / async compute

- `DryhoppedIPA/bc250-gfx1013-fix` carries 3 kernel patches and 3 Mesa/RADV
  patches (tested on Fedora 43, kernel 7.1.5):
  - The chip powers on with `PARTIAL_TG_EN` misconfigured. RADV copy shaders
    corrupt images deterministically as a result. The fix reuses existing
    GCN3-era workaround logic for GFX1013.
  - The kernel patches fix the compute-queue (ACE) teardown lifecycle.
  - RADV detects GFX1013 as RDNA2. It should be RDNA1-class (GFX10.1).
- Reported ~20% FPS in Cyberpunk 2077 (1440p Medium), with 0 Vulkan CTS
  regressions. **Not upstream.**

## 5. ROCm

- `ROCm/ROCm#6313` (our reference, opened 2026-05-28) is **still open, in
  triage**, with no AMD fix.
- `akandr/bc250-rocm` (Aug–Sep 2026, ROCm 6.4.2, kernels 6.18.9 → 7.1.8):
  - **SDMA root cause: the board ships with the wrong SDMA microcode.**
    Transfers larger than 16 KiB fail silently. With the navi12 SDMA microcode,
    every size from 4 KiB to 2 GiB completes. This is not a hardware defect.
  - The stack needs 4 kernel changes: a runlist-rebuild TLB flush, a
    map-side SVM flush, PASID KIQ flush control, and the 40-CU unlock.
    Plus a native gfx1013 rocBLAS build (stock ships only gfx1010 symlinks)
    and a PyTorch source build (`PYTORCH_ROCM_ARCH=gfx1013`).
  - GPU reset is non-recoverable on this chip, so use `amdgpu.gpu_recovery=0`.
  - Decode speed is ~95–100% of Vulkan, prefill is 1.4–2.3× slower.
    Conclusion: Vulkan (RADV / llama.cpp Vulkan) remains the practical path.
- **Impact on this repo:** the README said "ROCm 7.x crashes on SDMA0 bug". That
  is now attributed to firmware, not ROCm. RustiCL remains our working OpenCL
  path.

## 6. IOMMU — the community has not caught up

Every current guide we checked (katzzero guide 2026-09-14, akandr/bc250,
awesome-bc250) still says: *"IOMMU is broken, causes crashes and display
failures — disable it in BIOS."*

Our 2026-06-01 result contradicts this. Enabling **SVM Mode + IOMMU in
Advanced → CPU Configuration** makes AGESA publish an IVRS. AMD-Vi then
initialises cleanly with `iommu=pt` (see `iommu-result.md`).

**Caveats before we push the correction upstream:**
- The guides mention *display failures*, not just boot crashes. We only
  validated `iommu=pt` (passthrough) on kernel 6.19.14. Full DMA translation
  (default `iommu` / `amd_iommu=force_isolation`, as used when amdgpu is behind
  a translated domain) is **untested**. It may be the source of the reported
  display failures.
- We have not tested IOMMU on 6.18 LTS / 7.1.x, or on stock (non-modded)
  P3.00 / P5.00.
- We have not tested it alongside the 40-CU or 8-core unlocks.

The write-up PR to `elektricM/amd-bc250-docs` is **still pending**. Those
docs were last touched around March 2026, per the repo metadata we saw.

## 7. Consequences for this repo's artifacts

1. **SSDT-PST does not cover an 8-core board.** The DSDT declares
   `\_PR.P000`–`\_PR.P00F` (16 processor objects). `SSDT-PST.dsl`, and AGESA's
   IOMMU-mode SSDT3 `BC250CST`, only populate `P000`–`P00B` (12 logical CPUs =
   6C/12T). After an 8-core unlock (8C/16T), CPUs 12–15 would get **no
   `_PSS/_PCT/_PSD`**, and acpi-cpufreq would not manage them. Fix: add
   `P00C`–`P00F` scopes that reuse `PPCT/PPSS/PPSD`. The shared `_PSD` is
   harmless: the kernel ignores it on Zen 2 (see `phase2-pstate-result.md`).
   **Untested.** Check first whether the MADT on an unlocked board
   enumerates 16 LAPICs.
   The PSP is not involved. The PSP ABL blobs we extracted contain no
   core-mask references. The mask is SMU-owned (SMN `0x0115A870`) and is reset
   on a cold boot. After the warm reboot, AGESA sees 8 cores, and the static
   DSDT already declares all 16 processor objects.
2. **SMU plan Phase 4 (secure-access group)** now has a lead. The Hexxeh EFI
   shim performs a "secure access unlock" from pre-OS. Read its `smu.c` /
   `unlock.c` to find the gate. See `bc250-smu-reverse-plan.md`.
3. **SMU plan Phase 2.A conclusion needs softening.** Someone in the community
   has handler-level pseudocode for Q3 messages (names like
   `pmfw_queue_read_arg`, `smn_window_write`). So a readable SMU firmware image,
   or equivalent, exists somewhere, despite our "all encrypted" survey. The
   source is not disclosed in the repo; ask in the bc250-collective Discord.
4. **Q3 msg `0x98` belongs in the danger list.** It is an arbitrary-address
   SMN write, and `arg == 0` hangs the SMU. Never include it in enumeration
   sweeps.

---

## Sources

- katzzero/bc250-unofficial-community-guide — https://github.com/katzzero/bc250-unofficial-community-guide
- elektricM/amd-bc250-docs — https://github.com/elektricM/amd-bc250-docs
- duggasco/bc250-40cu-unlock — https://github.com/duggasco/bc250-40cu-unlock
- rw-r-r-0644/bc250-core-unlock — https://github.com/rw-r-r-0644/bc250-core-unlock
- GabriWar/bc250-core-cu-unlock — https://github.com/GabriWar/bc250-core-cu-unlock
- Hexxeh/bc250-efi-core-unlock — https://github.com/Hexxeh/bc250-efi-core-unlock
- DryhoppedIPA/bc250-gfx1013-fix — https://github.com/DryhoppedIPA/bc250-gfx1013-fix
- akandr/bc250-rocm — https://github.com/akandr/bc250-rocm
- akandr/bc250 — https://github.com/akandr/bc250
- kalpakprod/awesome-bc250 — https://github.com/kalpakprod/awesome-bc250
- MTSistemi/SkillFishOS — https://github.com/MTSistemi/SkillFishOS
- ROCm/ROCm#6313 — https://github.com/ROCm/ROCm/issues/6313
- filippor/cyan-skillfish-governor (smu branch) — https://github.com/filippor/cyan-skillfish-governor
