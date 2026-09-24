#!/usr/bin/env python3
"""Show that the BC-250 SMU firmware blob is plaintext Xtensa code, not AES.

Usage: smu-xtensa-check.py [blob ...]   (default: the three SMU blobs in smu/)
Needs: pip install --pre "capstone>=6"  (Xtensa support landed in capstone 6)
"""
import math
import re
import struct
import sys
from pathlib import Path

import capstone

HERE = Path(__file__).resolve().parent
DEFAULT = [
    HERE / "abl/d00_e01_SMU_OFFCHIP_FW~0x8_0.58.7.1",
    HERE / "bc250_v200_smu_mp1_fw.bin",
    HERE / "smu_mp1_fw.bin",
]


def entropy(b):
    c = [0] * 256
    for x in b:
        c[x] += 1
    return -sum(v / len(b) * math.log2(v / len(b)) for v in c if v)


def check(path):
    raw = Path(path).read_bytes()
    hdr, body = raw[:0x100], raw[0x100:]
    encrypted = struct.unpack("<I", hdr[0x18:0x1C])[0]
    compressed = struct.unpack("<I", hdr[0x48:0x4C])[0]
    print(f"{Path(path).name}")
    print(f"  PSP header: magic={hdr[0x10:0x14]!r} encrypted={encrypted} "
          f"compressed={compressed}")

    hi = body[0x20000:0x3A000]
    retw = len(re.findall(rb"\x1d\xf0", hi))       # retw.n
    entry = len(re.findall(rb"\x36[\x01-\xff][\x00-\x0f]", hi))  # entry aN,imm
    print(f"  0x20000-0x3A000: entropy={entropy(hi):.2f} b/B, "
          f"retw.n={retw}, entry={entry} (random data: ~2 each)")

    md = capstone.Cs(capstone.CS_ARCH_XTENSA, capstone.CS_MODE_LITTLE_ENDIAN)
    ok = bad = 0
    i, end = 0x20000, 0x30000
    while i < end:
        ins = next(md.disasm(body[i:i + 4], i), None)
        if ins is None:
            bad += 1
            i += 1
        else:
            ok += 1
            i += ins.size
    print(f"  linear Xtensa decode 0x20000-0x30000: {ok} insns, "
          f"{bad} undecodable bytes")


for p in sys.argv[1:] or DEFAULT:
    check(p)
