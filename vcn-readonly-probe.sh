#!/bin/bash
# vcn-readonly-probe.sh — collect BC-250 VCN evidence WITHOUT touching hardware.
#
# Reads only: sysfs, the cached amdgpu_firmware_info debugfs file, dmesg,
# /lib/firmware, and (if installed) vainfo. It sends no SMU/PSP messages,
# writes no registers, loads no modules and changes no boot state.
#
# Usage: sudo ./vcn-readonly-probe.sh > vcn-probe-$(date +%F).txt 2>&1
set -u

hdr() { printf '\n=== %s ===\n' "$*"; }

hdr "identity"
uname -r
for k in bios-version bios-date baseboard-product-name; do
    printf '%s: ' "$k"; dmidecode -s "$k" 2>/dev/null || echo "?"
done

card=""
for d in /sys/class/drm/card*/device; do
    [ "$(cat "$d/device" 2>/dev/null)" = "0x13fe" ] && card="$d" && break
done
echo "gpu sysfs: ${card:-not found}"

hdr "IP discovery: UVD/VCN and JPEG entries (version + harvest bit)"
if [ -n "$card" ] && [ -d "$card/ip_discovery/die/0" ]; then
    for ip in UVD VCN JPEG; do
        for inst in "$card"/ip_discovery/die/0/"$ip"/*/; do
            [ -d "$inst" ] || continue
            printf '%s inst %s: v%s.%s.%s harvest=%s num_instance=%s base_addr=%s\n' \
                "$ip" "$(basename "$inst")" \
                "$(cat "$inst/major")" "$(cat "$inst/minor")" "$(cat "$inst/revision")" \
                "$(cat "$inst/harvest")" "$(cat "$inst/num_instance")" \
                "$(tr '\n' ' ' < "$inst/base_addr")"
        done
    done
else
    echo "no ip_discovery sysfs"
fi

hdr "firmware versions (cached by amdgpu; no SMU traffic)"
for f in /sys/kernel/debug/dri/*/amdgpu_firmware_info; do
    [ -r "$f" ] && { echo "$f"; cat "$f"; }
done

hdr "amdgpu rings present (VCN/JPEG rings appear here only if the block is registered)"
ls /sys/kernel/debug/dri/*/ 2>/dev/null | grep -E '^amdgpu_ring_' | sort -u

hdr "dmesg: amdgpu / PSP / VCN / SMU"
dmesg 2>/dev/null | grep -iE 'amdgpu.*(psp|vcn|uvd|jpeg|smu|firmware|ip block|discovery)|vcn' | head -80

hdr "VCN firmware files on disk"
ls -l /lib/firmware/amdgpu/ 2>/dev/null | grep -iE 'cyan|vcn_2|navi1[02]_vcn' || echo none

hdr "vainfo"
if command -v vainfo >/dev/null; then vainfo 2>&1 | head -20; else echo "vainfo not installed"; fi
