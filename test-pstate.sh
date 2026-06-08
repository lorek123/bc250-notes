#!/bin/bash
# Test ACPI P-state hardware control without the SMU governor.
# Run as: sudo bash test-pstate.sh
set -e

CPUS=$(ls -d /sys/devices/system/cpu/cpu[0-9]* | wc -l)
echo "CPUs: $CPUS"

avg_mhz() {
    awk '/cpu MHz/{sum+=$4; n++} END{printf "%.0f MHz (avg of %d cores)\n", sum/n, n}' /proc/cpuinfo
}

echo ""
echo "=== BASELINE (SMU governor active, performance governor) ==="
echo -n "  cpufreq governor: "; cat /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor
echo -n "  /proc/cpuinfo:    "; avg_mhz
echo -n "  SMU governor:     "; systemctl is-active cyan-skillfish-governor-smu

echo ""
echo "=== STOPPING SMU GOVERNOR ==="
systemctl stop cyan-skillfish-governor-smu
sleep 1
echo -n "  SMU governor now: "; systemctl is-active cyan-skillfish-governor-smu || true

echo ""
echo "=== TEST 1: performance governor (max = 3200 MHz) ==="
echo performance | tee /sys/devices/system/cpu/cpu*/cpufreq/scaling_governor > /dev/null
sleep 2
echo -n "  scaling_cur_freq: "; cat /sys/devices/system/cpu/cpu0/cpufreq/scaling_cur_freq
echo -n "  /proc/cpuinfo:    "; avg_mhz

echo ""
echo "=== TEST 2: powersave governor (min = 800 MHz) ==="
echo powersave | tee /sys/devices/system/cpu/cpu*/cpufreq/scaling_governor > /dev/null
sleep 2
echo -n "  scaling_cur_freq: "; cat /sys/devices/system/cpu/cpu0/cpufreq/scaling_cur_freq
echo -n "  /proc/cpuinfo:    "; avg_mhz

echo ""
echo "=== TEST 3: userspace — pin to 800 MHz ==="
echo userspace | tee /sys/devices/system/cpu/cpu*/cpufreq/scaling_governor > /dev/null
echo 800000 | tee /sys/devices/system/cpu/cpu*/cpufreq/scaling_setspeed > /dev/null
sleep 2
echo -n "  scaling_setspeed: 800000"
echo -n "  /proc/cpuinfo:    "; avg_mhz

echo ""
echo "=== TEST 4: userspace — pin to 3200 MHz ==="
echo 3200000 | tee /sys/devices/system/cpu/cpu*/cpufreq/scaling_setspeed > /dev/null
sleep 2
echo -n "  scaling_setspeed: 3200000"
echo -n "  /proc/cpuinfo:    "; avg_mhz

echo ""
echo "=== TEST 5: userspace — pin to 1271 MHz ==="
echo 1271000 | tee /sys/devices/system/cpu/cpu*/cpufreq/scaling_setspeed > /dev/null
sleep 2
echo -n "  scaling_setspeed: 1271000"
echo -n "  /proc/cpuinfo:    "; avg_mhz

echo ""
echo "=== RESTORE: schedutil + restart SMU governor ==="
echo schedutil | tee /sys/devices/system/cpu/cpu*/cpufreq/scaling_governor > /dev/null
systemctl start cyan-skillfish-governor-smu
sleep 1
echo -n "  governor:         "; cat /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor
echo -n "  SMU governor:     "; systemctl is-active cyan-skillfish-governor-smu
echo -n "  /proc/cpuinfo:    "; avg_mhz

echo ""
echo "Done."
