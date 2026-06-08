#!/bin/bash
# Prepend the ACPI override CPIO to the current ostree deployment's initrd
# and patch its BLS entry to use the combined image.
# Run as: sudo bash pstate-apply.sh
set -e

BOOT=/boot
AML=/boot/acpi_tables/SSDT-PST.aml
COMBINED=$BOOT/initramfs-pstate.img

# ── 1. Verify the AML is present ────────────────────────────────────────────
if [ ! -f "$AML" ]; then
    echo "ERROR: $AML missing. Copy SSDT-PST.aml there first."
    exit 1
fi

# ── 2. Build the early CPIO from the AML ────────────────────────────────────
echo "Building early ACPI CPIO..."
TMPDIR=$(mktemp -d)
trap "rm -rf $TMPDIR" EXIT
mkdir -p "$TMPDIR/kernel/firmware/acpi"
cp "$AML" "$TMPDIR/kernel/firmware/acpi/SSDT-PST.aml"
(cd "$TMPDIR" && find kernel | cpio -H newc --create -O "$BOOT/acpi_override.cpio" --quiet)
echo "  -> $BOOT/acpi_override.cpio ($(du -h $BOOT/acpi_override.cpio | cut -f1))"

# ── 3. Find the current deployment's initrd ─────────────────────────────────
# Match the deployment hash from the running cmdline
DEPLOY_HASH=$(cat /proc/cmdline | grep -o 'ostree=/ostree/boot\.[0-9]*/default/[^/]*' | grep -o '[^/]*$')
echo "Current deployment hash: $DEPLOY_HASH"

OSTREE_INITRD="$BOOT/ostree/default-${DEPLOY_HASH}/initramfs-$(uname -r).img"
if [ ! -f "$OSTREE_INITRD" ]; then
    echo "ERROR: Cannot find initrd at $OSTREE_INITRD"
    ls "$BOOT/ostree/"
    exit 1
fi
echo "Found initrd: $OSTREE_INITRD ($(du -h $OSTREE_INITRD | cut -f1))"

# ── 4. Concatenate: early CPIO first, then main initrd ──────────────────────
echo "Building combined initrd..."
cat "$BOOT/acpi_override.cpio" "$OSTREE_INITRD" > "$COMBINED"
chmod 644 "$COMBINED"
echo "  -> $COMBINED ($(du -h $COMBINED | cut -f1))"

# ── 5. Verify our AML is in the early section ───────────────────────────────
echo "Verifying early CPIO contents..."
dd if="$COMBINED" bs=1M count=1 2>/dev/null | cpio -t --quiet 2>/dev/null | grep acpi || \
    echo "  WARNING: acpi entry not found in first 1MB (check cpio layout)"

# ── 6. Find the BLS entry for the current deployment ────────────────────────
BLS_ENTRY=$(grep -rl "$DEPLOY_HASH" "$BOOT/loader/entries/" 2>/dev/null | head -1)
if [ -z "$BLS_ENTRY" ]; then
    echo "ERROR: Cannot find BLS entry for deployment $DEPLOY_HASH"
    ls "$BOOT/loader/entries/"
    exit 1
fi
echo "BLS entry: $BLS_ENTRY"

# ── 7. Patch the BLS entry to use the combined initrd ───────────────────────
# Keep a backup of the original
cp "$BLS_ENTRY" "${BLS_ENTRY}.orig"
# Replace the initrd line
sed -i "s|^initrd .*|initrd /initramfs-pstate.img|" "$BLS_ENTRY"
echo "Patched $BLS_ENTRY:"
grep -E '^(title|initrd|linux)' "$BLS_ENTRY"

echo ""
echo "Done. Reboot to test:"
echo "  sudo reboot"
echo ""
echo "To undo: sudo cp ${BLS_ENTRY}.orig $BLS_ENTRY && sudo rm $COMBINED $BOOT/acpi_override.cpio"
