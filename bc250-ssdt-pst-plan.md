# BC-250 Native SSDT-PST (CPU P-States) — Claude Code Work Plan

## Mission

The BC-250 BIOS does not publish ACPI `_PSS` P-state objects, so stock Linux has
no `cpufreq` interface for the CPU. The community workaround is `bc250-acpi-fix`,
an SSDT-PST table injected at runtime that adds 8 P-states (~800 MHz–3200 MHz).

This plan does two things:

1. Validate the SSDT non-destructively via initrd ACPI override (proves the table
   works on your board with zero firmware risk).
2. Optionally bake the same SSDT into the firmware image so P-states work natively
   with no runtime injection.

It is intentionally independent of the IOMMU project and is a good warm-up for
UEFITool surgery on this specific BIOS before attempting the more delicate IVRS
work. If you are running both, do this one first.

---

## Human-vs-agent split

Claude Code **cannot**: flash firmware, clear CMOS, attach a programmer, toggle
BIOS settings, or select a non-default GRUB entry. Those are tagged **[HUMAN]**
— stop, print instructions, wait for confirmation.

Claude Code **can**: fetch/compile the SSDT, build the initrd override, verify
cpufreq, locate the insertion point in a firmware dump with UEFITool, rebuild the
image, and write up results.

The same hard rules from the IOMMU project apply: no autonomous flashing, never
proceed to a reflash without a verified firmware backup, never overwrite the stock
initramfs or change the default boot entry.

---

## Environment

- ASRock BC-250, BIOS P3.00/P5.00 (record stock vs modded).
- Kernel 6.18.18 LTS or 6.17.11+ (avoid 6.15.0–6.15.6, 6.17.8–6.17.10).
- Tools: `acpica-tools` (`iasl`), `cpio`, `cpupower` (linux-tools), UEFITool NE,
  `flashrom` (read-only). Confirm `CONFIG_ACPI_TABLE_UPGRADE=y` in the running
  kernel.

---

## Phase 0 — Baseline

0.1 Record `uname -r`, BIOS version, stock-vs-modded. Confirm there is currently
    no working `cpufreq` (`ls /sys/devices/system/cpu/cpu0/cpufreq/` absent or
    empty; `cpupower frequency-info` reports no P-states).

0.2 If the firmware-baking track (Phase 3) is intended: **[HUMAN]** ensure a
    verified SPI flash backup exists and a CH341A/CH347T + SOIC8 clip is on hand.
    Not needed for the initrd-only validation in Phases 1–2.

GATE: confirmed no native P-states at baseline; backup in place if Phase 3 planned.

---

## Phase 1 — Obtain and compile the SSDT

1.1 Get the SSDT-PST source from the `bc250-acpi-fix` project (the table that adds
    the 8 P-states). If only a compiled `.aml` is available, disassemble it with
    `iasl -d ssdt-pst.aml` to inspect, then work from the `.dsl`.

1.2 Review the `_PSS` package: confirm the frequency/voltage/power tuples match
    the BC-250's documented range (~800–3200 MHz, 8 states) and that the
    `_PCT`/`_PPC`/`_PSD` objects are present and sane.

1.3 Compile: `iasl -tc ssdt-pst.dsl` → `SSDT.aml`. Resolve any compile warnings;
    iasl fixes the checksum on recompile.

DELIVERABLE: a clean `SSDT.aml` plus the reviewed `.dsl` committed to the repo.

GATE: SSDT compiles clean and the P-state table has been sanity-checked.

---

## Phase 2 — Non-destructive validation via initrd override

2.1 Confirm `CONFIG_ACPI_TABLE_UPGRADE=y`
    (`zcat /proc/config.gz | grep ACPI_TABLE_UPGRADE` or check
    `/boot/config-$(uname -r)`). If unset, note that this branch needs a kernel
    with that option.

2.2 Build the early-CPIO override (kernel expects tables under
    `kernel/firmware/acpi/`):
    ```
    mkdir -p kernel/firmware/acpi
    cp SSDT.aml kernel/firmware/acpi/
    find kernel | cpio -H newc --create > acpi_override.cpio
    cat acpi_override.cpio /boot/initramfs-$(uname -r).img \
        > /boot/initramfs-bc250-pstate.img
    ```
    Add a NEW GRUB entry pointing at the combined initrd. Do not touch the stock
    entry or initrd.

2.3 **[HUMAN]** Reboot into the new GRUB entry (keep the stock entry as default).

2.4 Verify native cpufreq now appears:
    - `ls /sys/devices/system/cpu/cpu0/cpufreq/` is populated.
    - `cpupower frequency-info` lists the 8 P-states.
    - Set and confirm a governor:
      `echo schedutil | sudo tee /sys/devices/system/cpu/cpu*/cpufreq/scaling_governor`
      then watch `watch -n1 'grep MHz /proc/cpuinfo'` under load/idle to confirm
      frequencies actually move.

DELIVERABLE: `phase2-pstate-result.md` with before/after cpufreq state and a
frequency-scaling demonstration.

GATE: P-states appear and scale correctly via the override. If this fails, the
table is wrong for the board — return to Phase 1; do NOT proceed to firmware
baking.

---

## Phase 3 — (Optional) Bake the SSDT into firmware

Only worthwhile if you want native P-states without an initrd override. Higher
risk; gated on Phases 0.2 and 2.

3.1 Load the firmware backup into UEFITool (NE). Locate the ACPI tables region —
    either an existing SSDT to sit beside, or the AGESA ACPI assembly point.
    Identify a safe insertion point for an additional SSDT.

3.2 Insert the compiled `SSDT.aml` into the firmware volume. Rebuild the image and
    verify volume integrity in UEFITool. Diff against the backup to confirm only
    the intended region changed.

3.3 **[HUMAN]** Flash the rebuilt image (EFI-shell `AfuEfix64.efi` or programmer),
    then **[HUMAN]** clear CMOS. Keep the programmer ready for recovery.

3.4 Boot the stock kernel/initrd (no override) and re-run the Phase 2.4
    verification — P-states should now be present natively.

DELIVERABLE: patched firmware image + flash/verify notes, and confirmation that
native cpufreq works without any initrd injection.

---

## Phase 4 — Write-up

Document the working SSDT, the initrd-override method, and (if done) the firmware
bake, as a PR to `elektricM/amd-bc250-docs`. The initrd-override route is valuable
on its own as a no-flash alternative to the runtime injection, so document it even
if you skip Phase 3.

---

## Notes

- The initrd-override approach (Phase 2) is the recommended end state for most
  users: it gives native-looking cpufreq with zero firmware risk and survives
  kernel updates as long as the combined initrd is regenerated.
- Firmware baking (Phase 3) only benefits people who flash, and ties the table to
  a specific BIOS image. Treat it as advanced/optional.
- Reference: `bc250-acpi-fix` (SSDT source), `elektricM/amd-bc250-docs`
  (power-management page), `gitlab.com/TuxThePenguin0/bc250-bios` (modded BIOS),
  UEFITool NE.
