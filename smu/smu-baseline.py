#!/usr/bin/env python3
"""
BC-250 SMU state baseline capture (Phase 0 — smu-baseline.py).

Reads all stable SMU state without modifying anything. Run as root.
Pipe output to a file to save a snapshot before any experiments.

Usage:
    sudo python3 smu-baseline.py
    sudo python3 smu-baseline.py | tee smu-baseline-$(date +%Y%m%d-%H%M%S).txt
"""

import glob
import os
import sys
import time

# When run via `sudo`, ~/.local is dropped from sys.path — fix it.
_USER_SITE = f"/home/{os.environ.get('SUDO_USER', os.environ.get('USER', 'lorek'))}/.local/lib/python{sys.version_info.major}.{sys.version_info.minor}/site-packages"
if _USER_SITE not in sys.path:
    sys.path.insert(0, _USER_SITE)

from bc250_smu import Bc250Smu


def hwmon_temps():
    temps = {}
    for path in sorted(glob.glob('/sys/class/hwmon/hwmon*/temp*_input')):
        try:
            lpath = path.replace('_input', '_label')
            label = open(lpath).read().strip() if os.path.exists(lpath) else os.path.basename(path)
            val = int(open(path).read().strip()) // 1000
            temps[label] = val
        except Exception:
            pass
    return temps


def safe(fn, *args, **kwargs):
    try:
        result = fn(*args, **kwargs)
        return result
    except Exception as e:
        return f"ERR({e})"


def section(title):
    print(f"\n--- {title} ---")


def main():
    if os.geteuid() != 0:
        os.execvp("sudo", ["sudo", sys.executable] + sys.argv)

    print("=== BC-250 SMU Baseline Snapshot ===")
    print(f"Time: {time.strftime('%Y-%m-%d %H:%M:%S')}")
    print(f"Host: {os.uname().nodename}  kernel: {os.uname().release}")

    smu = Bc250Smu(use_flock=True, allow_queue0=True)

    section("Connectivity")
    try:
        smu.check_test_message()
        print("Q3:0x01 test message: OK  (123 -> 124)")
    except Exception as e:
        print(f"Q3:0x01 test message: FAILED: {e}")
        smu.close()
        return 1

    section("Q2 Device Identity")
    raw = b''
    for i in range(12):
        chunk = safe(smu.q2_0x04_get_device_name, i)
        raw += (chunk if isinstance(chunk, int) else 0).to_bytes(4, 'little')
    name = raw.rstrip(b'\x00').decode('ascii', errors='replace')
    print(f"Device name  (Q2:0x04): {name!r}")
    const = safe(smu.q2_0x03)
    print(f"Constant     (Q2:0x03): {const!r}  (expected 23 / 0x17)")

    section("Q0 — GFX State")
    print(f"GFX clock    (0x37):   {safe(smu.get_gfx_frequency)} MHz")
    print(f"GFX VID      (0x38):   {safe(smu.get_gfx_vid)} mV")
    print(f"Active WGP   (0x1E):   {safe(smu.query_active_wgp)}")
    feat = safe(smu.get_enabled_smu_features)
    print(f"Features     (0x3D):   {feat!r}" if not isinstance(feat, int) else
          f"Features     (0x3D):   0x{feat:08X}")

    print("\nCore P-states (Q0:0x0C):")
    for c in range(8):
        print(f"  Core {c}: {safe(smu.query_core_pstate, c)}")

    section("Q3 — CPU/GPU Voltages")
    print(f"CPU VID      (0x36):   {safe(smu.q3_0x36_get_current_cpu_voltage)} mV")
    print(f"GPU VID      (0x37):   {safe(smu.q3_0x37_get_current_gpu_voltage)} mV")
    cpu_ofs = safe(smu.q3_0x30_return_cpu_vid_float_or, 0)
    gpu_ofs = safe(smu.q3_0x30_return_cpu_vid_float_or, 1)
    print(f"CPU dyn VID offset (0x30,0): {cpu_ofs!r}" if not isinstance(cpu_ofs, int) else
          f"CPU dyn VID offset (0x30,0): 0x{cpu_ofs:08X}")
    print(f"GPU dyn VID offset (0x30,1): {gpu_ofs!r}" if not isinstance(gpu_ofs, int) else
          f"GPU dyn VID offset (0x30,1): 0x{gpu_ofs:08X}")

    section("Q3 — P-state Clocks (0x3B, pstate 0-7)")
    for ps in range(8):
        clk = safe(smu.q3_0x3b_get_clk_assigned_to_p_state, ps)
        print(f"  P{ps}: {clk} MHz")

    section("Q3 — Core Frequencies (0x43, core 0-7)")
    for c in range(8):
        clk = safe(smu.q3_0x43_get_core_freq, c)
        print(f"  Core {c}: {clk} MHz")

    section("Q3 — SoC DPM Values (0x42, index 0-19)")
    for i in range(20):
        val = safe(smu.q3_0x42_return_vddcrsoc_dpm_value, i)
        if isinstance(val, int) and val != 0:
            print(f"  DPM[{i:2d}]: 0x{val:08X}  ({val})")
        elif not isinstance(val, int):
            print(f"  DPM[{i:2d}]: {val}")

    section("Q3 — Misc")
    print(f"CPU temp max      (0x40): {safe(smu.q3_0x40_get_cpu_temp_max)} °C")
    print(f"Perf sample       (0x7F): {safe(smu.q3_0x7f_get_current_perf_sample)} µs")
    print(f"Sample interval   (0x8D): {safe(smu.q3_0x8d_get_current_sample_interval)}")
    print(f"Max sample interv (0x80): {safe(smu.q3_0x80_get_sample_interval_max)}")

    section("System Temperatures (hwmon)")
    for label, temp in hwmon_temps().items():
        print(f"  {label}: {temp} °C")

    smu.close()
    print("\n=== Baseline capture complete ===")
    return 0


if __name__ == '__main__':
    sys.exit(main())
