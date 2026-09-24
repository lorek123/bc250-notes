# BC-250 Research Notes

Investigation and fixes for the ASRock BC-250 (AMD Cyan Skillfish / gfx1013),
a salvaged PS5 APU repurposed as a desktop/compute board.

> **Status (2026-09-24):** IOMMU and P-state fixes validated on our board
> (June 2026, kernel 6.19.14). SMU reverse engineering is paused: the SMU
> firmware is encrypted. The community has since shipped 40-CU and 8-core
> unlocks and found the ROCm SDMA root cause. See
> [`community-status-2026-09.md`](community-status-2026-09.md) for the
> ecosystem snapshot and the open items it creates here.

## What's fixed

### IOMMU — was believed hardware-broken, works with a BIOS toggle

```
BIOS → Advanced → CPU Configuration → SVM Mode: Enabled, IOMMU: Enabled
```

That's it. AGESA generates a proper IVRS, the IOMMU PCI device appears
(`00:00.2 1022:13e1`), 14 IOMMU groups, GPU isolated in group 12.
See [`iommu-result.md`](iommu-result.md) for full analysis and why the
community believed this was a hardware defect.

### CPU P-states — no native ACPI tables, fixable via SSDT injection

The BIOS publishes no `_PSS/_PCT/_PSD` objects. Injecting
[`acpi-tables/SSDT-PST.aml`](acpi-tables/SSDT-PST.aml) via initrd override
loads `acpi-cpufreq` with 8 P-states (800–3200 MHz). PERF_CTL MSR writes
are real — hardware follows the requests.

**On Bazzite (ostree)** — the proper persistence mechanism:
```
/etc/dracut.conf.d/bc250-acpi.conf   acpi_override="yes"
                                      acpi_table_dir="/etc/acpi_tables"
/etc/acpi_tables/SSDT-PST.aml
sudo rpm-ostree initramfs --enable    ← run once; survives all future upgrades
```

See [`phase2-pstate-result.md`](phase2-pstate-result.md).

> ⚠ `SSDT-PST` only covers `\_PR.P000`–`P00B` (12 threads, stock 6C/12T).
> On an **8-core-unlocked** board (16 threads), `P00C`–`P00F` have no
> P-states. The table needs 4 more scopes. This is untested.

## What's here

| File | Contents |
|---|---|
| [`community-status-2026-09.md`](community-status-2026-09.md) | Sept 2026 ecosystem snapshot: kernels, 40-CU/8-core unlocks, ROCm, IOMMU status in community docs |
| [`phase0-baseline.md`](phase0-baseline.md) | Hardware/software baseline, Bazzite constraints |
| [`phase2-pstate-result.md`](phase2-pstate-result.md) | P-state investigation, hardware verification, Bazzite setup |
| [`iommu-result.md`](iommu-result.md) | IOMMU fix, IVRS analysis, IOMMU group topology, why community was wrong |
| [`bc250-smu-reverse-plan.md`](bc250-smu-reverse-plan.md) | SMU mailbox RE plan — known commands, gaps, safety framework |
| [`bc250-ssdt-pst-plan.md`](bc250-ssdt-pst-plan.md) | Original P-state work plan |
| `smu/` | SMU baseline/enumeration scripts + results, SMU firmware blobs, PSP ABL extracts, Ghidra output |
| `acpi-tables/` | Live ACPI dumps (pre-IOMMU): DSDT, SSDT1/2/3, IVRS, SSDT-PST source |
| `acpi-tables-iommu/` | Same tables captured with IOMMU enabled (adds SSDT3 BC250CST + IVRS) |
| Scripts | `pstate-apply.sh`, `fixup-iommu-pstate.sh`, `check-iommu-active.sh`, etc. |

## Hardware summary

