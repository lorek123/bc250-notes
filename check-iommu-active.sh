#!/bin/bash
# Run after second reboot (with iommu=pt) to verify AMD-Vi is active.
# No sudo needed for most checks.

echo "========================================"
echo " BC-250 AMD-Vi activation check"
echo "========================================"
echo ""

echo "=== KERNEL CMDLINE ==="
cat /proc/cmdline | tr ' ' '\n' | grep iommu
echo ""

echo "=== ACPI TABLES ==="
ls /sys/firmware/acpi/tables/ | sort
echo ""

echo "=== IOMMU DMESG ==="
journalctl -k --no-pager | grep -i 'amd.vi\|amd_iommu\|AMD-Vi\|ivrs\|iommu.*init\|iommu.*enabled\|iommu.*group' | head -30
echo ""

echo "=== IOMMU PCI DEVICE ==="
lspci -nn | grep -E '0806|IOMMU' | head -5 || echo "No class-0806 IOMMU device"
echo ""

echo "=== IOMMU GROUPS ==="
ls /sys/kernel/iommu_groups/ 2>/dev/null | wc -l | xargs -I{} echo "{} IOMMU groups"
ls /sys/kernel/iommu_groups/ 2>/dev/null | head -5
echo ""

echo "=== GPU IOMMU GROUP ==="
GPU_BDF="0000:01:00.0"
readlink /sys/bus/pci/devices/$GPU_BDF/iommu_group 2>/dev/null | grep -o 'iommu_groups/[0-9]*' || echo "GPU not in an IOMMU group (passthrough not yet possible)"
echo ""

echo "=== VFIO MODULES ==="
lsmod | grep vfio
echo ""

echo "=== ALIB IN ACPI NAMESPACE ==="
ls /sys/firmware/acpi/tables/SSDT* 2>/dev/null
echo ""
# Check SSDT count — more than 2 means something new was added
SSDT_COUNT=$(ls /sys/firmware/acpi/tables/ | grep '^SSDT' | wc -l)
echo "SSDT count: $SSDT_COUNT (baseline was 2; more = BIOS added tables)"
