#!/bin/bash
# Disable AMD APP OpenCL ICD immediately (takes effect without reboot)
sudo mv /etc/OpenCL/vendors/amdocl64.icd \
        /etc/OpenCL/vendors/amdocl64.icd.disabled 2>/dev/null && \
    echo "AMD APP ICD disabled — no more crashes until reboot"

echo ""
echo "Queuing full ROCm 7.1.1 removal (takes effect after reboot)..."
sudo rpm-ostree uninstall \
    rocm-opencl \
    rocm-runtime \
    rocm-runtime-devel \
    rocm-hip \
    rocm-smi \
    rocm-clinfo \
    hipcc \
    rocm-device-libs \
    rocm-clang \
    rocm-clang-devel \
    rocm-clang-libs \
    rocm-clang-runtime-devel \
    rocm-comgr \
    rocm-lld \
    rocm-llvm \
    rocm-llvm-devel \
    rocm-llvm-filesystem \
    rocm-llvm-libs \
    rocm-llvm-static \
    "rocm-libc++" \
    "rocm-libc++-devel"

echo ""
echo "Run 'sudo reboot' when ready to apply."
