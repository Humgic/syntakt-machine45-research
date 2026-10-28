#!/usr/bin/env python3
"""Read selected metadata from privately supplied stock Syntakt OS 1.41 sections.

Standard library only. No firmware bytes/tables are embedded in this tool. It
never writes an image, applies a patch, contacts hardware or claims runtime proof.
Copyright (c) 2026 Humgic. MIT; see the repository LICENSE.
"""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import struct

BASE = 0x40000400
EXPECTED = {
    'main': (3438480, '8cf2b4b4ea80d58953da46ca453328454fb3fca5cb5f844a2f7bad4b72241f53'),
    'section7': (383760, 'daf6451cf9587c0b628e901b7bb6b25f4e2633d448c534c0c181dd35ec783bc2'),
}
# Independently documented knob order and generic slot identities, not a stock
# descriptor byte dump. Other descriptor fields are read from the user's image.
KNOBS = [(158, 18), (161, 21), (163, 23), (165, 25),
         (159, 19), (160, 20), (162, 22), (164, 26)]


def digest(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def read_exact(path: Path, role: str) -> bytes:
    data = path.read_bytes()
    size, expected = EXPECTED[role]
    if len(data) != size or digest(data) != expected:
        raise ValueError(f'{role}: input is not the hash-matched stock 1.41 section')
    return data


def word(data: bytes, address: int) -> int:
    return struct.unpack_from('>I', data, address - BASE)[0]


def string_at(data: bytes, address: int) -> str:
    offset = address - BASE
    if not 0 <= offset < len(data):
        raise ValueError('descriptor string pointer outside the supplied section')
    end = data.find(b'\0', offset, min(len(data), offset + 128))
    if end < 0:
        raise ValueError('unterminated short metadata string')
    return data[offset:end].decode('utf-8')


def inspect(main: bytes, section7: bytes) -> dict:
    knobs = []
    matrix = [0] * 450
    seen = set()
    admitted = 0
    for descriptor in range(505):
        fields = struct.unpack_from('>13I', main, 0x4022D59C - BASE + 52 * descriptor)
        owner, slot = fields[:2]
        if owner <= 44:
            if not 17 <= slot <= 26 or (owner, slot) in seen:
                raise ValueError('normalizer reconstruction does not match the documented rule')
            seen.add((owner, slot))
            matrix[owner * 10 + slot - 17] = descriptor
            admitted += 1
    if admitted != 315:
        raise ValueError('unexpected admitted descriptor count')
    for number, (descriptor, slot) in enumerate(KNOBS, 1):
        fields = struct.unpack_from('>13I', main, 0x4022D59C - BASE + 52 * descriptor)
        if fields[:2] != (0, slot):
            raise ValueError('donor descriptor owner/slot mismatch')
        knobs.append(dict(knob=number, descriptor=descriptor, generic_slot=slot,
                          long_name=string_at(main, fields[10]), short_name=string_at(main, fields[12]),
                          payload_offset=hex(0x14 + 2 * slot), width_bits=16,
                          minimum=fields[2], maximum=fields[3], default=fields[4]))
    matrix_hash = digest(struct.pack('>450I', *matrix))
    if matrix_hash != 'b515e76d30d701fe9c53c2e4c85dc8269e5d63063e870f76ed165d9bdf47bfb7':
        raise ValueError('reconstructed matrix hash mismatch')

    def stock_family(raw_selector: int) -> int:
        if 0 <= raw_selector <= 7:
            return raw_selector
        return {36: 8, 37: 9, 38: 10, 44: 11}.get(raw_selector, 0)

    for selector in range(46):
        if section7[0x40014950 - BASE + selector] != stock_family(selector):
            raise ValueError('stock selector/family relationship differs')
    plan_path = Path(__file__).resolve().parents[1] / 'metadata/MAIN_PATCH_PLAN.json'
    plan = json.loads(plan_path.read_text())
    for row in plan['entries']:
        start, size = int(row['file_start'], 16), row['length']
        if digest(main[start:start + size]) != row['expected_original_sha256']:
            raise ValueError('expected-original range hash mismatch: ' + row['purpose'])

    return dict(
        result='PASS: selected stock metadata only', firmware='1.41',
        verification='Static input/hash/data checks; no emulator or hardware',
        original_MAIN_sha256=digest(main), original_Section7_sha256=digest(section7),
        descriptor_records=505, admitted_normalizer_records=admitted,
        normalizer_sha256=matrix_hash, knobs=knobs,
        stock_family_map_relationship_checked=True,
        stock_selector45_family=stock_family(45),
        donor0_prep_address=hex(word(section7, 0x40014920)),
        donor0_render_address=hex(word(section7, 0x400148F0)),
        original_MAIN_range_hashes_checked=len(plan['entries']),
        firmware_written=False, native_installation='NOT PROVIDED',
        caveat='Does not prove candidate behavior, placement/lifetime, persistence, timing, audibility or acceptance.')


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--main', required=True, type=Path, help='Privately extracted stock 1.41 MAIN section')
    parser.add_argument('--section7', required=True, type=Path, help='Privately extracted stock 1.41 raw Section7')
    args = parser.parse_args()
    try:
        report = inspect(read_exact(args.main, 'main'), read_exact(args.section7, 'section7'))
    except (OSError, ValueError, struct.error) as error:
        parser.exit(1, f'CHECK FAILED: {error}\n')
    print(json.dumps(report, indent=2))
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
