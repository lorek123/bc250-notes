#!/usr/bin/env python3
"""
BC-250 SMU queue enumeration (Phase 1 — smu-enumerate.py).

Probes Q1, Q2, Q4 for unknown commands by sending each command ID
and recording status + response. Does NOT touch Q0 (dangerous write
commands) or Q3 (VID/OC commands).

For each responding command, tries four argument values to probe argument
shape. Non-responding commands (status 0xFE) are silently skipped unless
--verbose is given.

Usage:
    sudo python3 smu-enumerate.py [--queue N] [--verbose] [--dry-run]

Safety:
    - Q0 is never sent (allow_queue0 stays False)
    - Q3 is never sent (rich OC queue; setters dangerous without context)
    - Q2 0x05 (enable features) and 0x06 (disable features) are skipped
    - All sends use check_status=False to capture raw status bytes
"""

import argparse
import os
import sys
import time

_USER_SITE = f"/home/{os.environ.get('SUDO_USER', os.environ.get('USER', 'lorek'))}/.local/lib/python{sys.version_info.major}.{sys.version_info.minor}/site-packages"
if _USER_SITE not in sys.path:
    sys.path.insert(0, _USER_SITE)

from bc250_smu import Bc250Smu
from bc250_smu.mailbox import Bc250Mailbox

STATUS_NAMES = {
    0x00:                                    "TIMEOUT (0x00)",
    Bc250Mailbox.SMU_RETURN_OK:              "OK      (0x01)",
    Bc250Mailbox.SMU_RETURN_FAILED:          "FAILED  (0xFF)",
    Bc250Mailbox.SMU_RETURN_UNKNOWN_CMD:     "UNKNOWN (0xFE)",
    Bc250Mailbox.SMU_RETURN_REJECTED_PREREQ: "PREREQ  (0xFD)",
    Bc250Mailbox.SMU_RETURN_REJECTED_BUSY:   "BUSY    (0xFC)",
}

# Commands to skip for safety (would change SMU state in hard-to-reverse ways)
SKIP = {
    2: {0x05, 0x06},  # Q2: enable/disable SMU features
}

# Arg values probed for each responding command
PROBE_ARGS = [0x00000000, 0x00000001, 0x000000FF, 0x80000000]


def status_str(s):
    return STATUS_NAMES.get(s, f"?       (0x{s:02X})")


def probe_queue(smu, queue_id, cmd_range, verbose, dry_run):
    skip_set = SKIP.get(queue_id, set())
    results = []

    for cmd in cmd_range:
        if cmd in skip_set:
            print(f"  Q{queue_id}:0x{cmd:02X}  SKIPPED (safety)")
            continue
        if dry_run:
            print(f"  Q{queue_id}:0x{cmd:02X}  [dry-run, not sent]")
            continue

        # First probe with no argument
        status = smu.raw_send(queue_id, cmd, arg=0)
        arg_back = smu.raw_read(queue_id)

        if status == Bc250Mailbox.SMU_RETURN_UNKNOWN_CMD:
            if verbose:
                print(f"  Q{queue_id}:0x{cmd:02X}  {status_str(status)}")
            continue

        # Command exists — record base response
        entry = {
            'queue': queue_id,
            'cmd': cmd,
            'base_status': status,
            'base_arg_back': arg_back,
            'probes': [],
        }

        print(f"  Q{queue_id}:0x{cmd:02X}  {status_str(status)}  arg_back=0x{arg_back:08X}")

        # Try additional arg values if base call succeeded or failed (not unknown)
        for probe_arg in PROBE_ARGS[1:]:  # skip 0x00 (already sent)
            s2 = smu.raw_send(queue_id, cmd, arg=probe_arg)
            a2 = smu.raw_read(queue_id)
            entry['probes'].append((probe_arg, s2, a2))
            if verbose or s2 != status or a2 != arg_back:
                print(f"           arg=0x{probe_arg:08X}: {status_str(s2)}  back=0x{a2:08X}")
            time.sleep(0.01)

        results.append(entry)

    return results


def main():
    parser = argparse.ArgumentParser(description="BC-250 SMU queue enumerator")
    parser.add_argument('--queue', type=int, choices=[1, 2, 4],
                        help="Only probe this queue (default: all three)")
    parser.add_argument('--verbose', '-v', action='store_true',
                        help="Print UNKNOWN commands too")
    parser.add_argument('--dry-run', action='store_true',
                        help="List commands that would be sent without sending them")
    parser.add_argument('--timeout', type=int, default=1000,
                        help="Mailbox poll timeout iterations (default: 1000)")
    args = parser.parse_args()

    if os.geteuid() != 0 and not args.dry_run:
        os.execvp("sudo", ["sudo", sys.executable] + sys.argv)

    queues_to_probe = [args.queue] if args.queue else [1, 2, 4]

    cmd_ranges = {
        1: range(0x00, 0x20),   # Q1 has only 2 known commands
        2: range(0x00, 0x40),   # Q2 has commands up to ~0x3F
        4: range(0x00, 0x20),   # Q4 (_q5_* naming) has commands up to ~0x11
    }

    print("=== BC-250 SMU Queue Enumeration ===")
    print(f"Time: {time.strftime('%Y-%m-%d %H:%M:%S')}")
    print(f"Queues: {queues_to_probe}  verbose={args.verbose}  dry_run={args.dry_run}")
    print()
    print("Status legend:")
    for s, name in STATUS_NAMES.items():
        print(f"  0x{s:02X} = {name}")
    print()

    if args.dry_run:
        smu = None
    else:
        smu = Bc250Smu(use_flock=True, allow_queue0=False, timeout=args.timeout)
        try:
            smu.check_test_message()
            print("SMU connectivity: OK\n")
        except Exception as e:
            print(f"SMU connectivity FAILED: {e}")
            smu.close()
            return 1

    all_results = []
    for q in queues_to_probe:
        print(f"=== Queue {q} (0x{cmd_ranges[q].start:02X}–0x{cmd_ranges[q].stop-1:02X}) ===")
        results = probe_queue(smu, q, cmd_ranges[q], args.verbose, args.dry_run)
        all_results.extend(results)
        print()

    if not args.dry_run:
        smu.close()

    # Summary
    real_results = [r for r in all_results if r['base_status'] != 0x00]
    if real_results:
        print("=== Responding commands summary (excluding TIMEOUT) ===")
        for r in real_results:
            print(f"  Q{r['queue']}:0x{r['cmd']:02X}  "
                  f"status=0x{r['base_status']:02X}  "
                  f"arg_back=0x{r['base_arg_back']:08X}")
    timeout_results = [r for r in all_results if r['base_status'] == 0x00]
    if timeout_results:
        cmds = ", ".join(f"Q{r['queue']}:0x{r['cmd']:02X}" for r in timeout_results)
        print(f"\nTIMEOUT (no firmware response, {len(timeout_results)} cmds): {cmds}")

    print("\n=== Enumeration complete ===")
    return 0


if __name__ == '__main__':
    sys.exit(main())
