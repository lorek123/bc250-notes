#!/bin/bash
set -e
mkdir -p /tmp/acpi-dump
for tbl in DSDT SSDT1 SSDT2; do
    src="/sys/firmware/acpi/tables/$tbl"
    if [ -f "$src" ]; then
        cp "$src" "/tmp/acpi-dump/${tbl}.dat"
        chmod 644 "/tmp/acpi-dump/${tbl}.dat"
        echo "  dumped $tbl"
    else
        echo "  SKIP: $tbl not found"
    fi
done
echo "done — files in /tmp/acpi-dump/"
ls -lh /tmp/acpi-dump/
