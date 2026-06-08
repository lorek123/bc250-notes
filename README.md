# BC-250 Research Notes

Investigation and fixes for the ASRock BC-250 (AMD Cyan Skillfish / gfx1013),
a salvaged PS5 APU repurposed as a desktop/compute board.

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

## What's here

| File | Contents |
|---|---|
| [`phase0-baseline.md`](phase0-baseline.md) | Hardware/software baseline, Bazzite constraints |
| [`phase2-pstate-result.md`](phase2-pstate-result.md) | P-state investigation, hardware verification, Bazzite setup |
| [`iommu-result.md`](iommu-result.md) | IOMMU fix, IVRS analysis, IOMMU group topology, why community was wrong |
| [`bc250-smu-reverse-plan.md`](bc250-smu-reverse-plan.md) | SMU mailbox RE plan — known commands, gaps, safety framework |
| [`bc250-ssdt-pst-plan.md`](bc250-ssdt-pst-plan.md) | Original P-state work plan |
| `acpi-tables/` | Live ACPI dumps (pre-IOMMU): DSDT, SSDT1/2/3, IVRS, SSDT-PST source |
| `acpi-tables-iommu/` | Same tables captured with IOMMU enabled (adds SSDT3 BC250CST + IVRS) |
| Scripts | `pstate-apply.sh`, `fixup-iommu-pstate.sh`, `check-iommu-active.sh`, etc. |

## Hardware summary

| Item | Value |
|---|---|
| Board | ASRock BC-250 |
| APU | AMD Cyan Skillfish (gfx1013, RDNA 2, 12 WGPs / 24 CUs) |
| Die | PS5 Oberon — Zen 2 CPU + RDNA 2 GPU on one die |
| BIOS | P3.00 modded (TuxThePenguin0 — exposes NBIO chipset menu) |
| OS tested | Bazzite 44 (Fedora ostree), kernel 6.19.14-ogc5.1 |
| IOMMU kernel param | `iommu=pt` |
| CPU scaling | `acpi-cpufreq` + `cyan-skillfish-governor-smu` (coexist) |
| OpenCL | RustiCL (Mesa 26, OpenCL 3.0) — ROCm 7.x crashes on SDMA0 bug |

## Key findings

- **IOMMU**: BIOS defaults IOMMU to off; `iommu=on` crashes without it because
  AGESA never initialises the hardware. Two BIOS toggles fix it permanently.
- **P-states**: BIOS has the infrastructure (`_PDC` handlers, `APSS`) but
  `TBLD=4` prevents it from ever loading. External SSDT injection bypasses
  the broken BIOS path entirely.
- **SMU**: Cyan Skillfish uses a custom 5-queue SMU mailbox over PCI config
  space — separate from the standard PPSMC interface. CPU and GPU frequency
  control via this path is largely reverse-engineered by the bc250-collective.
  See [`bc250-smu-reverse-plan.md`](bc250-smu-reverse-plan.md) for open gaps.
- **ROCm**: gfx1013 is not officially supported. ROCm 7.x crashes on
  `ring sdma0 timeout` during HSA initialisation. RustiCL works fine.
- **PS5 heritage**: The limited AGESA feature set (no P-states, no IOMMU,
  no ALIB, limited SMU interface) reflects the PS5/mining origin — features
  never needed by those platforms were never implemented or were disabled.

## References

- [bc250-collective](https://github.com/bc250-collective/) — ACPI fix, SMU OC tools
- [cyan-skillfish-governor-smu](https://github.com/filippor/cyan-skillfish-governor) — GPU governor + SMU library
- [TuxThePenguin0/bc250-bios](https://gitlab.com/TuxThePenguin0/bc250-bios) — modded BIOS with NBIO menu
- [elektricM/amd-bc250-docs](https://github.com/elektricM/amd-bc250-docs) — community documentation
- [mothenjoyer69/bc250-documentation](https://github.com/mothenjoyer69/bc250-documentation) — hardware docs
- ROCm issue [#6313](https://github.com/ROCm/ROCm/issues/6313) — BC-250 SDMA crash
