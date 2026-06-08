#!/bin/bash
# Install ACPI override + combined initrd for P-state test.
# Run as: sudo bash install-pstate-entry.sh
set -e

BOOT=/boot
CPIO_SRC=/tmp/acpi_override.cpio
CPIO_DEST=$BOOT/acpi_override.cpio
COMBINED=$BOOT/initramfs-pstate.img
ENTRY=$BOOT/loader/entries/bc250-pstate.conf

# Find current ostree deployment options from the iommu=off entry
ACTIVE_CONF=$(grep -l "iommu=off" $BOOT/loader/entries/ostree-*.conf 2>/dev/null | head -1)
if [ -z "$ACTIVE_CONF" ]; then
    ACTIVE_CONF=$(ls $BOOT/loader/entries/ostree-*.conf | sort -V | tail -1)
fi
echo "Using base entry: $ACTIVE_CONF"

LINUX_LINE=$(grep '^linux ' "$ACTIVE_CONF")
INITRD_LINE=$(grep '^initrd ' "$ACTIVE_CONF")
OPTIONS_LINE=$(grep '^options ' "$ACTIVE_CONF")

# Resolve the initrd path relative to /boot
INITRD_REL=$(echo "$INITRD_LINE" | awk '{print $2}')
INITRD_ABS="$BOOT$INITRD_REL"

echo "  kernel:  $LINUX_LINE"
echo "  initrd:  $INITRD_ABS"
echo "  options: $OPTIONS_LINE"

# Install CPIO
cp "$CPIO_SRC" "$CPIO_DEST"
chmod 644 "$CPIO_DEST"
echo "Installed $CPIO_DEST"

# Build combined initrd: CPIO first (early initrd), then real initrd
# The kernel reads the ACPI tables from the first CPIO stream
echo "Building combined initrd: cpio + $(basename $INITRD_ABS) ..."
cat "$CPIO_DEST" "$INITRD_ABS" > "$COMBINED"
chmod 644 "$COMBINED"
echo "  -> $COMBINED ($(du -h $COMBINED | cut -f1))"

# Write new BLS entry with a single combined initrd
# version 99 → sorts highest → becomes GRUB default automatically
cat > "$ENTRY" <<EOF
title Bazzite pstate-test (SSDT-PST override)
version 99
$OPTIONS_LINE
$LINUX_LINE
initrd /initramfs-pstate.img
EOF

echo ""
echo "Created $ENTRY:"
cat "$ENTRY"
echo ""
echo "--- This entry is now the GRUB default (version 99 = highest)."
echo "--- Reboot to test it:"
echo "    sudo reboot"
echo ""
echo "--- After testing, to stop using it, lower its version:"
echo "    sudo sed -i 's/^version 99/version 0/' $ENTRY"
