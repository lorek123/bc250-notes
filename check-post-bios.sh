#!/bin/bash
# Run after enabling IOMMU in BIOS (first boot still has iommu=off).
# Checks whether AGESA generated IVRS and ALIB. Prints a clear verdict.
# No sudo needed.

echo "========================================"
echo " BC-250 post-BIOS IOMMU diagnostic"
echo "========================================"
echo ""

echo "=== ACPI TABLES ==="
ls /sys/firmware/acpi/tables/ | sort
echo ""

IVRS_PRESENT=0
ls /sys/firmware/acpi/tables/IVRS &>/dev/null && IVRS_PRESENT=1

if [ $IVRS_PRESENT -eq 1 ]; then
    echo "*** IVRS: PRESENT *** — AGESA generated the IOMMU descriptor table"
else
    echo "*** IVRS: ABSENT *** — IOMMU not enabled in BIOS, or AGESA didn't generate it"
fi
echo ""

echo "=== PCI IOMMU DEVICE ==="
lspci -nn | grep -i '0806\|IOMMU\|1022:14' | head -5 || echo "No IOMMU PCI device visible"
echo ""

echo "=== ACPI TABLE COUNT (was 16 tables, IVRS would add 1) ==="
ls /sys/firmware/acpi/tables/ | grep -v '^data$\|^dynamic$' | wc -l
echo ""

echo "=== ALIB IN ACPI NAMESPACE (needs sudo for full check) ==="
# Check if a new SSDT appeared that might contain ALIB
ls /sys/firmware/acpi/tables/ | grep SSDT
echo ""

echo "=== KERNEL CMDLINE (confirm iommu=off still active) ==="
cat /proc/cmdline | tr ' ' '\n' | grep iommu
echo ""

if [ $IVRS_PRESENT -eq 1 ]; then
    echo "========================================"
    echo " GATE PASSED: IVRS present."
    echo " Next step: enable AMD-Vi in kernel."
    echo " Run: sudo bash /tmp/enable-iommu-kernel.sh"
    echo "========================================"
else
    echo "========================================"
    echo " GATE FAILED: IVRS absent."
    echo " Check BIOS NBIO menu — IOMMU may not"
    echo " have been saved, or try Robin5.00."
    echo "========================================"
fi
