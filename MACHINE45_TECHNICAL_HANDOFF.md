# Machine45: technical research handoff to SyntHack OS

Audit date: **2026-10-28**, Asia/Shanghai. Local firmware: **Syntakt OS 1.41**.

**Research only. Do not flash. This repository distributes research notes, not firmware.**

> Public sanitized export of a private 2026-10-28 audit. Original source reports,
> disassembly and binaries are not included. Source-catalog links identify private
> evidence by path and hash; they do not expose its contents or independently verify it.

## 1. What this handoff establishes

The objective is a **46th public Machine, raw ID 45**, retaining stock IDs 0–44.
It is not a replacement for SY TONE, BD MODERN, or another stock slot. The first
useful community milestone should reuse an existing renderer and prove selection,
editing, transitions and persistence before adding a new synthesis algorithm.

The private research workspace contains an independently constructed **offline** ID 45 candidate:
native-menu acceptance, distinct runtime identity, donor metadata, an explicit
serializer bridge, selector 45 observation, and a physically separate engine-family
slot e12. A later V2 waveform experiment exists but is a **test fixture**, not the
purpose of the registration work and not a required community dependency.

**A complete, working new Machine lifecycle has NOT been demonstrated.** The
composed device path is strongly supported statically; local hardware execution,
device audibility, full Pattern restoration, Sound-lock behavior and complete
enter/leave transitions remain unverified. Arbitrary native DSP module installation
has a separate unresolved storage/loader boundary.

### Verification vocabulary

| Label | Meaning in this handoff |
| --- | --- |
| **Confirmed by static analysis** | Existing bytes, decoded instructions, concrete object/index expressions, or a bounded symbolic argument support the stated local claim. |
| **Verified in emulator** | A named emulator executed the relevant firmware path. No local whole-device Machine45 emulator run was recovered or performed. The bounded host opcode interpreter is identified separately, not presented as a booted Syntakt. |
| **Verified on hardware** | Device execution was observed. **None for this local Machine45 project.** External authors' FM4 reports are explicitly attributed. |
| **Hypothesis / Not yet verified** | A missing edge, conditional peer mapping, scheduling assumption, or proposed integration remains. |

“READY” in older reports means the stated **offline** milestone, not device approval.
Historical reports are cumulative and sometimes contradictory. Later closure reports
and the actual frozen bytes take precedence; see the correction table in §11.

## 2. Audit provenance and immutable inputs

At the time of the private audit, the research directory was **not a Git repository**:
`git rev-parse --show-toplevel` returned exit 128, and no nested `.git` metadata was
found. Its research commit history therefore cannot be reconstructed. Provenance
comes from saved manifests, scripts, disassembly, SHA-256 ledgers and dated reports;
it must not be described as Git history.

The audit inventory covers **1,754 research/source/output files**, including **803
evidence files**, outside dependency/toolchain/cache directories. Existing full and
bounded disassemblies, patch generators, saved test results and build logs were
indexed. Not every historical analysis was re-proved. **1,280 pre-existing protected
files were checked unchanged**, including the frozen images, SDK, reports and status
documents. See [complete index](EVIDENCE_INDEX.md)
and the [read-only audit results](metadata/VALIDATION_SUMMARY.json).

| Private local artifact — never upload | Bytes | SHA-256 |
| --- | ---: | --- |
| Original `Syntakt_OS1.41.syx` | 2,571,424 | `8e2488f462c4a5656396a895f113bcd415e9900fa8709340dccf45d4cb9ed19e` |
| Original extracted MAIN | 3,438,480 | `8cf2b4b4ea80d58953da46ca453328454fb3fca5cb5f844a2f7bad4b72241f53` |
| Original extracted Section 7 | 383,760 | `daf6451cf9587c0b628e901b7bb6b25f4e2633d448c534c0c181dd35ec783bc2` |
| `build/Machine45_FULL_STATIC_BRIDGE_MAIN_RESEARCH_ONLY.bin` | 3,438,480 | `de897a43ff8499781821480c7c249394beb1792ab2652d057795087dbaa6e83d` |
| `build/Section7_MACHINE45_V2_BRANCHLESS_RESEARCH_ONLY.bin` | 383,760 | `4d8bb919a2447edd67c8cd5b6b5607f1f2789dc0151169af29b959493e72f505` |
| `build/Syntakt_OS1.41_Machine45_V2_BRANCHLESS_RESEARCH_ONLY_DO_NOT_FLASH.syx` | 5,645,856 | `94c59d048057a58ec3cb85b16ec9912e1d86cecb49d5d62f23ddc955ec121d6c` |

Artifact identifiers and a summary of the frozen validation scope are in
[the public V2 baseline summary](docs/FROZEN_BASELINE.md).
No existing binary was modified or regenerated during this audit.

## 3. Keep the identifier namespaces separate

| Namespace | Existing meaning | ID 45 proposal |
| --- | --- | --- |
| Public/runtime `machineType` | BYTE in a MAIN Sound/track payload, stock IDs 0–44 across digital and analog Machines | Preserve raw 45 as a distinct identity. |
| Section 7 raw selector | Signed BYTE input with a 46-entry mapping domain | Explicitly publish 45; do not assume a natural byte-for-byte bridge. |
| Implementation family `e` | Twelve existing prep/render families, 0–11 | Optional dedicated family 12; not public Machine ID 12. |
| Parameter descriptor ID | Index in 505 records of 52 bytes | Initially borrow Machine 0's eight descriptors. |
| Generic/internal parameter slot | Descriptor-derived payload/value-array index | Separate from knob ordinal, descriptor ID and Machine ID. |
| Track/slot ordinal `t` | MAIN digital tracks 0–7 on the recovered compact path | Preserve the same ordinal through eight compact records. |

