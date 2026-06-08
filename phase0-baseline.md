# Phase 0 Baseline — BC-250 (2026-05-31)

## Hardware / Software

| Item | Value |
|---|---|
| Board | AMD BC-250 |
| BIOS | P3.00 (stock) |
| OS | Bazzite 44.20260515 (immutable Fedora / ostree) |
| Kernel | 6.19.14-ogc5.1.fc44.x86_64 (Bazzite OGC build) |
| Bootloader | GRUB 2.12 with BLS entries |
| Boot device | /dev/nvme0n1 (NVMe SSD) |

## Kernel cmdline (current boot — ostree:0)

```
ostree=/ostree/boot.0/default/.../0 rhgb quiet root=UUID=025bee1b-...
vconsole.keymap=pl rootflags=subvol=root rw bluetooth.disable_ertm=1
mitigations=off video=DP-1:1920x1080@60e iommu=off
```

`iommu=off` is a manually applied workaround in the current boot entry.
The alternate entry (ostree:1) does NOT have `iommu=off`.

## CONFIG_ACPI_TABLE_UPGRADE

```
CONFIG_ARCH_HAS_ACPI_TABLE_UPGRADE=y
CONFIG_ACPI_TABLE_UPGRADE=y
```

The initrd ACPI override mechanism is available. ✓

---

## SSDT-PST track baseline

### cpufreq interface
- `/sys/devices/system/cpu/cpu0/cpufreq/` — **ABSENT**
- No standard ACPI cpufreq driver loaded
- `cpupower` not installed

### Actual CPU frequency scaling
Despite the absent cpufreq interface, CPUs ARE dynamically scaling:

```
cpu MHz: 3492, 3202, 3415, 1926, 2114, 1894, 1827, 1761, 1537, ...
```

This is provided by **`cyan-skillfish-governor-smu` v0.4.6** (layered RPM),
active since boot, using direct SMU (System Management Unit) communication.
It bypasses the ACPI cpufreq stack entirely.

**Implication for the SSDT-PST track**: The immediate problem (CPU stuck at
one frequency) is already solved by the SMU governor. The SSDT-PST work
would add the *standard ACPI cpufreq interface* (`/sys/devices/system/cpu/
cpu*/cpufreq/`) for tools like `cpupower`, governors, and software that
reads the standard sysfs. Worth doing for compatibility, but not urgent.

### ACPI tables present
SSDT1 (1560 B) and SSDT2 (6466 B) are published by BIOS — contents TBD
(need sudo to dump). No SSDT-PST (_PSS objects) in either, confirmed by
the absent cpufreq driver.

---

## IOMMU track baseline

### IVRS status
```
IVRS — ABSENT
```

The BIOS does not publish an IVRS (I/O Virtualization Reporting Structure)
table at all. This is the smoking gun: without IVRS, the kernel's AMD-Vi
driver has no hardware description to initialize against, so enabling IOMMU
causes a crash.

**Hypothesis update**: The original hypothesis was "malformed IVRS". The
actual finding is stronger: *IVRS is completely absent*. Possible causes:

1. AGESA on Cyan Skillfish does not generate IVRS for this board SKU.
2. A BIOS option (not exposed in setup) gates IVRS generation.
3. The IOMMU hardware is present but disabled at the AGESA/PSP level.

This is now confirmed by direct observation, not inference.

### Current workaround
`iommu=off` in the kernel cmdline prevents AMD-Vi from attempting
initialization. The IOMMU is non-functional but the system is stable.

---

## Bazzite / ostree constraints

### Filesystem layout
| Mount | Device | FS | RW? |
|---|---|---|---|
| /boot | /dev/nvme0n1p2 | ext4 | RW (root only) |
| /boot/efi | /dev/nvme0n1p1 | vfat | RW (root only) |
| /sysroot | /dev/nvme0n1p3 | btrfs | RO |
| /etc, /var, /home | /dev/nvme0n1p3 | btrfs | RW |

`/boot` is ext4 and writable with sudo. The ostree initrd lives at:
```
/boot/ostree/default-<hash>/initramfs-6.19.14-ogc5.1.fc44.x86_64.img
```

### initrd override approach on Bazzite
The standard plan (prepend CPIO to initrd) needs adaptation:

- Cannot modify the ostree-managed initrd directly
- **Correct approach**: place the ACPI override CPIO at `/boot/acpi_override.cpio`
  and add a *new* BLS boot entry at `/boot/loader/entries/bc250-pstate.conf`
  that lists both the override CPIO and the original initrd:
  ```
  initrd /acpi_override.cpio
  initrd /ostree/default-.../initramfs-6.19.14-ogc5.1.fc44.x86_64.img
  ```
  GRUB with BLS supports multiple `initrd` directives; the kernel concatenates
  them, treating the first as early CPIO.

- Keep the two existing ostree entries unchanged as default/fallback.

### Tools gap
- `iasl` (acpica-tools) — **NOT installed**. Needed for Phase 1.
  Install via: `rpm-ostree install acpica-tools` (requires reboot), or
  use a toolbox/distrobox container, or download the binary standalone.
- `cpio`, `flashrom` — present ✓

---

## Gate assessment

| Gate | Status |
|---|---|
| No native P-states at baseline | ✓ CONFIRMED (cpufreq absent) |
| CONFIG_ACPI_TABLE_UPGRADE=y | ✓ CONFIRMED |
| IVRS absent (IOMMU track gate) | ✓ CONFIRMED — critical finding |
| Firmware backup for Phase 3 | NOT CHECKED (Phase 3 not planned yet) |

**GATE PASSED** for proceeding to Phase 1 (SSDT-PST) and IOMMU Phase 1.

---

## Immediate next steps

1. **Install `iasl`**: `rpm-ostree install acpica-tools` then reboot,
   or `toolbox run iasl` if a Fedora toolbox exists.
2. **Dump live ACPI tables** (with sudo): `acpidump -b` into the repo.
3. **Fetch bc250-acpi-fix SSDT source** and review _PSS objects.
4. **Disassemble SSDT1/SSDT2** to understand what the BIOS publishes.
5. For IOMMU track: research whether a synthetic IVRS can be injected
   via ACPI override (same mechanism as SSDT-PST override).
