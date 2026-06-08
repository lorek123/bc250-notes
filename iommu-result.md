# BC-250 IOMMU Fix — Root Cause & Resolution (2026-06-01)

## Outcome: IOMMU fully functional

AMD-Vi initialises cleanly. 14 IOMMU groups, GPU isolated in its own group,
VFIO passthrough ready. Both CPU P-states and IOMMU are active simultaneously
on the same boot.

---

## The fix — two BIOS checkboxes

```
BIOS Setup → Advanced → CPU Configuration
  SVM Mode : Disabled → Enabled
  IOMMU    : Disabled → Enabled
```

That is the entire fix. No kernel patches, no firmware surgery, no ACPI
injection. The hardware was working all along.

---

## Why everyone said it was broken

### 1. The crash pointed at the wrong layer

Adding `iommu=on` to the kernel cmdline on a stock BIOS causes an immediate
kernel panic. This was interpreted as broken hardware. The actual cause: with
IOMMU disabled in BIOS, AGESA never initialises the IOMMU hardware or generates
an IVRS ACPI table. The kernel's AMD-Vi driver attempts to touch uninitialised
hardware registers → crash. The crash is a symptom of the BIOS setting being
off, not of hardware being absent or broken.

### 2. Circular community documentation

The wiki says "IOMMU doesn't work" → new users read that and don't attempt
the BIOS toggle → the belief is never challenged. No one was motivated to
investigate further because the conclusion was already in the docs.

### 3. The modded BIOS was treated as a prerequisite for IOMMU

TuxThePenguin0's modded P3.00 exposes an NBIO Common Options chipset submenu.
The community assumed IOMMU was hidden in that new menu and unfindable without
the mod. In practice, the IOMMU toggle was in the standard Advanced → CPU
Configuration screen, which may have been accessible on stock P3.00 all along.

### 4. Mining board assumption

The BC-250 is a salvaged PS5 APU on a crypto mining board. The assumption was
"IOMMU was never validated for this SKU." In reality it is a full PS5/Oberon
die with complete IOMMU hardware. AGESA ships it disabled because mining
workloads don't need it.

---

## What AGESA does when IOMMU is enabled

Confirmed from binary analysis of Robin5.00 (and observed at runtime on P3.00
modded):

1. `AmdNbioIOMMUARIPEIEntry` runs during PEI phase — assigns MMIO base address
   to the IOMMU hardware block
2. `GnbEnableIommuMmio` — enables IOMMU MMIO at `0x00:00.2` (PCI BDF)
3. `GnbFmCreateIvrsEntry` → `GnbBuildIvmdList` — builds IVHD/IVMD structures
   describing PCI device scope
4. `InstallIvrsAcpiTable` — publishes the IVRS (208 bytes, v02) into ACPI
5. `AmdNbioAlibARIDxeEntry` — the ALIB DXE driver fires during IOMMU init
   (confirmed by binary analysis of Robin5.00). ALIB generation is triggered
   by IOMMU enablement, but see the caveat below.

### ACPI tables before vs after

| Table | Stock P3.00 (IOMMU off) | IOMMU enabled |
|---|---|---|
| DSDT | unchanged | unchanged (identical MD5) |
| SSDT1 "AMD CPU" | C-states for C000–C00B | unchanged |
| SSDT2 "AmdTable" | PCIe ALIB library | unchanged |
| SSDT3 "BC250CST" | absent | **present** (C-states for P000–P00B) |
| IVRS | absent | **present** (208 B, v02) |
| IOMMU PCI device | absent | **00:00.2** `1022:13e1` |

### SSDT3 "BC250CST" — what it actually is

SSDT3 (OEM Table ID `BC250CST`, compiled `INTL 20260408`) is a **C-state
table** for the `\_PR.P000`–`\_PR.P00B` processor namespace. It mirrors what
SSDT1 does for `\_PR.C000`–`\_PR.C00B`. With IOMMU enabled, AGESA now
provides C-state coverage for both processor namespaces.