The existence of raw selector 45 in stock firmware is **not evidence of a hidden
public Machine**. The original map sends it to family 0. Many other public IDs also
map to family 0 in this table; that does not make all stock Machines digital engines.

### Address convention

All local MAIN/Section 7 executable VAs below use **`VA = file offset + 0x40000400`**,
big-endian ColdFire ISA-C/EMAC. These CPUs have distinct address spaces: identical
numeric addresses do not mean the same storage. Some old MAIN listings were emitted
with base `0x40000000`; add `0x400` to those listing labels before comparing them.
The container's Section 7 destination field is not itself proof of its linked VA.
[Address normalization evidence](docs/SOURCE_CATALOG.md#source-a1ba1287be3d2fdc).

## 4. MAIN registration, runtime identity and metadata

### Runtime ownership and setter

```c
R[t] = model + 0x6C + 0x3C0*t;
P[t] = *(uint32_t *)(R[t] + 0x10);
machineType = *(uint8_t *)(P[t] + 0xA2);
```

The containing setter starts at **`0x40025594`**. **`0x40025620` is the store
instruction**, not the function entry: `MOVE.B D2,0xA2(A0)`. `D2` is the raw selected
ID. At the changed-value boundary **`0x40025628`**, `D4` is the zero-based MAIN track,
`A2=R`, `A0=P`; the preceding comparison skips this boundary for unchanged values.
The unchanged setter and its entry/store distinction were re-decoded in this audit.
[Hook ownership/ABI](docs/SOURCE_CATALOG.md#source-5901bcebce88e14f).

The proven menu route includes `0x4002F3DC → 0x4000F7BE → 0x4000F86E → 0x40025594`.
Menu-item `+4` carries the raw ID; this is not an engine-family index.
[Writer/caller crosswalk](docs/SOURCE_CATALOG.md#source-b0cdca802a2c36f2).

### Actual frozen MAIN edits

The final MAIN has **12 logical write allocations, 847 differing byte positions**
against the original, with no unrecorded differences in the audit. These are a
version-specific research manifest, **not a ready-to-merge SyntHack patch set**.

| 1.41 VA / data interval | File offset / size | Semantic edit |
| --- | --- | --- |
| `0x40026556` | `0x26156`, 2 B | MachineListView loop terminal 45 → 46, exposing candidate raw ID 45. |
| `0x4007B9EA` | `0x7B5EA`, 30 B | Page accessor: IDs 0–44 unchanged, exact-45 → donor page 0, other >44 → row 44. |
| `0x400A6422` | `0xA6022`, 2 B | Normalizer row bound 44 → 45. |
| `0x400A644A` | `0xA604A`, 4 B operand | Normalizer base → `0x40344A48`. |
| `0x400A647C` | `0xA607C`, 2 B | Compatibility lookup bound 44 → 45. |
| `0x400A6494` | `0xA6094`, 4 B operand | Bounded compatibility reader base → `0x40344990`. |
| `0x400A6522` | `0xA6122`, 2 B | Display-record row bound 44 → 45. |
| `0x400A7018` | `0xA6C18`, 2 B | Accepted Sound/Track row load bound 46 → 47, retaining raw 45. |
| `[0x4022C824,0x4022C8A8)` | `0x22C424`, 132 B | Existing display row 45 receives a copy of donor 0 metadata. |
| `[0x40344990,0x40344A48)` | `0x344590`, 184 B | 46 compatibility records; entries 0–44 retained, entry 45 = entry 0. |
| `[0x40344A48,0x40345178)` | `0x344648`, 1,840 B | 46×10 descriptor-normalizer matrix; entry 45 = entry 0. |
| `[0x400A4C7A,0x400A4D20)` | `0xA487A`, 166 B | In-place compact serializer rewrite with exact-45 override. |

Evidence: [initial exact manifest](docs/SOURCE_CATALOG.md#source-df754e105bce6cae),
[relocated data](docs/SOURCE_CATALOG.md#source-2de8b98f2a3d215e),
[applied serializer diff](docs/SOURCE_CATALOG.md#source-b908db4076cd57fb),
and the new audit's `MAIN_manifest` / `MAIN_data` results.

Important qualifications:

- The page table is **runtime-built** at `0x41B9EC0C`, stride `0x2C`. Appending
  row 45 in place would collide with the next live page table. The candidate aliases
  its accessor; it does not allocate a new page row.
- Display metadata is still borrowed: the new entry can look like a second BD MODERN.
  Distinct raw identity is established, but unique Machine45 branding is not a
  completed native UI installation.
- The original normalizer at `0x43BDE918` is built from 505 descriptors. The research
  candidate reconstructs a static copy of its stock rows. Other mods that change
  descriptors can invalidate that reconstruction: do not transplant it unchanged.
  This is a composition check, not a claim that every FM4 descriptor edit conflicts:
  its published extra-page records use owner `0xFFFFFFFF` and are excluded from
  the per-Machine normalizer builder.
  This audit independently reconstructed all 315 admitted records again and matched
  the candidate's 46×10 matrix; the eight descriptor names/slots/bounds also match
  the original image. [Independent metadata check](metadata/VALIDATION_SUMMARY.json).
- The data relocation bytes were verified, but safe lifetime/mapping of that
  original-zero initialized-data/template area is **not hardware-qualified**.
  Prefer an explicitly owned community resource, or narrow exact-45 lookup aliasing.
- A second, unbounded compatibility predicate remains on its original base at
  `0x400A63D0`; changing every matching literal would alter unrelated behavior.
- The old page-accessor CCR.X blocker is **RESOLVED_SAFE for the recovered caller
  set**, not still open. This does not certify arbitrary newly introduced callers.
  [CCR.X closure](docs/SOURCE_CATALOG.md#source-179a3cba053fce99).
- This is a recovered set of bounds/metadata edits, not proof that every migration,
  clipboard, undo, enum validator or future OS Machine-count assumption is covered.

## 5. The explicit selector bridge and the real transfer

The natural changed-payload → service-record → K refresh path remains **PARKED /
UNPROVEN**. It is not the proof supporting the frozen candidate. In particular,
opcode `0x30`, subtype 4 from `0x40088D1C` was traced to **host-bound USB IN endpoint
0x82**, not an internal service queue. Do not pursue a nonexistent host-handler edge.
[Request/receiver reports](docs/SOURCE_CATALOG.md#source-618aca520a0685e2).

The applied bridge instead runs after the existing 20-byte compact copy:

```c
G = LONG(0x444E13F4);
P[t] = G ? LONG(G + 0x1AC + 0x3C0*t) : NULL;
if (P[t] && BYTE(P[t] + 0xA2) == 45)
    Cbuild[t][0] = 45;                 // leave the other 19 bytes unchanged

Cbuild[t] = 0x80002000 + 0x14*t;       // t = 0..7
```

The actual guarded check occupies `0x400A4C8A..0x400A4CB2`; the BYTE store is at
`0x400A4CAE`. It does not change K's ownership, force a dirty flag, or hold a DSP
reset request permanently high. The hook executes on the recurring serializer path,
not merely once per Machine change.
[Applied chain](docs/SOURCE_CATALOG.md#source-1922296192440afd),
[serializer ownership/placement](docs/SOURCE_CATALOG.md#source-7db526998bf24c82).

### Compact handoff, all eight ordinals

```text
MAIN [0x80002000,0x800021B0)
  -- TCD47, 27 × 16 bytes --> MAIN aperture [0x10000000,0x100001B0)
  -- paired peer window, STRONGLY SUPPORTED --> Section7 low [0,0x1B0)
  -- callback 0x40000934 --> snapshot [0x80008000,0x800081B0)
  -- eight concrete 20-byte copies --> T[t]+[0x3E,0x52)

T[t] = 0x80003C40 + 0x8E*t
low[0x14*t + 0] --> BYTE(T[t]+0x3E), unchanged
```

All eight ordinals are concrete loop iterations; no `t+2` inference is used.
Local ranges, byte positions and loop ordinals are **Confirmed by static analysis**.
MAIN aperture ↔ peer low-window correspondence is **strongly supported**, based on
paired command/status handshakes, descriptor extent and structure. Actual atomicity,
completion/coherency and device scheduling are **not yet verified**.
[Compact handoff](docs/SOURCE_CATALOG.md#source-0b0339ab0d439ae7),
[low-prefix destination map](docs/SOURCE_CATALOG.md#source-8b4ed677309b774d).

### FC045 is MMIO, not a callable renderer/transfer function

The historical “FC045 primitive” label denotes inline eDMA programming. The matched
MCF5441x layout gives **TCD47 = `0xFC0455E0`**; `SSRT` at `0xFC04401E` starts channel 47.
It has no four-argument function ABI or callback parameter.

| Field | Offset from TCD47 | Relevant value |
| --- | ---: | --- |
| SADDR / DADDR | `0x00` / `0x10` | Actual source/destination addresses. |
| ATTR | `0x04` | `0x0404`: 16-byte source/destination sizes, no modulo. |
| SOFF / NBYTES / DOFF | `0x06` / `0x08` / `0x16` | `16 / 16 / 16`. |
| CITER / BITER | `0x14` / `0x1C` | Linked count/control, not an ordinary 16-bit length. |
| CSR | `0x1E` | Software completion checks include bit 7. |

`0xDE1B`: ELINK=1, LINKCH=47, low-nine-bit count 27 → **0x1B0 bytes**.
`0xDE40`: ELINK=1, LINKCH=47, count 64 → **0x400 bytes**.
The Section 7 reverse transfer reads exactly `[0x80003840,0x80003C40)` and targets
`[S+0x1B0,S+0x5B0)` for the recovered freshly programmed descriptor. It does **not**
read a 0xDE400-byte region or thereby prove T-selector overlap. S's runtime owner
remains unresolved locally; this parked boundary must not be joined by assumption.
[Corrected exact geometry](docs/SOURCE_CATALOG.md#source-2c78089c07120384).

## 6. Selector observation, mapping and dispatch

Stock selector normalization is signed: negative → 0; 0–45 retained; positive >45
clamped to 45. The original 46-byte map has the following logical values:

```text
0..7 -> same-numbered family
36 -> 8; 37 -> 9; 38 -> 10; 44 -> 11
all other entries, including 45 -> 0
```

The candidate retains families for all non-45 raw-byte inputs and maps **only exact
raw 45 → e12**. Its invalid-byte decode uses a family 0 fallback entry, not entry 45
of the new packed map. Closed-gate cached-family behavior is a separate condition.

| Object | Stock 1.41 | Frozen candidate |
| --- | --- | --- |
| B/render table | `0x400148F0`, 12 LONG pointers | Same base, 13 pointers, ends `0x40014924`. |
| A/prep table | `0x40014920`, 12 LONG pointers | `0x40014924`, 13 pointers, ends `0x40014958`. |
| Raw selector map | `0x40014950`, 46 BYTEs | `0x40014958`, 23 packed BYTEs, ends `0x4001496F`. |
| Following lookup | `[0x40014980,0x40014B80)` | All 512 bytes unchanged. |

Packing uses even selector in the low nibble, odd selector in the high nibble.
The decoder fits the original dispatcher span; its family bound becomes `e<=12`.
Entries A/B[0..11] retain their pointer values; **A[12]=A[0]=`0x40006968`** and
**B[12]=B[0]=`0x40006C9E`**. The two e12 cells exist physically, but initially share
code with family 0. They are not a new DSP algorithm by themselves.
[Layout](docs/SOURCE_CATALOG.md#source-558170dc333683f4),
[call-boundary qualification](docs/SOURCE_CATALOG.md#source-18872fbc93e28209).

The family-change call is `JSR 0x40003EE0` at `0x40004432`. Differences in incoming
A0/D0/A6 were proven dead; D6's relocated A-table pointer is live but equivalent;
D4's raw 45 family change is intentional; full CCR and the explicit Dslot stack
argument match at that boundary. This is semantic equivalence over the recovered
path, not bitwise identity of every register.

### Refresh is a separate gate

The original dispatcher tests the **previous LONG `Dslot[t]+0x38`**. Incoming header
state becomes the next gate; writing a selector BYTE alone does not guarantee immediate
observation. The candidate's exact-45 bypass in `[0x400043EE,0x4000442A)` observes raw 45
even with a closed old gate, then retains the family-cache equality check. It does not
force a family reset on every block when the cache is already 12.
[Gate proof](docs/SOURCE_CATALOG.md#source-951f30f7cec5647d).

**Transition qualification:** leaving raw 45 follows the ordinary selector/gate path.
With the original gate closed, cached e12 can remain until that gate opens. The MAIN
override also reads the public current payload, not a proven selected Sound-lock row.
Enter/leave behavior, alternate-row/Sound-lock precedence and stale K-dependent
processing must be tested; the current patch is not a complete transition API.

## 7. Eight native knobs: exact reusable interface

Machine45 borrows **Machine 0 / BD MODERN** metadata, not SY TONE metadata. The eight
UI descriptor identities and typed storage alias were proved independently. The
descriptor getter at `0x400A5C4A` resolves the slot; the accepted WORD write at
`0x40013378` is `P + 0x14 + 2*slot`. None of those storage decisions substitutes
raw ID 0 for raw ID 45.

All fields below are big-endian WORDs. `C+` means compact record offset; `T+` is
the same-slot Section 7 record. Roles name the nearest **existing donor** consumer,
not a required semantics for a future third-party DSP module.

| Knob / UI name | Descriptor | Slot | P+ | C+ | T+ | Default; encoded raw range | Donor role / nearest consumer |
| --- | ---: | ---: | --- | --- | --- | --- | --- |
| 1 Tune / TUNE | 158 | 18 | `0x38` | `0x02` | `0x40` | `0x4000`; `0x2800..0x5800` | PITCH, `0x40002596`, phase increment. |
| 2 Pitch Sweep / SWEP | 161 | 21 | `0x3E` | `0x08` | `0x46` | `0x1000`; `0..0x7F00` | PITCH, coefficient `Dslot+0x3F8` → `0x4000262C`. |
| 3 Punch / PNCH | 163 | 23 | `0x42` | `0x0C` | `0x4A` | `0`; `0..0x0100` | CONTROL, reset/setup WORD test `0x40006AA8`, later `0x400047EA`. |
| 4 Decay / DEC | 165 | 25 | `0x46` | `0x10` | `0x4E` | `0x4000`; `0..0x7F00` | ENVELOPE, `Dslot+0x3F0` → `0x40003DD0`. |
| 5 Square Modulation / SMOD | 159 | 19 | `0x3A` | `0x04` | `0x42` | `0x0A00`; `0..0x7F00` | MIX/TIMBRE, interpolation → `Dslot+8`, `0x400049F4`. |
| 6 Triangle Mod+Fdbk / TMOD | 160 | 20 | `0x3C` | `0x06` | `0x44` | `0x1000`; `0..0x7F00` | MIX, interpolation → `Dslot+0x0C`, `0x400049F4`. |
| 7 Modulation Env / MENV | 162 | 22 | `0x40` | `0x0A` | `0x48` | `0x1800`; `0..0x7F00` | ENVELOPE/MODULATION, `Dslot+0x464`, `0x40003DF2`. |
| 8 Overdrive / OVER | 164 | 26 | `0x48` | `0x12` | `0x50` | `0`; `0..0x7F00` | WAVESHAPE, common postprocessor `0x4000112C`. |

Sources: [descriptors](docs/SOURCE_CATALOG.md#source-cf0d151200b728bc),
[actual stores](docs/SOURCE_CATALOG.md#source-dbe61f775d248162),
[compact transforms](docs/SOURCE_CATALOG.md#source-efeebcf15ccc4ec9),
[Section7 fields](docs/SOURCE_CATALOG.md#source-e4980287f6dda59d),
[nearest consumers](docs/SOURCE_CATALOG.md#source-e168d79dfee3a6d8).

Local storage, packing and consumer endpoints are **Confirmed by static analysis**;
the complete cross-core parameter path is **strongly supported**. Local e12 inheritance
is confirmed because the prep/render pair and the relevant state fields remain.
This does not independently prove Parameter Lock editing or Sound-lock timing on a
running Machine45. Those need emulator lifecycle tests, not descriptor-name inference.

Important transport details:

- MAIN smoothing and active modulation precede serialization. Received values need
  not equal the instantaneous knob value. SWEP/DEC nearest consumers use the high
  byte, but transport is still 16-bit; PNCH tests the whole WORD.
- MENV is inverted as `0x7F00-v`, except for the retained K37/K44 cases. The override
  does not force K45. A stale K value can therefore affect exceptional processing.
- Compact `+0x0E` is a separate control WORD, **not an unused ninth knob slot**.
- Rewriting global descriptor names/formatters would change Machine 0 too. Machine45
  needs conditional presentation or separately allocated metadata, composed with
  other mods' SourcePageView hooks.

## 8. Persistence: what is closed, and what is not

### Sound-v7 and current Kit — confirmed locally

Concrete Sound ownership, not matching sizes, identifies the converter pair:

```text
Sound mirror callback 0x4002412C
  -> save 0x400A7366
  -> 0x400A73FC: BYTE(P+0xA2) -> BYTE(SoundStorage_v7+0xAC)

accepted current-Kit-v11 converter 0x400A7630
  -> 0x400A76B6 calls Sound-v7 loader 0x400A6F7E per track
  -> 0x400A7032 reads S+0xAC
  -> 0x400A7046 writes live P[t]+0xA2
```

For accepted source marker 7, the frozen bound at `0x400A7018` is 47. With
`u=(raw+1)&255`, it retains raw 0–45 and 255, and maps 46–254 to 0. The stock bound 46
maps raw 45 to 0. `0x400A703A` is **MVZ.B**, not the earlier incorrectly transcribed
MVS.B. The one-byte format itself can represent 45 without widening.

Current-Kit ownership is concrete: `P[t]=H[current_k]+0x2A+0x123*t`, while stored
Sound children use `Sk+0x2E+0x107*t`. The accepted per-track converter preserves the
Machine BYTE on that route. Kit version 11 is **not** Pattern version 11.
[Sound source](docs/SOURCE_CATALOG.md#source-423aa4fff8ae4525),
[live destination](docs/SOURCE_CATALOG.md#source-fa5b68500f57cbbd),
[save symmetry](docs/SOURCE_CATALOG.md#source-f4b01430c5087c91).

### Standalone Sound and Pattern — not closed

Standalone import reaches the same converter through `0x400AF5F2/0x400AF624`, but
its destination is a **Sound-pool payload**. A pool-to-active-track application edge
was not established. Do not extend the current-Kit result to every Sound menu action.

The real Pattern-v11 loader is `0x400A8048`. Its child rows have source stride
`0x3D7`, destination stride `0x499`, and a separate lock converter `0x400A7F0C`.
The old guessed Pattern-row `+0xAC` byte is copied to row `+0x2EC`, not live P+A2.
No continuous Pattern load → qualified live Machine-BYTE writer was recovered.
An accepted alternate service row can feed K without proving a live P Machine write.
[Pattern source correction](docs/SOURCE_CATALOG.md#source-aa3c8a4f3345b0f7),
[writer intersection](docs/SOURCE_CATALOG.md#source-b0cdca802a2c36f2),
[selector versus application](docs/SOURCE_CATALOG.md#source-1d3c8285ff4c76e2).

| Lifecycle property | Local status |
| --- | --- |
| Accepted Sound-v7 current-Kit Machine-BYTE save/load | **Confirmed by static analysis; READY in that scope.** |
| Standalone Sound-pool → active track | **Hypothesis / Not yet verified; PARKED.** |
| Pattern Machine identity save/restore | **Hypothesis / Not yet verified; static analysis exhausted.** |
| Machine45 native Parameter Lock / held-trig / Sound-lock lifecycle | **Not demonstrated end-to-end in emulator or on hardware.** |
| Malformed/legacy migration, project exchange, clipboard and undo coverage | **Not comprehensively qualified.** |

## 9. What the frozen V2 and SDK actually provide

V2's dedicated test core is selected by full `LONG(Dslot+0)==12` in the existing
`0x4000290E` render helper. Its e12 span is `[0x4000297C,0x400029D8)`; the branchless
fold is `[0x40002994,0x400029B2)`. The helper remains 340 bytes. The fold implements
`x<0 ? ~x : x`, **not ABS**. It changes 23 byte positions versus the Candidate B
parent within a 30-byte allocation. The older fixed-shift/TUNE attenuation experiment
at `0x400046F0` is not the current V2 waveform-control design.
[Composition](docs/SOURCE_CATALOG.md#source-e5fd0f09642ba705),
[branchless equivalence](docs/SOURCE_CATALOG.md#source-adcc7d51b963ef87).

This audit rechecked canonical hashes, all recorded MAIN allocations, packed map and
A/B data, 256 selector-byte family outcomes, bounded disassembly, **4,096 encoded-core
cases**, **312 whole-helper cases** across 8 slots × 3 lanes × 13 family tags, and **six
existing host reference tests**. These are **bounded host checks**, not whole-device
emulation. The archived 100,663,296 phase comparisons, 1,000,000 randomized states and
1,152,000 raw/PCM fixture comparisons were located and inspected, **not all rerun**.
No WAV or firmware was generated.

Container/packet checks and in-memory re-extraction passed: 44,108 packet checksums,
ELE3 checksum, four compressed-section sums; MAIN/Section 7 equal supplied frozen
copies; the other six sections match originals in stored and decoded form. The
pinned SyntHack 1.41 boot-margin **software model** gives 99,938 bytes for stock and
2,096,137 for this literal-packed candidate. That is not device authentication,
flash-capacity, boot-success or hardware timing proof.

### Installation-independent module API

See the [public API](include/machine45_dsp_api.h) and
[DSP ABI summary](docs/DSP_ABI.md). The private SDK architecture and module-author
guide are not included in full.

- Eight received raw `uint16_t` parameters, signed `int32_t` **local generation output**,
  optional context, init and explicitly optional reset.
- Up to 72 private state bytes per selected slot. The qualified loan is
  `[Dslot+0x6B0,Dslot+0x6F8)`, only while the **actual family is 12**. Family 11 uses
  those bytes otherwise. This is not globally free RAM and is not Sound persistence.
- Candidate B and a 12-byte stateful fixture use the same source-level interface.
  The SDK does not specify a native ColdFire calling convention, install address,
  final DAC PCM ownership, or a guaranteed sample rate.
- Native process/init/relocation/cache/placement bindings remain symbolic in
  [the backend contract](docs/SOURCE_CATALOG.md#source-6d4262dbb0735269).
  Passing the SDK validator does not make a module device-runnable.

### Budgets

The existing Section 7 geometry is Dslot 8 × `0x708` = 14,400 bytes,
B 8 × 128 = 1,024 bytes, and T 8 × `0x8E` = 1,136 bytes.
Packed-map savings fund the additional 8 pointer bytes without
growing Section 7 or moving the following lookup. The 72-byte state loan is existing
storage, up to 576 bytes across 8 slots, not a new allocation.

Per recovered complete helper, branchless e12 executes 912 instructions versus 911
for the retained donor path, with 226/83 LONG reads/writes versus 289/83. That is not a
whole-engine or worst-case interrupt-cycle measurement. MAIN adds recurring per-track
checks. Local **absolute static deadline remains BLOCKED**, relative render cost
**COMPARABLE_BUT_UNPROVEN**, and hardware performance **UNTESTED**. RAMBAR/mapping/
memory-service state prevents a justified absolute bound.
[Performance closure](docs/SOURCE_CATALOG.md#source-4285232af0501373).

## 10. Comparison with current public community work

### Pinned sources, not a moving-branch assumption

| Repository snapshot | Commit inspected | Qualification |
| --- | --- | --- |
| SyntHack `main` / v0.9.0 | `c12cf23ad88e68d3f85422a7d09c2a911659997f` | Released 1.41 framework snapshot. |
| SyntHack `dev` | `76dfe08ba1b2d964495657f4fda775b328342d70` | Contributions/resources/build-policy snapshot, 2026-10-27. |
| SY FM4 `main` | `a596b6393fc43582fd3ae0234ac04e198b779edb` | Published implementation targets **1.40A**, replacing/upgrading Machine 4. |

The [maintainer comment on issue 1](https://github.com/Angelo-politek/Synthack-OS/issues/1#issuecomment-6453153344)
asks for contributions against `dev`, registry claims, shared `modarea7` first, and
eventual 1.42 targeting. No `modarea7` or merged `sy-fm4` mod exists in either inspected
upstream tree. Later issue comments report a separate 1.41 port working on hardware;
that is **third-party reported hardware verification**, not local Machine45 evidence.
[1.41 port report](https://github.com/Angelo-politek/Synthack-OS/issues/1#issuecomment-6245154375).

### Slot replacement versus registration

FM4 keeps **public Machine 4 / engine 4**. ALGO 0 delegates to stock SY TONE; other
algorithms extend that same identity and add a second SYN page. Its native
integration, parameter-lock and serialization techniques are useful, but it does
not establish a 46th public Machine or Pattern persistence for raw 45.
[FM4 design](https://github.com/Rxuting/sy-fm4/blob/a596b6393fc43582fd3ae0234ac04e198b779edb/docs/DESIGN.md),
[prep/render implementation](https://github.com/Rxuting/sy-fm4/blob/a596b6393fc43582fd3ae0234ac04e198b779edb/engine/syn/fm4_syn.c).

### Reuse what is already available

| Community facility | Reuse / boundary |
| --- | --- |
| MAIN `modarea` | 64 KiB heap-owned reservation, boot loader and tests. Reuse for small MAIN lookup/serializer hooks instead of cave hunting. Its success does not reserve memory on CPU 2. |
| Builder | Per-range expected hashes, overlap rejection, dependency resolution and boot-margin checks. Use these instead of distributing a patched image. |
| Registry | Coordinate mod-area offsets, descriptor IDs, pages, vparams and saved storage before implementing a mod. |
| Native descriptors/editing | Reuse native sound-model descriptors for held-trig/p-lock behavior. Initial donor 45 needs no new descriptor IDs. `vparams` routes kit parameters and is not a substitute for native per-Sound lock storage. |
| CPU 2 loader / `modarea7` | FM4 supplies a 1.40A boot-copy example; shared safe installation is **not qualified in the inspected upstream dev**. Do not repeat the old raw-RAM assumption. |
| Emulation/serialization tests | Use existing Unicorn/EMAC framework and FM4/digiemu experience to close real lifecycle edges. Published coverage does not transfer automatically to ID 45. |

Sources: [modarea ownership](https://github.com/Angelo-politek/Synthack-OS/blob/c12cf23ad88e68d3f85422a7d09c2a911659997f/mods/modarea/README.md),
[current registry](https://github.com/Angelo-politek/Synthack-OS/blob/76dfe08ba1b2d964495657f4fda775b328342d70/docs/registry.md),
[builder](https://github.com/Angelo-politek/Synthack-OS/blob/76dfe08ba1b2d964495657f4fda775b328342d70/tools/build/build.py),
[native editing guidance](https://github.com/Angelo-politek/Synthack-OS/issues/1#issuecomment-6225930131).

The inspected dev snapshot permits in-place patches to sections 3 and 7 but **appends only to 3**
(`APPENDABLE={3}`). Earlier comments saying Section 7 append was accepted are
superseded by this source and the latest maintainer comment. FM4's published loader
uses `0x47000000`; later authors warn about sample-page overwrites. That address is
**not an adopted safe installation address**. A working specific build report does
not replace a general ownership/lifetime certificate.

### Version crosswalk — selected examples only

| Item | FM4 published 1.40A | Locally verified 1.41 |
| --- | --- | --- |
| MAIN descriptor base | `0x40219A9C` | `0x4022D59C` |
| SourcePageView knob override | `0x40043F9C` | `0x40044C54` |
| MAIN render DMA waiter | `0x400A10DA` | `0x400A2036` |
| Section 7 stock tables | `0x400148F0 / 0x40014920 / 0x40014950` | Same quoted stock addresses, independently read locally. |
| Section 7 patched A/map bases | Not the packed e12 layout | `0x40014924 / 0x40014958`. |
| Claimed section-size cap | `0x60000-5`, FM4's 1.40A check | **Not adopted as a qualified 1.41 loader bound.** |

The local 1.41 boot-call range matches FM4's quoted 1.40A expected hash, and Section 7
length matches its declared image end. Those two checks do not qualify all addresses
or either loader. The standalone FM4 `--hijack` table writes also omit per-entry
`expect` hashes in their `put()` calls; use the community builder's stronger site
checks when porting. [Published patcher](https://github.com/Rxuting/sy-fm4/blob/a596b6393fc43582fd3ae0234ac04e198b779edb/patch/s7patch.py).

### Compatibility work that remains

1. **A/B composition:** FM4's original A[4] patch is at `0x40014930`; with the packed
   layout A[4] is at `0x40014934`. Blind stacking can reject or corrupt another
   entry. Generate a shared table/layout or initially avoid table expansion.
2. **Native metadata:** verify or regenerate a static normalizer from the combined
   descriptor catalog rather than assuming any stock snapshot is universal. FM4's
   excluded-owner page 2 records alone need not change those rows. Do not globally
   rename shared Machine 0 descriptors.
3. **Resources:** FX3 uses 246–253 and 269; master-comp 262–268. IDs 254–261 are unclaimed
   in the inspected registry but have MIDI CCs and are discussed for FM4. IDs 505+
   have no native descriptor/object allocation. Do not claim an ID from a stale list.
4. **Hooks:** compose SourcePageView/edit/serialization hooks through a common
   provider. Multiple raw vtable/entry overwrites are not independent mods.
5. **Budget:** community CPU 1 interrupt-load tests include FX3, master-comp and
   dual-mono; CPU 2 FM4 reports are separate. Their instruction/cycle estimates are
   not additive hardware deadline proof for Machine45.
6. **Transitions/storage:** test 45 alongside 4/FM4, stock 0 and 44, Sound locks,
   p-lock restore, Kit/project changes and Pattern reload. Preserve original invalid
   IDs/sentinels and isolate all 8 tracks.

References: [registry source](https://github.com/Angelo-politek/Synthack-OS/blob/76dfe08ba1b2d964495657f4fda775b328342d70/tools/build/registry.py),
[ID audit](https://github.com/Angelo-politek/Synthack-OS/blob/76dfe08ba1b2d964495657f4fda775b328342d70/tests/test_id_audit.py),
[combined CPU1 tests](https://github.com/Angelo-politek/Synthack-OS/blob/76dfe08ba1b2d964495657f4fda775b328342d70/tests/test_cpu_budget.py).

## 11. Corrections and rejected bridges

| Earlier interpretation | Audited replacement |
| --- | --- |
| `0x400144F0` is a renderer table | Rejected. Qualified stock B/A/map bases are `0x400148F0/14920/14950`. |
| Machine ID in MIDI NRPN/CC/UART proves internal renderer transport | It does not; that path is protocol traffic. |
| Opcode 0x30/subtype 4 enqueues internal service N | Recovered endpoint is host-bound USB 0x82, not a proven internal queue. |
| MAIN 0x8E copier means MAIN track t = DSP row t | That proposed namespace gives `j=t+2`; use the 20-byte ordinal-preserving compact path. |
| `DE40*16` or `DE1B*16` gives a huge transfer | Linked count fields give 0x400 and 0x1B0 bytes respectively. |
| Parameter #23 / matching `+0x3E` proves selector ancestry | Offset/index coincidence is insufficient. Current actual selector source/override and generic parameter slots are separate. |
| Sound-v7 converter ancestry remains entirely unknown | The current-Kit Sound route is now concretely closed; standalone application is not. |
| Pattern-v11 row+AC is the Sound Machine byte | Concrete destination is Pattern row+2EC, not live P+A2. |
| MAIN page-accessor X remains a blocker | Later concrete caller-domain proof resolves it safely in that scope. |
| Empty RAM or appended Section 7 data is persistent executable storage | Not qualified; templates are cleared/reused and runtime/peer writes remain possible. |
| Host WAVs / modeled opcodes prove device sound and deadline | They do not. No local hardware run or whole-device Machine45 emulation exists. |

The [evidence index](EVIDENCE_INDEX.md) identifies the superseding reports and the
private historical material.

## 12. Recommended community implementation sequence

This is a proposal for maintainers to adapt, not work performed in this audit.

1. **Agree an additive identity contract.** Reserve public ID 45 separately from engine
   and descriptor IDs; pin the OS/commit. Keep the V2 artifacts frozen/private.
2. **Prove a donor-only Machine first.** Public ID 45 can initially publish selector 45
   and reuse existing family 0; stock selector 45 already maps there. A new family 12
   is **not required just to prove independent public identity**. This avoids the
   packed-map/A-table conflict for the first lifecycle experiment. It does not by
   itself solve selector refresh, transitions or persistence.
3. **Use owned MAIN modarea code for exact-45 metadata aliases and publication.**
   Preserve raw 45 in P and storage. Prefer narrow lookup-ID aliasing over replacing
   all stock tables with frozen snapshots; qualify register/CCR behavior at each hook.
4. **Close lifecycle in the existing emulator framework.** Exercise menu selection,
   enter/leave 45, all 8 tracks, ordinary knobs, held trigs, p-locks, Sound locks,
   current Kit, standalone Sound and Pattern/project save/reload through actual
   firmware serializers and consumers. A selector update alone is not success.
5. **Coordinate a shared engine registry if separate implementation slots are needed.**
   Reuse the e12 layout proof or relocate shared tables through a qualified backend;
   compose FM4 engine 4 and stock 0–11 rather than applying competing raw pointer edits.
6. **Qualify shared CPU 2 installation independently.** Reuse/review FM4's loader work,
   but establish owned executable storage, size bounds, copy-before-clear lifetime,
   entry binding and cache/ABI preservation. The current handoff does not establish
   a safe executable region.
7. **Bind the generic SDK only after that backend exists.** Initial borrowed knobs
   need no new UI system or transport. Candidate B remains an optional regression
   module, not a requested sound design or required renderer.

The genuine blockers are **full lifecycle/transition proof**, **composable versioned
registration**, and, for arbitrary new native DSP, **qualified CPU 2 installation**.
Checksum recomputation and representing 45 in a BYTE are not the outstanding problems.

## 13. Public reproduction and distribution boundary

This is a documentation/API handoff, not an installable mod or a public firmware
build recipe. Do not infer that omitted private reports are available from their
catalog entries. The original candidate cannot be independently reproduced from
this public repository alone; contributors should implement and test the described
logic in the community framework against their own legitimate stock image.

A small independent read-only tool can recheck stock 1.41 metadata without any
private candidate or proprietary bytes embedded in the script:

```sh
python3 tools/check_stock_metadata.py --main path/to/main.bin --section7 path/to/section7.bin
```

The arguments are privately extracted stock sections. The tool verifies their
hashes, reconstructs the descriptor normalizer in memory, and checks the documented
eight descriptors and stock selector-family relationship. It never writes firmware,
patches, audio or a deployable image; it does not prove the complete lifecycle.

Published independent documentation and the source-level API are under MIT; see
[LICENSE](LICENSE). This grants no rights in Elektron firmware, code, artwork,
lookup tables or trademarks. No third-party implementation is vendored.

See [publication policy](docs/PUBLICATION_POLICY.md) for exclusions and the distinction
between private evidence provenance and public reproduction. Firmware images,
patched sections, full disassembly, opcode dumps, captured firmware lookup tables,
generated native packages and private account/path information are excluded.

No GitHub issue has been submitted by this repository. V2 remains a frozen offline
research baseline. Hardware acceptance, audibility and runtime performance remain
UNTESTED/UNPROVEN. Native arbitrary-DSP installation remains BLOCKED/UNPROVEN.
