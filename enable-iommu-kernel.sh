#!/bin/bash
# Switch the kernel from iommu=off to iommu=pt using rpm-ostree kargs.
# Creates a new ostree deployment; old one is the rollback.
# Run as: sudo bash enable-iommu-kernel.sh
set -e

echo "Current kargs:"
rpm-ostree kargs

echo ""
echo "Replacing iommu=off with iommu=pt ..."
rpm-ostree kargs \
    --delete=iommu=off \
    --append=iommu=pt \
    --append=amd_iommu=on

echo ""
echo "New kargs staged. Reboot to apply:"
echo "  sudo reboot"
echo ""
echo "Rollback if needed: sudo rpm-ostree rollback && sudo reboot"