This is significant for our SSDT-PST: the P000–P00B namespace (which our
injected `_PSS/_PCT/_PSD` targets) now has BIOS-supplied C-states alongside
the user-supplied P-states. Both coexist cleanly.

### ALIB status — still undefined

`\_SB.ALIB` remains undefined in all ACPI tables even with IOMMU enabled.
SSDT2 still contains `External (_SB_.ALIB, MethodObj)` as an unresolved
reference. The `AmdNbioAlibARIDxeEntry` driver fires (confirmed in binary)
but does not appear to install an AML `\_SB.ALIB` method on this platform.

In practice this does not affect AMD-Vi operation — the kernel's IOMMU driver
initialises correctly without ALIB. ALIB is used by the PCIe hot-plug stack
(SSDT2 function 0x06 calls), not by AMD-Vi directly.

---

### IVRS decoded

```
IVRS v02, 208 bytes — OEM "AMD   " / "AMD IVRS"
  IVInfo: 0x00203041

IVHD type 0x10 (legacy) + type 0x11 (with EFR):
  IOMMU DeviceId:     0x0002  (00:00.2)
  MMIO Base Address:  0xFEB80000
  Capability Offset:  0x0040
  Flags:              Coherent=1
  EFR Image (type 11): 0x0421600720094250

Device scope:
  Range  0x0008–0xFFFE : all PCI devices (bus 0 dev 1 fn 0 → bus 255)
  Alias  0x0200–0x02FF : sourced from 0x00A4
  Special 0x00, src 0x00A0, variety 0x02 : HPET
  Special 0x0D, src 0x00A0, variety 0x01 : IOAPIC (full interrupt passthrough)
  Special 0x0E, src 0x0001, variety 0x01 : IOAPIC
```

The IVHD device range covers the entire PCI bus. Both IVHD type 0x10
(required for older kernels) and type 0x11 (preferred, includes EFR) are
present, making this IVRS compatible across kernel versions.

## Kernel configuration used

```
iommu=pt        — passthrough mode: IOMMU active, DMA passthrough by default,
                  redirection only for VFIO-assigned devices. Safest first mode.
```

`amd_iommu=on` was also added initially but generates `AMD-Vi: Unknown option`
on kernel 6.19 and was subsequently removed. `iommu=pt` alone is sufficient.

---

## IOMMU groups (kernel 6.19.14, iommu=pt)

```
Group 0:  00:01.0  Ariel PCIe Dummy Host Bridge
Group 1:  00:08.0  Ariel PCIe Dummy Host Bridge
Group 2:  00:08.1  Ariel Internal PCIe GPP Bridge 0 to Bus A
Group 3:  00:10.0  FCH USB XHCI Controller
Group 4:  00:11.0  FCH SATA Controller [AHCI mode]
Group 5:  00:12.0  FCH USB OHCI Controller
          00:12.2  FCH USB EHCI Controller
Group 6:  00:13.0  FCH USB OHCI Controller
          00:13.2  FCH USB EHCI Controller
Group 7:  00:14.0  FCH SMBus Controller
          00:14.3  FCH LPC Bridge
Group 8:  00:14.4  FCH PCI Bridge
Group 9:  00:14.5  FCH USB OHCI Controller
Group 10: 00:15.0  Hudson PCI to PCI bridge (PCIE port 0)
          00:15.1  Hudson PCI to PCI bridge (PCIE port 1)
Group 11: 00:18.0–18.7  Ariel Device 24 (Data Fabric nodes)
Group 12: 01:00.0  Cyan Skillfish GPU [1002:13fe]          ← isolated ✓
Group 13: 01:00.1  GPU audio [1002:13ff]
          01:00.2  CCP/PSP [1022:143e]
```

**The GPU (01:00.0) is alone in group 12.** This is the ideal topology for
passthrough — no other devices need to move with it.

Group 13 contains the GPU's audio function and the CCP. For full GPU passthrough
these should be bound to vfio-pci as a unit alongside the GPU.

---

## Current system state (all features active simultaneously)

