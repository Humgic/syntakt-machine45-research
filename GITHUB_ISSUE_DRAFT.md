# Research handoff: adding a genuinely new Machine ID (45) to Syntakt without replacing stock machines

Hi @Angelo-politek and @Rxuting,

I'd like to share some independent OS **1.41** reverse-engineering work that may be
useful for additive Machine support in SyntHack. The goal is to retain public IDs
0–44 and register **ID 45 as a separate Machine**, initially reusing an existing
renderer. This is different from FM4's compatible extension of SY TONE's existing
ID 4; both approaches could coexist.

There is an offline research candidate, but **I am not claiming a completed or
hardware-working 46th Machine**. My validation is static plus bounded host integer/
instruction tests, not a booted Syntakt emulator or a hardware test.

## Most reusable findings

- **Distinct MAIN identity:** the setter starts at `0x40025594`; its store at
  `0x40025620` writes raw `D2` to `BYTE(P+0xA2)`. At the changed-value boundary
  `0x40025628`, `D4` is the MAIN track index and the payload/track pointers are live.
- **Explicit publication:** a same-track serializer hook after the compact copy can
  read the current payload and override only compact byte0 for exact raw 45.
  The recovered expression is `G=LONG(0x444E13F4)`,
  `P[t]=LONG(G+0x1AC+0x3C0*t)`, with null guards. The local compact destination is
  `0x80002000+0x14*t`. The Section7 copy sends low-record byte0 to
  `T[t]+0x3E`, where `T[t]=0x80003C40+0x8E*t`. The cross-core relationship is strongly
  supported; local coherency/timing was not observed.
- **Separate engine slot is possible:** the original 46-byte selector map can be
  packed into 23 bytes, funding 13-entry prep/render tables within the original local
  footprint. The following512-byte lookup stays fixed. The research candidate sends
  exact selector 45 to e12, initially duplicating the family 0 function pair. This
  changes table layout and needs coordination with FM4, not raw patch stacking.
- **Native eight-knob interface:** Machine45 can borrow BD MODERN's descriptors
  `158,161,163,165,159,160,162,164`, with concrete MAIN WORD storage and compact/DSP
  consumers established. Descriptor aliasing keeps the raw Machine ID 45 intact.
- **A narrow persistence result:** accepted Sound-v7 current-Kit save/load copies
  Machine BYTE `P+0xA2 ↔ storage+0xAC`. The load bound at `0x400A7018` can retain45
  while preserving existing valid IDs and the 255 sentinel. This does **not** prove
  standalone Sound application or Pattern restoration.

## Boundaries still open

Selector refresh uses the previous per-slot gate. The candidate has an exact45
observation bypass, but **leaving45, alternate Sound-lock rows and stale selector
state need real lifecycle tests**. The serializer override reads the public current
payload, so Sound-lock precedence cannot be assumed correct.

Pattern Machine restoration and standalone Sound-pool-to-track application remain
unproven. Native p-lock/held-trig behavior for this new identity has not been verified
end-to-end. CPU deadlines, device acceptance and audibility are untested. The old
MAIN page-accessor CCR.X concern was resolved locally and is no longer an open gate.

For arbitrary DSP modules, there is also a small installation-independent SDK
(`param[8]`, up to72 private state bytes, signed local output), but its native
installation backend is unavailable. Passing its host tests is not device-runnability.

## Possible fit with SyntHack

I read the [current coordination discussion](https://github.com/Angelo-politek/Synthack-OS/issues/1#issuecomment-6453153344),
including the `dev` registry, shared `modarea7` plan and future1.42 target. The
published FM4 source is1.40A; I have not treated those addresses as verified1.41
addresses or treated the reported1.41 hardware port as validation of this work.

A small first step could be **registration/lifecycle only**: raw public45, donor
metadata and an existing renderer. Stock selector 45 already maps to family 0, so that
first experiment need not depend on the packed e12 layout or a new synthesis kernel.
Later, a shared engine registry and qualified CPU 2 loader could support separate DSP
implementations without competing table edits or unsafe RAM assumptions.

Would that fit the direction of the shared engine work? I would welcome corrections
or suggestions about which findings are most useful to bring into the framework.
This is an offer of research and reproducible evidence, not a request that either
of you implement it for me.

The companion documents are [the technical handoff](https://github.com/Humgic/syntakt-machine45-research/blob/main/MACHINE45_TECHNICAL_HANDOFF.md) and [the evidence index](https://github.com/Humgic/syntakt-machine45-research/blob/main/EVIDENCE_INDEX.md):
they separate confirmed local facts, host tests and unresolved edges, and identify
the exact private candidate hashes. No Elektron images, extracted code, full binary
diffs or firmware-derived tables are intended as public attachments. Any source
contribution would first be sanitized to independent logic plus expected hashes,
with licenses and attribution checked.