| Item | Value |
|---|---|
| Board | ASRock BC-250 |
| APU | AMD Cyan Skillfish (gfx1013, RDNA 1.5-class, 24 of 40 CUs enabled; 40-CU unlock exists) |
| CPU | Zen 2, 6 of 8 cores enabled (cores masked, not fused; 8-core unlock exists) |
| Die | PS5 Oberon — Zen 2 CPU + RDNA 2 GPU on one die |
| BIOS | P3.00 modded (TuxThePenguin0 — exposes NBIO chipset menu) |
| OS tested | Bazzite 44 (Fedora ostree), kernel 6.19.14-ogc5.1 |
| Kernel now recommended by community | 7.1.x or 6.18 LTS (avoid 6.15.0–6.15.6, 6.17.8–6.17.10) — our results not yet re-validated there |
| IOMMU kernel param | `iommu=pt` |
| CPU scaling | `acpi-cpufreq` + `cyan-skillfish-governor-smu` (coexist) |
| OpenCL | RustiCL (Mesa 26, OpenCL 3.0) — ROCm unusable stock (SDMA microcode bug, see below) |

## Key findings

- **IOMMU**: BIOS defaults IOMMU to off; `iommu=on` crashes without it because
  AGESA never initialises the hardware. Two BIOS toggles fix it permanently.
- **P-states**: BIOS has the infrastructure (`_PDC` handlers, `APSS`) but
  `TBLD=4` prevents it from ever loading. External SSDT injection bypasses
  the broken BIOS path entirely.
- **SMU**: Cyan Skillfish uses a custom 5-queue SMU mailbox over PCI config
  space — separate from the standard PPSMC interface. CPU and GPU frequency
  control via this path is largely reverse-engineered by the bc250-collective.
  Our enumeration found Q2:`0x11`+ and all of Q4 hang the SMU until reboot.
  The SMU code section is AES-encrypted in every image we checked. PSP ABL
  analysis shows FCLK/UCLK PLL setup is PSP-only (PSPSMC `0x0E`/`0x0F`).
  Community lead: Q3 msg `0x98` is a debug-leftover "write 0xFF to any SMN
  address" handler, used for the 8-core unlock.
  See [`bc250-smu-reverse-plan.md`](bc250-smu-reverse-plan.md).
- **ROCm**: gfx1013 is not officially supported. Stock ROCm dies on
  `ring sdma0 timeout` ([ROCm#6313](https://github.com/ROCm/ROCm/issues/6313),
  still open). Community root cause (akandr/bc250-rocm, Sept 2026): the board
  ships the wrong SDMA microcode. navi12's fixes it. The rest needs 4 kernel
  patches. Vulkan/RustiCL remain the practical path.
- **IOMMU in community docs**: as of Sept 2026, community guides still say
  "IOMMU broken — disable it". Our correction has not been published
  upstream yet. Full-translation mode (non-`pt`) is untested here.
- **PS5 heritage**: The limited AGESA feature set (no P-states, no IOMMU,
  no ALIB, limited SMU interface) reflects the PS5/mining origin — features
  never needed by those platforms were never implemented or were disabled.

## References

- [bc250-collective](https://github.com/bc250-collective/) — ACPI fix, SMU OC tools
- [cyan-skillfish-governor-smu](https://github.com/filippor/cyan-skillfish-governor) — GPU governor + SMU library
- [TuxThePenguin0/bc250-bios](https://gitlab.com/TuxThePenguin0/bc250-bios) — modded BIOS with NBIO menu
- [elektricM/amd-bc250-docs](https://github.com/elektricM/amd-bc250-docs) — community documentation
- [mothenjoyer69/bc250-documentation](https://github.com/mothenjoyer69/bc250-documentation) — hardware docs
- [duggasco/bc250-40cu-unlock](https://github.com/duggasco/bc250-40cu-unlock) — 40-CU GPU unlock
- [rw-r-r-0644/bc250-core-unlock](https://github.com/rw-r-r-0644/bc250-core-unlock) / [Hexxeh/bc250-efi-core-unlock](https://github.com/Hexxeh/bc250-efi-core-unlock) — 8-core CPU unlock (SMU Q3 `0x98`)
- [DryhoppedIPA/bc250-gfx1013-fix](https://github.com/DryhoppedIPA/bc250-gfx1013-fix) — async compute kernel + RADV patches
- [akandr/bc250-rocm](https://github.com/akandr/bc250-rocm) — ROCm investigation, SDMA microcode root cause
- ROCm issue [#6313](https://github.com/ROCm/ROCm/issues/6313) — BC-250 SDMA crash