| Feature | Driver/Status |
|---|---|
| AMD-Vi | active, `iommu=pt`, 14 groups |
| IVRS | v02, 208 bytes, AMD IVRS OEM |
| IOMMU PCI device | `00:00.2` `1022:13e1` Ariel IOMMU |
| CPU P-states | `acpi-cpufreq`, 8 states 800–3200 MHz |
| SSDT-PST | injected via initrd override (`HACK/PSTATES`) |
| SMU governor | `cyan-skillfish-governor-smu` active alongside cpufreq |
| SVM (AMD-V) | enabled — KVM virtualisation available |
| VFIO modules | `vfio_pci`, `vfio_iommu_type1`, `vfio`, `iommufd` loaded |

---

## Investigation path (what we ruled out)

Before finding the BIOS toggle we explored and eliminated:

- **Synthetic IVRS injection** — ruled out: the IOMMU PCI device (00:00.2) is
  not visible on the bus when BIOS disables IOMMU, meaning hardware registers
  are uninitialised. Injecting a fake IVRS without live hardware would be
  useless and potentially crash-inducing.

- **ACPI table analysis** — revealed: `ALIB` was undefined in all three ACPI
  tables (DSDT, SSDT1, SSDT2) with IOMMU off. Also revealed `TBLD=4` killing
  the BIOS P-state loading mechanism. Both are symptoms of AGESA not running
  its full init path.

- **Robin5.00 BIOS binary** — analysed (16 MiB, 4.1 MiB decompressed FV
  section). Confirmed presence of AGESA IOMMU PEI/DXE drivers and the IVRS
  generation code path. Confirmed `IVRS table not generated` / `No base address
  assigned - IOMMU disabled` as the code path taken when disabled. Robin5.00
  was not needed — the modded P3.00 already had the BIOS option.

- **TuxThePenguin0 NBIO chipset menu** — the mod exposes additional NBIO
  settings but the decisive IOMMU toggle was in the standard Advanced → CPU
  Configuration, not in the new chipset submenu.

---

## Next steps for GPU passthrough

With group 12 isolated, the path to passthrough is:

1. Bind GPU + audio + CCP (groups 12 and 13) to `vfio-pci` at boot:
   ```
   # /etc/modprobe.d/vfio.conf
   options vfio-pci ids=1002:13fe,1002:13ff,1022:143e
   ```

2. Confirm binding:
   ```
   lspci -nnk -d 1002:13fe
   # Kernel driver in use: vfio-pci
   ```

3. Set up a VM (QEMU/libvirt) with the GPU passed through. On Bazzite, KVM is
   available (SVM enabled). The `evdi` module (DisplayLink) and Bazzite's GPU
   management stack will need consideration to avoid conflicts.

4. Note: Cyan Skillfish has no display output path when the GPU is passed to a
   VM (no iGPU fallback). The host will lose display. Plan accordingly.

---

## Files in this repo

| File | Description |
|---|---|
| `acpi-tables/DSDT.dsl` | Stock P3.00 DSDT — shows TBLD=4, ALIB absent |
| `acpi-tables/SSDT1.dsl` | AMD CPU C-states (unchanged by IOMMU enable) |
| `acpi-tables/SSDT2.dsl` | AMD AmdTable ALIB library (ALIB was undefined) |
| `acpi-tables/SSDT-PST.{dsl,aml}` | P-state SSDT — compiled clean, injected |
| `acpi-tables/acpi_override.cpio` | Early CPIO containing SSDT-PST.aml |
| `Robin5.00` | BC-250 BIOS binary analysed (not flashed) |
| `phase0-baseline.md` | Phase 0 findings — baseline before any changes |
| `phase2-pstate-result.md` | P-state track full result |
| `iommu-result.md` | This file |
| `pstate-apply.sh` | Patches current ostree BLS entry with SSDT-PST initrd |
| `fixup-iommu-pstate.sh` | Restores SSDT-PST after rpm-ostree kargs redeployment |
| `check-post-bios.sh` | Verifies IVRS generated after BIOS IOMMU enable |
| `check-iommu-active.sh` | Verifies AMD-Vi active and IOMMU groups populated |
| `test-pstate.sh` | Isolated P-state frequency hardware verification |
