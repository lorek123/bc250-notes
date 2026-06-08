#!/bin/bash
# Inspect the current ostree deployment's initrd for our SSDT AML.
# Run as: sudo bash check-initrd.sh
set -e

INITRD=$(ls /boot/ostree/default-*/initramfs-*.img | sort -t/ -k4 | tail -1)
echo "Inspecting: $INITRD"
echo ""

echo "=== Searching for SSDT AML signature (hex: 53534454) ==="
if grep -c 'SSDT' "$INITRD" > /dev/null 2>&1; then
    echo "  Found 'SSDT' string in initrd"
else
    echo "  'SSDT' not found as raw string (may be in compressed section)"
fi

echo ""
echo "=== Searching for 'kernel/firmware/acpi' path ==="
strings "$INITRD" | grep -i 'kernel/firmware/acpi\|SSDT-PST\|PSTATES\|HACK.*PST' | head -20 || echo "  not found as plain string"

echo ""
echo "=== Scanning early (uncompressed) CPIO section ==="
# The early CPIO is at the start of the file, before any magic bytes for compression
# newc CPIO starts with '070701' or '070702'
# Try to list the early CPIO section
dd if="$INITRD" bs=1M count=4 2>/dev/null | cpio -t --quiet 2>/dev/null | head -40 || echo "  early cpio listing failed"

echo ""
echo "=== Scanning for CPIO entry names containing 'acpi' ==="
# Scan deeper into the file for any CPIO entry with acpi in name
# A newc CPIO entry has the magic '070701' followed by header then filename
strings "$INITRD" | grep -i 'acpi\|ssdt-pst\|firmware.acpi' | head -20 || echo "  not found"
