#!/bin/bash
# After rpm-ostree kargs redeployment: restore SSDT-PST initrd patch
# and remove the spurious amd_iommu=on option.
# Run as: sudo bash fixup-iommu-pstate.sh
set -e

BOOT=/boot
AML=/boot/acpi_tables/SSDT-PST.aml
COMBINED=$BOOT/initramfs-pstate.img

# ── 1. Rebuild combined initrd for the current deployment ────────────────────
DEPLOY_HASH=$(cat /proc/cmdline | grep -o 'ostree=/ostree/boot\.[0-9]*/default/[^/]*' | grep -o '[^/]*$')
echo "Current deployment: $DEPLOY_HASH"

OSTREE_INITRD="$BOOT/ostree/default-${DEPLOY_HASH}/initramfs-$(uname -r).img"
if [ ! -f "$OSTREE_INITRD" ]; then
    echo "ERROR: initrd not found at $OSTREE_INITRD"; exit 1
fi

TMPDIR=$(mktemp -d); trap "rm -rf $TMPDIR" EXIT
mkdir -p "$TMPDIR/kernel/firmware/acpi"
cp "$AML" "$TMPDIR/kernel/firmware/acpi/SSDT-PST.aml"
(cd "$TMPDIR" && find kernel | cpio -H newc --create -O "$BOOT/acpi_override.cpio" --quiet)
cat "$BOOT/acpi_override.cpio" "$OSTREE_INITRD" > "$COMBINED"
chmod 644 "$COMBINED"
echo "Combined initrd: $COMBINED ($(du -h $COMBINED | cut -f1))"

# ── 2. Patch the BLS entry: fix initrd + remove amd_iommu=on ────────────────
BLS_ENTRY=$(grep -rl "$DEPLOY_HASH" "$BOOT/loader/entries/" 2>/dev/null | head -1)
if [ -z "$BLS_ENTRY" ]; then
    echo "ERROR: BLS entry for $DEPLOY_HASH not found"
    ls "$BOOT/loader/entries/"; exit 1
fi
echo "Patching: $BLS_ENTRY"

cp "$BLS_ENTRY" "${BLS_ENTRY}.bak"
# Fix initrd line
sed -i "s|^initrd .*|initrd /initramfs-pstate.img|" "$BLS_ENTRY"
# Remove amd_iommu=on (not recognised by this kernel, AMD-Vi works via iommu=pt alone)
sed -i "s| amd_iommu=on||g" "$BLS_ENTRY"

echo ""
echo "Result:"
grep -E '^(title|options|initrd)' "$BLS_ENTRY"

echo ""
echo "Done. Reboot to apply: sudo reboot"
