# CLAUDE.md — BC-250 firmware/IOMMU project

Persistent context for Claude Code working in this repo. Read this first.

## What this project is

Diagnosing and fixing broken hardware features on the ASRock BC-250 (AMD Cyan
Skillfish / gfx1013, a salvaged PS5 APU). Primary effort: root-cause the broken
IOMMU and land a fix. Secondary effort: replace the runtime CPU P-state SSDT
injection with a proper one. Full plans live in:

- `bc250-iommu-fix-plan.md` — the main IOMMU root-cause → fix workflow.
- `bc250-ssdt-pst-plan.md` — the standalone P-state track (can run independently).

## Hard rules (do not violate)

1. **Never flash firmware autonomously.** Reflashing the SPI chip (via `flashrom`
   write, EFI-shell `AfuEfix64.efi`, or any other method) is a HUMAN-only step.
   `flashrom` is read-only here unless a human explicitly runs the write.
2. **Never proceed to any reflash unless a verified firmware backup exists** (see
   Phase 0 of the IOMMU plan). Check for it; if absent, stop.
3. **Never modify the default boot entry or overwrite the stock initramfs.** Add
   new GRUB entries and new initrd files alongside the originals so a bad boot is
   a one-reboot recovery.
4. **Do not `b4 send` or email patches autonomously.** Stage the series + cover
   letter and hand back for human review.
5. Prefer non-destructive validation (initrd ACPI override) before anything that
   touches firmware.

## Human-only steps (tagged [HUMAN] in the plans)

Claude Code cannot do these — stop, print clear instructions, wait for confirmation:

- Entering BIOS setup / toggling BIOS settings (e.g. enabling IOMMU).
- Flashing firmware (any method).
- Clearing CMOS (battery pull / jumper).
- Attaching the CH341A/CH347T programmer + SOIC8 clip.
- Selecting a non-default GRUB entry at the boot menu.

Everything else is yours: log capture/parsing, ACPI table disassembly/edit/
recompile, initrd override construction, kernel quirk authoring + build, UEFITool
image inspection, patch preparation, and write-ups.

## Environment

- Hardware: ASRock BC-250, BIOS P3.00 or P5.00 (record stock vs TuxThePenguin0
  modded).
- Kernel: 6.18.18 LTS (recommended) or 6.17.11+. **Avoid 6.15.0–6.15.6 and
  6.17.8–6.17.10** — known broken on BC-250.
- Tools: `acpica-tools` (`iasl`, `acpidump`), `flashrom` (read-only), `cpio`,
  build-essential, `b4`, kernel `scripts/checkpatch.pl`, UEFITool NE. Verify and
  record versions before starting.

## Key paths

- Quirk site: `drivers/iommu/amd/init.c`; AMD-Vi init: `drivers/iommu/amd/`.
- Live ACPI tables: `/sys/firmware/acpi/tables/` (e.g. `IVRS`).
- Override mechanics: `Documentation/admin-guide/acpi/` + kernel config
  `CONFIG_ACPI_TABLE_UPGRADE`.
- DMI strings for quirk matching: `dmidecode -s baseboard-product-name` /
  `system-product-name` / `bios-version`.

## Working conventions

- Each phase produces a named deliverable (`phase1-diagnosis.md`, etc.). Commit
  artifacts (dmesg dumps, `.dsl`/`.aml`, lspci output) into the repo as you go.
- Treat phase GATEs as go/no-go. The IOMMU Phase 2 gate (clean AMD-Vi init via
  initrd override, no firmware write) is the project linchpin — do not advance to
  firmware-touching work without it.
- A negative result is a valid result. If a table override can't fix IOMMU init,
  document that it's likely AGESA-level and not table/quirk-reachable, and report
  back rather than forcing a dubious fix.

## Root-cause hypothesis status

Current working hypothesis for the IOMMU breakage: malformed/incomplete **IVRS**
ACPI table. This is INFERRED from the symptom pattern (works disabled, crashes
enabled, passthrough non-functional) and AGESA/AMD-Vi failure history — NOT
confirmed by teardown. Phase 1 is genuine diagnosis; keep the hypothesis
falsifiable.

## Dead ends (do not attempt)

- coreboot port — blocked by PSP-locked boot chain + no public AGESA blob for
  Cyan Skillfish.
- DisplayPort audio fix — non-standard, down in silicon/VBIOS.

## Reference

- `elektricM/amd-bc250-docs` (community docs; natural home for the write-up PR)
- `gitlab.com/TuxThePenguin0/bc250-bios` (modded BIOS)
- `github.com/kenavru/BC-250` (board info/mods)
