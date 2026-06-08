#!/bin/bash
# Embed SSDT-PST into the ostree initrd via rpm-ostree initramfs rebuild.
# Run as: sudo bash pstate-initrd-rebuild.sh
set -e

AML_SRC=/tmp/SSDT-PST.aml
AML_DEST=/boot/acpi_tables/SSDT-PST.aml

if [ ! -f "$AML_SRC" ]; then
    echo "ERROR: $AML_SRC not found. Copy SSDT-PST.aml there first."
    exit 1
fi

mkdir -p /boot/acpi_tables
cp "$AML_SRC" "$AML_DEST"
echo "Installed $AML_DEST"

echo "Queuing initramfs rebuild with SSDT-PST embedded..."
rpm-ostree initramfs --enable \
    --arg=--include \
    --arg="$AML_DEST" \
    --arg=kernel/firmware/acpi/SSDT-PST.aml

echo "Done. Rebooting..."
systemctl reboot
