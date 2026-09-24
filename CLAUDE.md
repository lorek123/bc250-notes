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
- Applying CPU-core / CU unlocks (SMU writes, EFI shim, patched BIOS).

Everything else is yours: log capture/parsing, ACPI table disassembly/edit/
recompile, initrd override construction, kernel quirk authoring + build, UEFITool
image inspection, patch preparation, and write-ups.

## Environment

- Hardware: ASRock BC-250, BIOS P3.00 or P5.00 (record stock vs TuxThePenguin0
  modded).
- Kernel: community recommendation as of Sept 2026 is **7.1.x or 6.18 LTS**.
  **Avoid 6.15.0–6.15.6 and 6.17.8–6.17.10**, which are known broken on
  BC-250. Our June results were taken on Bazzite 6.19.14-ogc5.1.
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

## Project status (updated 2026-09-24)

- **IOMMU — RESOLVED (2026-06-01).** The IVRS hypothesis was falsified in
  the strong sense: the IVRS was *absent*, not malformed, because the BIOS
  ships with IOMMU off. Enabling `Advanced → CPU Configuration → SVM Mode +
  IOMMU` makes AGESA publish a valid IVRS, and AMD-Vi inits cleanly with
  `iommu=pt`. No quirk or table override is needed. See `iommu-result.md`.
  Open: full-translation mode (non-`pt`) is untested. Re-validation on 6.18
  LTS / 7.1.x is pending. Upstream write-up to `elektricM/amd-bc250-docs`
  is pending. Community docs still say "IOMMU broken".
- **P-states — RESOLVED (2026-05-31)** via SSDT-PST initrd override. On
  Bazzite, persist it with dracut `acpi_override`. See
  `phase2-pstate-result.md`. Open: SSDT-PST only covers `\_PR.P000`–`P00B`.
  An 8-core-unlocked board (16 threads) needs `P00C`–`P00F` added.
- **SMU RE — UNBLOCKED (2026-09-24).** The June "AES-encrypted" verdict was
  wrong. The PSP header says `encrypted=0`, and the code is plaintext Xtensa
  (`smu/smu-xtensa-check.py`). Next: Ghidra (Xtensa LE, base 0), then the
  queue dispatch tables. The PSPSMC message table was decoded from the PSP
  ABL. See `bc250-smu-reverse-plan.md`.
  New community leads (Q3 msg `0x98`, EFI-shim "secure access unlock") are
  listed in `community-status-2026-09.md`.
- `bc250-iommu-fix-plan.md` (the original IOMMU plan referenced above) was
  never committed to this repo. The IOMMU outcome lives in
  `iommu-result.md`.

## SMU safety rules (do not violate)

- Never send Q2:`0x11`–`0x3F` or any Q4 command. They hang the SMU until
  reboot (observed 2026-06-08).
- Never send Q3:`0x98` except as a deliberate, human-approved action. It
  writes `0xFF` to an arbitrary SMN address, and `arg == 0` hangs the SMU.
- CPU VID ≤ 1.325 V. Stop at 95 °C.

## Dead ends (do not attempt)

- coreboot port — blocked by PSP-locked boot chain + no public AGESA blob for
  Cyan Skillfish.
- DisplayPort audio fix — non-standard, down in silicon/VBIOS.

## Reference

- `elektricM/amd-bc250-docs` (community docs; natural home for the write-up PR)
- `gitlab.com/TuxThePenguin0/bc250-bios` (modded BIOS)
- `github.com/kenavru/BC-250` (board info/mods)
