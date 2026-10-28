# Machine45 evidence index

Audit date: **2026-10-28**. Firmware: **Syntakt OS 1.41** unless explicitly stated.

**RESEARCH ONLY / DO NOT FLASH. Private source contents are not distributed.**

> This is the public export of the private audit index. A source-catalog link
> points to a filename/hash record, not a downloadable report or binary.
> Counts and preservation results describe the private audit snapshot.

## 1. How to use this index

Start with [MACHINE45_TECHNICAL_HANDOFF.md](MACHINE45_TECHNICAL_HANDOFF.md).
The [GitHub issue draft](GITHUB_ISSUE_DRAFT.md)
is a separate short communication, not a deployment instruction.

Original source paths are relative locators in a private research corpus.
Included public files have ordinary relative links; excluded sources link to
[the private-source catalog](docs/SOURCE_CATALOG.md). No original report is
represented as publicly available merely because it is cited.

Evidence levels:

- **STATIC:** Confirmed by static analysis in the cited local scope; important
  current byte/layout facts were independently rechecked in this audit.
- **HOST:** Portable reference or bounded decoded/opcode interpreter validation.
  This is not a booted device. A host result is not relabeled “Verified on hardware.”
- **EMU:** Verified in emulator only when the stated relevant firmware path actually
  ran in a named emulator. No local whole-device Machine45 run was found or performed.
- **HW:** Verified on hardware only for actual observed device execution. No local
  Machine45 hardware result exists. FM4 authors' reports are external attribution.
- **OPEN:** Hypothesis / Not yet verified, including the conditional cross-core edge.
- **HISTORICAL:** Useful provenance or superseded interpretation; not current proof
  merely because its heading says CONFIRMED or READY.

The collapsed census at the end lists **every one of the 803 existing evidence files**.
Entries outside the selected proof chains below are indexed, **not individually
re-proved**. Their original classifications are not automatically adopted.

## 2. Audit records, inventory and missing history

| Record | Scope / result |
|---|---|
| [workspace_inventory.json](docs/SOURCE_CATALOG.md#source-4c874506ec33308f) | Complete1754-file research/source/output census, sizes, SHA-256 and publication-review categories. Dependency/toolchain/cache exclusions are explicit. |
| [before.json](docs/SOURCE_CATALOG.md#source-abec3e8cfe594b4c) |1280 existing files protected before this audit's document work. |
| [audit_readonly.py](docs/SOURCE_CATALOG.md#source-a2037240c843533a) | Read-only checker. Writes only fresh JSON in its audit directory. No firmware output. |
| [audit_results_verified.json](metadata/VALIDATION_SUMMARY.json) | Current artifact hashes; in-memory re-extraction;847 MAIN changed bytes/12 allocations; map/layout; bounded decode;4096 core cases;312 helper cases;6 reference tests. |
| [audit_metadata_readonly.py](docs/SOURCE_CATALOG.md#source-b505979474dbf857) / [metadata_checks.json](metadata/VALIDATION_SUMMARY.json) | Independent reconstruction from 505 original descriptors/315 admitted records; all eight knob descriptors and exact setter/Sound byte instructions match. Runtime data lifetime is not thereby proven. |
| [public_sources.json](metadata/UPSTREAM_SOURCES.json) | Repository commit pins, source-path mapping and11 issue comments with public URLs/dates. No external writes. |
| [delivery_checks.json](docs/SOURCE_CATALOG.md#source-0d468d3e12f11add) | Final document-link, preservation and completeness checks; created after the three documents. |

`git rev-parse --show-toplevel` returned128: **not a Git repository**, including its
parents. No nested `.git` was found inside the workspace. Private research Git commit history
is **unavailable**, not reconstructed from report dates. Existing JSON manifests,
before/after ledgers, source scripts and saved logs are provenance substitutes only.

`tools/tmp/machine45_v2_branchless_candidate_repack.log` is an existing offline build
log, not a device log. `tools/binutils-build/**/config.log` describes building the
local decoder, not Machine45 execution. There is no local hardware trace/log proving
successful Machine45 installation, audible output or p-lock/Pattern restoration.

## 3. Immutable private inputs and outputs

| Local path | Role / publication |
|---|---|
| [Syntakt_OS1.41.syx](docs/SOURCE_CATALOG.md#source-9d838be68403ba59) | Proprietary stock input. **DO NOT PUBLISH.** SHA `8e2488f462c4a5656396a895f113bcd415e9900fa8709340dccf45d4cb9ed19e`. |
| [derived/manifest.json](docs/SOURCE_CATALOG.md#source-94ab0829b7f95fac) | Original eight-section offsets, modes, destinations, checksums and decoded hashes. Metadata, not authenticity proof. |
| [derived/sections/section_3_MAIN_OS.bin](docs/SOURCE_CATALOG.md#source-9f9d6b270aab7fbe) | Original MAIN;3438480 B; SHA `8cf2b4b4ea80d58953da46ca453328454fb3fca5cb5f844a2f7bad4b72241f53`. **DO NOT PUBLISH.** |
| [derived/sections/section_7_section_7.raw.bin](docs/SOURCE_CATALOG.md#source-5cb73c51cb2d6082) | Original Section7;383760 B; SHA `daf6451cf9587c0b628e901b7bb6b25f4e2633d448c534c0c181dd35ec783bc2`. **DO NOT PUBLISH.** |
| [build/Machine45_FULL_STATIC_BRIDGE_MAIN_RESEARCH_ONLY.bin](docs/SOURCE_CATALOG.md#source-3af94442c970c624) | Frozen MAIN;3438480 B; SHA `de897a43ff8499781821480c7c249394beb1792ab2652d057795087dbaa6e83d`. **DO NOT PUBLISH/OVERWRITE.** |
| [build/Section7_MACHINE45_V2_BRANCHLESS_RESEARCH_ONLY.bin](docs/SOURCE_CATALOG.md#source-8b4d6b5c6c2461a0) | Frozen Section7;383760 B; SHA `4d8bb919a2447edd67c8cd5b6b5607f1f2789dc0151169af29b959493e72f505`. **DO NOT PUBLISH/OVERWRITE.** |
| [build/Syntakt_OS1.41_Machine45_V2_BRANCHLESS_RESEARCH_ONLY_DO_NOT_FLASH.syx](docs/SOURCE_CATALOG.md#source-5ee042d4de3fb124) | Frozen combined candidate;5645856 B; SHA `94c59d048057a58ec3cb85b16ec9912e1d86cecb49d5d62f23ddc955ec121d6c`. **DO NOT PUBLISH/OVERWRITE.** |
| [MACHINE45_V2_BRANCHLESS_RELEASE_STATE.md](docs/FROZEN_BASELINE.md) | Frozen milestone, source inventory, archived validation scopes and never-overwrite list. |
| [build/MACHINE45_V2_BRANCHLESS_CANONICAL_HASHES.txt](docs/SOURCE_CATALOG.md#source-9030f3735a9acb62) | Canonical artifact names, sizes and hashes. Hashes can be shared; binaries cannot. |

Chronological project records, audited but unchanged:
[REVERSING_STATE.md](docs/SOURCE_CATALOG.md#source-ce61b025bb82195c),
[MACHINE45_MVP_PLAN.md](docs/SOURCE_CATALOG.md#source-15bff2337cab6bcd),
[MACHINE45_MAIN_PATCH_PLAN.md](docs/SOURCE_CATALOG.md#source-53d64b8d301c70e7),
[SECTION7_MACHINE45_POC_DESIGN.md](docs/SOURCE_CATALOG.md#source-d2acf04edab0657f).
Read their later closures, not only the initial plan.

## 4. Selected local proof chains

### 4.1 Public registration, identity and metadata

| Evidence | Key point / level |
|---|---|
| [machine45_explicit_bridge_hook.txt](docs/SOURCE_CATALOG.md#source-5901bcebce88e14f) | STATIC: store `0x40025620`, changed-only boundary `0x40025628`, D2 raw ID/D4 track/R/P/stack/CCR. |
| [machine45_three_aliases_exact.txt](docs/SOURCE_CATALOG.md#source-2d40e31af8757a6b) | STATIC local lookup identities; not a complete lifecycle proof. |
| [machine45_data_alias_options.txt](docs/SOURCE_CATALOG.md#source-672241b3e9cd2f2c) | STATIC table extents/adjacency, descriptor matrix construction; relocation lifetime remains separately qualified. |
| [machine45_research_candidate_diff.txt](docs/SOURCE_CATALOG.md#source-df754e105bce6cae) | Initial11 write allocations and686 actual changed positions. Contains byte arrays: review/redact before sharing. |
| [machine45_research_candidate_data_layout.txt](docs/SOURCE_CATALOG.md#source-2de8b98f2a3d215e) | STATIC mask/matrix/display reconstruction; runtime mapping/lifetime OPEN. |
| [machine45_full_main_binary_diff.txt](docs/SOURCE_CATALOG.md#source-b908db4076cd57fb) | Applied serializer plus retained edits; final MAIN847 changed positions rechecked. Private original/new byte dumps. |
| [machine45_serializer_local_placement.txt](docs/SOURCE_CATALOG.md#source-7db526998bf24c82) | STATIC186-byte local design /166-byte applied rewrite, live same-track context. Historical UNAPPLIED notes superseded by applied candidate. |
| [machine45_full_patched_static_chain.txt](docs/SOURCE_CATALOG.md#source-1922296192440afd) | Applied local MAIN→compact bridge; peer edge strongly supported. Earlier audio/parameter qualifications are historical. |
| [page_accessor_x_observable_effect.txt](docs/SOURCE_CATALOG.md#source-179a3cba053fce99) | STATIC current recovered caller set: CCR.X RESOLVED_SAFE. |

### 4.2 Transport, exact selector field and rejected natural bridge

| Evidence | Key point / level |
|---|---|
| [main_compact_prefix_layout.txt](docs/SOURCE_CATALOG.md#source-b449039aee2bdf58) | STATIC compact20-byte records and track namespace. |
| [main_compact_prefix_to_section7_low_transfer.txt](docs/SOURCE_CATALOG.md#source-0b0339ab0d439ae7) | Corrected0x1B0 descriptor, paired handshake, all 8 ordinals; peer/coherency OPEN/strongly supported. |
| [section7_low_prefix_to_T_map.txt](docs/SOURCE_CATALOG.md#source-8b4ed677309b774d) | STATIC low record byte0 → same-slot T+3E, callback00934/eight-copy loop00978. |
| [machine45_dma47_exact_transfer_geometry.txt](docs/SOURCE_CATALOG.md#source-2c78089c07120384) | STATIC under matched eDMA map: TCD47, DE40 count 64,1024-byte reverse payload; authoritative over old huge counts. |
| [section7_audio_block_size.txt](docs/SOURCE_CATALOG.md#source-7f85bd7aa45827a8) | Corrected32-LONG per-slot B row and eight-row arena. |
| [machine30_subtype4_receiver.txt](docs/SOURCE_CATALOG.md#source-618aca520a0685e2) | STATIC host-bound USB path; not an internal service-N enqueue edge. |
| [machine_setter_to_K_exact_chain.txt](docs/SOURCE_CATALOG.md#source-2b155d847feed93a) | Conditional source/cache identity only; changed-setter→accepted row is not automatically closed. |
| [main_track_to_coldfire_voice_map.txt](docs/SOURCE_CATALOG.md#source-e4ed2a8634e69ba8) | HISTORICAL0x8E-row candidate; later t+2 correction prevents using it as the compact ordinal proof. |
| [fc045_register_abi_final.txt](docs/SOURCE_CATALOG.md#source-b5f82bd81e71239b) | HISTORICAL MMIO widths/ordering; old transfer-length conclusions superseded. |
| [fc045_selector_transfer_extent.txt](docs/SOURCE_CATALOG.md#source-653457e243c848af) | HISTORICAL oversized0xDE400/0xDE1B0 extents: do not reuse. |

### 4.3 Mapping, independent family 12 and refresh

| Evidence | Key point / level |
|---|---|
| [section7_selector_map_reader_inventory.txt](docs/SOURCE_CATALOG.md#source-d801975501204ee1) | Recovered actual map readers, not cardinality-based guessing. |
| [section7_selector_map_exact_values.txt](docs/SOURCE_CATALOG.md#source-1709f07db6fef53c) |46 exact logical values; raw 45's stock family 0 fallback. |
| [section7_family12_compacted_local_layout.txt](docs/SOURCE_CATALOG.md#source-558170dc333683f4) | STATIC B13/A13/23-byte packed map; following128×4 table unmoved. |
| [section7_packed_map_domain_equivalence.txt](docs/SOURCE_CATALOG.md#source-192057c476ebb703) | Signed256-byte family outcome model and nibble bounds. |
| [section7_familychange_complete_boundary_qualification.txt](docs/SOURCE_CATALOG.md#source-18872fbc93e28209) | STATIC JSR4432→3EE0: differing registers dead/equivalent/intentional; D6 remains live-equivalent. |
| [section7_selector45_gate_bypass_design.txt](docs/SOURCE_CATALOG.md#source-9be8721a7da61c4d) | Exact45 observation despite old closed gate; historical design bytes, applied later. |
| [section7_selector45_gate_bypass_domain_safety.txt](docs/SOURCE_CATALOG.md#source-951f30f7cec5647d) | STATIC bounded gate/cache/CCR projections;532480 model cases, not device/emulator timing. |
| [section7_address_normalization.txt](docs/SOURCE_CATALOG.md#source-a1ba1287be3d2fdc) | Correct VA basis and rejected0x400144F0 table hypothesis. |

### 4.4 Eight controls and concrete consumers

| Evidence | Key point / level |
|---|---|
| [machine45_eight_knob_descriptor_map.txt](docs/SOURCE_CATALOG.md#source-cf0d151200b728bc) | STATIC native knob order, descriptors, slots, names/defaults/ranges. |
| [machine45_eight_knob_main_fields.txt](docs/SOURCE_CATALOG.md#source-dbe61f775d248162) | STATIC descriptor+4 → WORD(P+14+2s), actual UI store and notification. |
| [machine45_eight_knob_compact_map.txt](docs/SOURCE_CATALOG.md#source-efeebcf15ccc4ec9) | STATIC scalar mirror/smoothing/modulation/packing; MENV inversion and K exceptions. |
| [machine45_eight_knob_section7_fields.txt](docs/SOURCE_CATALOG.md#source-e4980287f6dda59d) | STATIC T-field mapping, read widths, all 8 slots; no inferred adjacency. |
| [machine45_eight_knob_consumers.txt](docs/SOURCE_CATALOG.md#source-e168d79dfee3a6d8) | STATIC one nearest donor consumer each; PNCH reset-time limitation. |
| [machine45_eight_knob_e12_inheritance.txt](docs/SOURCE_CATALOG.md#source-1bd72c78d9ced741) | Local e12 inheritance; full transport strongly supported, not native gesture/p-lock validation. |
| [machine45_eight_knob_control_candidates.txt](docs/SOURCE_CATALOG.md#source-a7b5d312939bccb6) | HISTORICAL future control ideas; not the desired community algorithm or proof of UI lifecycle. |

### 4.5 Persistence and source-identity corrections

| Evidence | Key point / level |
|---|---|
| [machine45_sound_v7_machine_byte_source.txt](docs/SOURCE_CATALOG.md#source-423aa4fff8ae4525) | STATIC concrete Sound callback → save converter; storage+AC; MVZ mnemonic correction. |
| [machine45_sound_v7_to_runtime_machine.txt](docs/SOURCE_CATALOG.md#source-fa5b68500f57cbbd) | STATIC accepted current-Kit row→live P; standalone import destination is pool only. |
| [machine45_sound_v7_raw45_behavior.txt](docs/SOURCE_CATALOG.md#source-e9e73a57d0addb98) | STATIC raw-byte sanitizer0..45/46..254/255 behavior. |
| [machine45_persistence_save_symmetry.txt](docs/SOURCE_CATALOG.md#source-f4b01430c5087c91) | STATIC save/load byte symmetry in the accepted current-Kit route. |
| [machine45_persistence_converter_crosswalk.txt](docs/SOURCE_CATALOG.md#source-343520aa95582e56) | Concrete converter identities; avoids relying on old Track-only labels. |
| [machine45_pattern_v11_machine_byte_source.txt](docs/SOURCE_CATALOG.md#source-aa3c8a4f3345b0f7) | OPEN actual persisted Machine source; disproves the guessed row+AC interpretation. |
| [machine45_pattern_v11_to_runtime_machine.txt](docs/SOURCE_CATALOG.md#source-71614060e635278a) | OPEN Pattern→live P Machine write; exact retained notification boundary. |
| [pattern_v11_to_runtime_machine_writer_reachability.txt](docs/SOURCE_CATALOG.md#source-b0cdca802a2c36f2) | Seven live writer sites; no continuous qualified Pattern edge recovered. |
| [pattern_v11_N28_selector_vs_runtime_apply.txt](docs/SOURCE_CATALOG.md#source-1d3c8285ff4c76e2) | N+28 can feed K/configuration without proving a live Machine-BYTE assignment. |

### 4.6 Frozen V2, validation, integrity and performance

| Evidence / saved result | Scope |
|---|---|
| [machine45_v2_branchless_composition.txt](docs/SOURCE_CATALOG.md#source-e5fd0f09642ba705) | STATIC range hashes and inherited components; current waveform is a fixture only. |
| [machine45_v2_branchless_binary_diff.txt](docs/SOURCE_CATALOG.md#source-3ac7e091d00ed145) |30-byte parent delta,23 changed positions; not a distributable full binary diff. |
| [machine45_v2_branchless_candidate_disassembly.txt](docs/SOURCE_CATALOG.md#source-504649ecfff57cf0) | STATIC340-byte helper / boundaries. Contains original-code context: private/review before sharing. |
| [machine45_v2_branchless_candidate_equivalence.txt](docs/SOURCE_CATALOG.md#source-adcc7d51b963ef87) | HOST/algebraic results; no whole-device emulator. |
| [machine45_v2_branchless_candidate_equivalence.json](docs/SOURCE_CATALOG.md#source-b8395f837c3722ae) | Archived100663296 phase comparisons,1000000 randomized states, full helper and PCM regressions. Located/inspected, not all rerun. |
| [machine45_v2_branchless_candidate_roundtrip.txt](docs/SOURCE_CATALOG.md#source-57dfc3cf9696493b) | Existing offline repack/re-extraction results; freshly rechecked in memory during audit. |
| [machine45_v2_static_performance_closure.txt](docs/SOURCE_CATALOG.md#source-4285232af0501373) | STATIC analysis exhausted; absolute deadline blocked; relative cost comparable but unproven. |
| [firmware_integrity_audit.txt](docs/SOURCE_CATALOG.md#source-ec8165c0a6045967) | Packet sum, ELE3 weighted sum, aPLib sum; no proven device authentication/rollback conclusion. |
| [machine45_full_candidate_roundtrip.txt](docs/SOURCE_CATALOG.md#source-f2f335f9165a9eaf) | Earlier full-static composition history, not current final V2 hash authority. |

### 4.7 SDK, installation backend and physical-access boundary

| Evidence / source | Scope |
|---|---|
| [MACHINE45_DSP_SDK_ARCHITECTURE.md](docs/DSP_ABI.md) | Public source ABI versus host adapter versus unavailable installer. |
| [tools/machine45_dsp_api.h](include/machine45_dsp_api.h#L19) | Eight uint16 parameters,72-byte limit, signed local output; no firmware addresses. |
| [MACHINE45_GENERIC_DSP_HOST_ABI.md](docs/DSP_ABI.md) | STATIC conditional `[Dslot+6B0,+6F8)` ownership loan while actual family 12 selected. Not executable storage or saved Sound state. |
| [MACHINE45_DSP_MODULE_AUTHOR_GUIDE.md](docs/DSP_ABI.md) | Offline module workflow; not a firmware deployment guide. |
| [MACHINE45_DSP_UI_PACKAGE_FORMAT.md](docs/DSP_ABI.md) | DSP/UI package format, symbolic binding and native-installation limitations. |
| [SDK_RELEASE_STATE.json](docs/SOURCE_CATALOG.md#source-652eca852397afa9) | HOST17 DSP tests and40 UI/package extension tests retained; no native object qualified. |
| [native_backend_contract.json](docs/SOURCE_CATALOG.md#source-6d4262dbb0735269) | Executable/code/process/init/relocation/cache/lifetime fields symbolic; device_runnable=false. |
| [machine45_native_backend_static_exhaustion.txt](docs/SOURCE_CATALOG.md#source-db818f6876572af3) | Existing boot execution evidence does not establish a persistent generic runtime installer. |
| [machine45_observer_transport_exhaustion.txt](docs/SOURCE_CATALOG.md#source-0ba305dc39c029f9) | Local observer transport not recovered; no device observation performed. |
| [syntakt_section7_physical_assignment.txt](docs/SOURCE_CATALOG.md#source-2d809176ecbca4c3) | Physical U14/U1 identities; Section7 package/BDM ownership unresolved. Not a blocker requiring community users to probe hardware. |

## 5. Important address cross-reference

| Space / 1.41 address | Meaning | Current confidence |
|---|---|---|
| MAIN `0x40025594` / `0x40025620` / `0x40025628` | Setter entry / Machine BYTE write / changed-only hook | STATIC. |
| MAIN `P+0xA2`, `LONG(R+0x10)` | Runtime raw Machine identity / payload pointer | STATIC. |
| MAIN `0x444E13F4`, `G+0x1AC+0x3C0*t` | Root slot / current payload-pointer field | STATIC on recovered bound root. |
| MAIN `0x4007B9EA`, `0x41B9EC0C`, stride `0x2C` | Page accessor / runtime page table | STATIC recovered caller domain. |
| MAIN `0x4022D59C`, stride `0x34`, count 505 | Descriptor table | STATIC; must be re-derived for another OS. |
| MAIN `0x40013378` | Accepted parameter WORD store `P+0x14+2*slot` | STATIC. |
| MAIN `0x400A3052` | Scalar parameter update into same-track mirror | STATIC parameter route, not natural Machine→K closure. |
| MAIN `0x80002F50+t` / `0x800030C0+4*t` | K selector cache / Q row-pointer cache | Source/cache identities STATIC; changed-Machine admission OPEN. |
| MAIN `0x400A4C7A..0x400A4D20` | Applied compact serializer rewrite | STATIC;847 total MAIN changed positions elsewhere included. |
| MAIN `0x80002000+0x14*t`, block size `0x1B0` | Compact build record / submission extent | STATIC. |
| MAIN `0x10000000+d` ↔ Section7 low `d` | Peer exchange views | STRONGLY SUPPORTED, not observed coherency. |
| Each core `0xFC0455E0` | eDMA TCD47 | STATIC under retained MCF5441x map. |
| Section7 `0x40000934`, `0x40000978` | Input callback / eight compact-record copy loop | STATIC. |
| Section7 `0x80003C40+0x8E*t`, `+0x3E` | T row / raw selector BYTE | STATIC. |
| Section7 `0x80000000+0x708*t`, `+0x38` | Voice state / previous refresh gate | STATIC semantics; device activation untested. |
| Section7 `0x40004324`, `0x40004432→0x40003EE0` | Family dispatcher / changed-family call | STATIC recovered path. |
| Section7 stock `0x400148F0/0x40014920/0x40014950` | B / A / raw map | STATIC stock addresses. |
| Section7 candidate `0x400148F0/0x40014924/0x40014958` | B13 / A13 / packed map | STATIC candidate layout; coordinate other engine mods. |
| Section7 `0x40006968/0x40006C9E` | Donor0 prep/render, duplicated by e12 entries | STATIC function/ABI relationship. |
| Section7 `0x4000290E`, e12 `0x4000297C..0x400029D8` | Retained helper / V2 fixture core | STATIC + bounded HOST execution. |
| Section7 `0x80003840..0x80003C40` | Eight32-LONG B output rows | STATIC, not a physical DAC address. |
| Section7 slot `0x4004F6E0`; value S | Global pointer slot, not the pointer value itself | Runtime S / destination ownership OPEN. |
| MAIN `0x400A7366/0x400A73FC` | Sound-v7 save / Machine BYTE copy | STATIC current-Kit source identity. |
| MAIN `0x400A6F7E/0x400A7018/0x400A7046` | Sound-v7 load / changed bound / Machine BYTE destination | STATIC accepted row. |
| MAIN `0x400A7630` | Accepted current-Kit-v11 child converter | STATIC; not Pattern-v11. |
| MAIN `0x400A8048/0x400A7B9E/0x400A7F0C` | Pattern-v11 load / rows / locks | STATIC local structures; live Machine restoration OPEN. |

Do not transfer these addresses to1.40A/1.42 using one global delta. The source
crosswalk in the handoff compares selected independently identified functions only.

## 6. Existing scripts, tests and disassemblies

These files are **inputs to review**, not commands to run blindly over the frozen
baseline. Several builders intentionally refuse to overwrite existing outputs.
No builder/repacker was run during this audit.

| Tool / saved listing | Use / caution |
|---|---|
| [scripts/extract_elektron_fw.py](docs/SOURCE_CATALOG.md#source-824c42a3a075d2fc) | Read-only pure transport/depack functions reused in memory. CLI creates private extracted files; do not publish those outputs. |
| [scripts/repack_elektron_fw_literal.py](docs/SOURCE_CATALOG.md#source-675b3c80958bc860) | Historical literal repacker; **not run**. Format validity ≠ authentication. |
| [scripts/build_machine45_research_candidate.py](docs/SOURCE_CATALOG.md#source-3d62aac1957fe341) | Initial MAIN construction logic. Original-byte constants/assets need publication review. |
| [scripts/build_machine45_full_static_candidate.py](docs/SOURCE_CATALOG.md#source-db105d79190ef1af) | Approved MAIN serializer/gate composition and old manifest checks. **Generates firmware: not an audit command.** |
| [scripts/build_section7_packed_family12_research.py](docs/SOURCE_CATALOG.md#source-882ac8b562c2b0c3) | Original packed-map/table generator and signed-domain model. Do not rebuild frozen output. |
| [tools/build_machine45_v2_branchless_candidate.py](docs/SOURCE_CATALOG.md#source-d72c8562992e474d) | Canonical branchless construction/static/repack stages. **Not run.** |
| [tools/validate_machine45_v2_branchless_candidate.py](docs/SOURCE_CATALOG.md#source-883c73137af3dd00) | Saved extensive host validation; main entry compiles/writes reports, so this audit reused only inspected pure interfaces. |
| [tools/machine45_v2_encoded_cpu.py](docs/SOURCE_CATALOG.md#source-4f108329647d0f74) | Bounded ColdFire/CCR/EMAC host interpreter, explicit instruction coverage; no peripheral model. |
| [tools/tests/test_machine45_v2_reference.py](docs/SOURCE_CATALOG.md#source-8a8aa956baf3d1ac) | Six portable arithmetic/reference tests rerun successfully; no WAV generation. |
| [scripts/analyze_page_accessor_x_local.py](docs/SOURCE_CATALOG.md#source-684426534d66d2f4) | Concrete caller/X closure and saved256-byte-domain results; not a new patch. |
| [tools/tmp/main_os_loadbase_40000400.disasm](docs/SOURCE_CATALOG.md#source-02eb786aa3f0eb2a) | Normalized MAIN full listing. Proprietary full disassembly: **DO NOT PUBLISH**. |
| [tools/tmp/main_os_full.disasm](docs/SOURCE_CATALOG.md#source-27b087f62f8d1413) | Legacy MAIN VMA40000000 listing: add400 to labels. **DO NOT PUBLISH**. |
| [derived/section7_full_disassembly.asm](docs/SOURCE_CATALOG.md#source-31f9d0d330eee91d) | Existing full Section7 listing; check decoder/address qualification before relying on old mnemonics. **DO NOT PUBLISH**. |
| [tools/tmp/machine45_serializer_local_bounded.disasm](docs/SOURCE_CATALOG.md#source-a12a0bd8b325d03d) | Private bounded serializer source context. |
| [tools/binutils-prefix/bin/m68k-elf-objdump](docs/SOURCE_CATALOG.md#source-d56ff65742388a5f) | Existing project-local validated decoder; no Capstone/global tool installed. |

The full inventory indexes the other bounded listings, historical scripts, saved
proof JSONs and logs. Their existence is verified; an arbitrary legacy listing
does not override the byte checks or later corrected source identity.

## 7. Public community source snapshots

The private audit cache contains29 public text/JSON source snapshots with their
licenses. JSON responses were pretty-printed; cite the repository commit for the
authoritative original formatting. No external project was built or executed.

| Source | Exact snapshot / useful files | Status |
|---|---|---|
| [SyntHack main](https://github.com/Angelo-politek/Synthack-OS/tree/c12cf23ad88e68d3f85422a7d09c2a911659997f) | `c12cf23ad88e68d3f85422a7d09c2a911659997f`; LICENSE,LEGAL,modarea,audio-path | Published released source inspected. |
| [SyntHack dev](https://github.com/Angelo-politek/Synthack-OS/tree/76dfe08ba1b2d964495657f4fda775b328342d70) | `76dfe08ba1b2d964495657f4fda775b328342d70`; registry,builder,bootcheck,ID audit,CPU budget,UI docs | Current contribution snapshot inspected. No upstream modarea7/sy-fm4 directory. |
| [SY FM4](https://github.com/Rxuting/sy-fm4/tree/a596b6393fc43582fd3ae0234ac04e198b779edb) | `a596b6393fc43582fd3ae0234ac04e198b779edb`; README,DESIGN,main_fm4.c,fm4_syn.c,s7patch.py,s3patch.py,stub/linker | Published1.40A ID 4 extension, not additive ID 45. |
| [Issue1](https://github.com/Angelo-politek/Synthack-OS/issues/1) | Body plus11 comments; exact public comment URLs/dates cached | Distinguish older reports from latest maintainer policy. |
| [1.41 FM4 hardware report](https://github.com/Angelo-politek/Synthack-OS/issues/1#issuecomment-6245154375) | karigardarsson's report of sound/edit/p-lock/save/reload initial tests | **External author-reported HW**, not independently reproduced here. |
| [Current loader/registry policy](https://github.com/Angelo-politek/Synthack-OS/issues/1#issuecomment-6453153344) | dev PRs,resource registry,modarea7 ownership/limit,1.42 direction | Current discussion; APPENDABLE={3} also checked in source. |

Particular comparison sources:
[registry](https://github.com/Angelo-politek/Synthack-OS/blob/76dfe08ba1b2d964495657f4fda775b328342d70/tools/build/registry.py),
[native edit discussion](https://github.com/Angelo-politek/Synthack-OS/issues/1#issuecomment-6225930131),
[modarea reservation](https://github.com/Angelo-politek/Synthack-OS/blob/c12cf23ad88e68d3f85422a7d09c2a911659997f/mods/modarea/README.md),
[1.40A FM4 patcher](https://github.com/Rxuting/sy-fm4/blob/a596b6393fc43582fd3ae0234ac04e198b779edb/patch/s7patch.py).
No claim that the inspected1.40A patcher is already a qualified1.41 installer.

## 8. Reproduction, publication and remaining questions

### Read-only public recheck

```sh
python3 tools/check_stock_metadata.py --main /private/main.bin --section7 /private/section7.bin
```

Use your own extracted stock 1.41 sections; none are supplied. This checks selected
stock metadata only, not a complete Machine45 candidate, firmware boot, audio,
Pattern restoration, or hardware. Private audit tools and host libraries mentioned
above are not included and should not be assumed runnable from this export.

### Publication classes

| Material | Treatment |
|---|---|
| These three new Markdown documents | Published sanitized export. Addresses and hashes are analytical metadata, not firmware images. |
| Independently authored patch logic/API/tests | Review authorship/license and remove copied firmware bytes/assets before sharing. The original private corpus had no project-wide license; included public materials are covered by the repository LICENSE. |
| FM4/SyntHack source reused | MIT text inspected; retain notices. Their licenses do not grant Elektron firmware rights. |
| `candidate_b/assets.h`, cached coefficient tables, font metrics and generated module packages | Firmware-derived/test assets: **not pre-cleared for publication**. Prefer extraction from the recipient's own stock image or omit. |
| `.syx`, extracted/patched sections, full disassembly, instruction hex blobs | **Do not publish or attach.** |
| Complete `evidence/` directory | Do not upload wholesale: some reports embed original bytes and tables. Share curated/redacted analysis only. |

### Open issues to hand to the community

1. End-to-end independent-ID lifecycle in a real emulator: enter/leave45, all tracks,
   held-trig edits, native p-locks, Sound-lock source precedence and stale K/gates.
2. Actual Pattern Machine-BYTE restoration; standalone Sound-pool application.
3. Versioned, composable metadata/engine registration alongside FM4/FX3 and shared
   SourcePageView hooks. Frozen stock normalizer copies are not general mod registries.
4. CPU 2 executable ownership/installation and module-entry lowering for arbitrary DSP.
5. Hardware acceptance/audibility/performance; host instruction counts are not deadlines.

No new Pattern/backend/static timing search is requested. Initial donor-only
registration can be attempted independently of arbitrary native DSP installation.

## 9. Complete local evidence-file census

The following location census is generated from the checked803-file inventory.
It includes old disproven and superseded reports. **Only the selected source chains
above carry the qualified current interpretation.** No listed file is automatically
approved for public attachment, and no census entry is new emulator/hardware proof.

<!-- COMPLETE_EVIDENCE_CENSUS_20261028 -->

<details>
<summary>Generic host, executable installation and memory ownership — 83 files</summary>

- [machine45_dma47_S_backing_reconciliation.txt](docs/SOURCE_CATALOG.md#source-7d3c608937f82e11)
- [machine45_dma47_S_callback_provenance.txt](docs/SOURCE_CATALOG.md#source-ae6416cfa79b0211)
- [machine45_dma47_S_identity.txt](docs/SOURCE_CATALOG.md#source-bf8109d9d637bc33)
- [machine45_dma47_S_immediate_reaching_defs.txt](docs/SOURCE_CATALOG.md#source-15e23404b2764a5b)
- [machine45_dma47_S_numeric_domain_v2.txt](docs/SOURCE_CATALOG.md#source-f585fa8154f96d7f)
- [machine45_dma47_S_object_extent.txt](docs/SOURCE_CATALOG.md#source-52a758f41b9c0eb0)
- [machine45_dma47_S_pointer_chain.txt](docs/SOURCE_CATALOG.md#source-805517e608b15735)
- [machine45_dma47_S_semantic_owner.txt](docs/SOURCE_CATALOG.md#source-e63fce3155690552)
- [machine45_dma47_S_static_exhaustion.txt](docs/SOURCE_CATALOG.md#source-38b0a3a7751e804f)
- [machine45_dma47_S_value_domain.txt](docs/SOURCE_CATALOG.md#source-8033b00a06190ff4)
- [machine45_dma47_S_writer_provenance.txt](docs/SOURCE_CATALOG.md#source-ee3128d433be668f)
- [machine45_dma47_destination_from_reaching_def.txt](docs/SOURCE_CATALOG.md#source-8c41ceac73404645)
- [machine45_dma47_exact_transfer_geometry.txt](docs/SOURCE_CATALOG.md#source-2c78089c07120384)
- [machine45_dma47_lifetime.txt](docs/SOURCE_CATALOG.md#source-a4d8117718daa261)
- [machine45_dma47_physical_overlap.txt](docs/SOURCE_CATALOG.md#source-d867594246b53456)
- [machine45_dma47_runtime_S_definition_site.txt](docs/SOURCE_CATALOG.md#source-a41fce7f983cbf43)
- [machine45_dma47_tail_overlap.txt](docs/SOURCE_CATALOG.md#source-a6068679c8d7433c)
- [machine45_generic_dsp_audio_output_abi.txt](docs/SOURCE_CATALOG.md#source-e22c5d320ea392b0)
- [machine45_generic_dsp_execution_abi.txt](docs/SOURCE_CATALOG.md#source-e28056a233cd28e2)
- [machine45_generic_dsp_init_binding.txt](docs/SOURCE_CATALOG.md#source-c8691b751fd0eb88)
- [machine45_generic_dsp_lifecycle.txt](docs/SOURCE_CATALOG.md#source-83f26e7abb57a4a0)
- [machine45_generic_dsp_lifecycle_state_machine.txt](docs/SOURCE_CATALOG.md#source-833cbbde2670e722)
- [machine45_generic_dsp_limits.txt](docs/SOURCE_CATALOG.md#source-31772e3429a0ee7d)
- [machine45_generic_dsp_module_boundary.txt](docs/SOURCE_CATALOG.md#source-a24e0f0004db1f5a)
- [machine45_generic_dsp_native_calling_convention.txt](docs/SOURCE_CATALOG.md#source-d67b58a174d1a2e4)
- [machine45_generic_dsp_param_abi.txt](docs/SOURCE_CATALOG.md#source-f8e9c36b4ca2977f)
- [machine45_generic_dsp_param_adapter.txt](docs/SOURCE_CATALOG.md#source-27253a3d86ef17c0)
- [machine45_generic_dsp_process_granularity.txt](docs/SOURCE_CATALOG.md#source-730ab1af89fe386d)
- [machine45_generic_dsp_replaceable_region.txt](docs/SOURCE_CATALOG.md#source-f23eca55bdf72333)
- [machine45_generic_dsp_reset_binding.txt](docs/SOURCE_CATALOG.md#source-af701dd9f7536f5e)
- [machine45_generic_dsp_state_abi.txt](docs/SOURCE_CATALOG.md#source-d479387464122323)
- [machine45_generic_dsp_test_module_b.txt](docs/SOURCE_CATALOG.md#source-619a4ae795eeddae)
- [machine45_generic_native_param_adapter.txt](docs/SOURCE_CATALOG.md#source-88588a38105f6190)
- [machine45_generic_native_pointer_binding.txt](docs/SOURCE_CATALOG.md#source-9629d72a8b30ea8f)
- [machine45_generic_native_process_entry.txt](docs/SOURCE_CATALOG.md#source-2d89f2d54615b5c2)
- [machine45_generic_native_state_pointer.txt](docs/SOURCE_CATALOG.md#source-65abf90982be48ca)
- [machine45_native_backend_candidate_ranking.txt](docs/SOURCE_CATALOG.md#source-621b34885ac303b6)
- [machine45_native_backend_crosscore_loader_capability.txt](docs/SOURCE_CATALOG.md#source-330091f167de625b)
- [machine45_native_backend_decompressor_exec_paths.txt](docs/SOURCE_CATALOG.md#source-85040601f81211ea)
- [machine45_native_backend_executable_write_census.txt](docs/SOURCE_CATALOG.md#source-7d63ff15364f2e05)
- [machine45_native_backend_existing_mechanism_compatibility.txt](docs/SOURCE_CATALOG.md#source-f4bda74a8397ac13)
- [machine45_native_backend_function_rebinding.txt](docs/SOURCE_CATALOG.md#source-ea0e451744ebcc9e)
- [machine45_native_backend_icache_primitives.txt](docs/SOURCE_CATALOG.md#source-e028d07eb657424c)
- [machine45_native_backend_indirect_exec_targets.txt](docs/SOURCE_CATALOG.md#source-fb3abaf8c448a610)
- [machine45_native_backend_overlay_lifecycle.txt](docs/SOURCE_CATALOG.md#source-682c5ff9fc7bce75)
- [machine45_native_backend_overlay_metadata.txt](docs/SOURCE_CATALOG.md#source-dca684f6d35a9298)
- [machine45_native_backend_ram_exec_evidence.txt](docs/SOURCE_CATALOG.md#source-c6515c191103c1f0)
- [machine45_native_backend_service_commands.txt](docs/SOURCE_CATALOG.md#source-5df2051232932011)
- [machine45_native_backend_static_exhaustion.txt](docs/SOURCE_CATALOG.md#source-db818f6876572af3)
- [machine45_ram_capacity_after_dma47.txt](docs/SOURCE_CATALOG.md#source-7cb46258debee9a3)
- [machine45_ram_module_address_stability.txt](docs/SOURCE_CATALOG.md#source-df24e74c9644abf2)
- [machine45_ram_module_call_transfer.txt](docs/SOURCE_CATALOG.md#source-bca364ae4538f7e4)
- [machine45_ram_module_capacity.txt](docs/SOURCE_CATALOG.md#source-43987bad20fc5f2b)
- [machine45_ram_module_certified_budget.txt](docs/SOURCE_CATALOG.md#source-2d6fc4dbc07f0123)
- [machine45_ram_module_copy_extension_design.txt](docs/SOURCE_CATALOG.md#source-507835421f6348e2)
- [machine45_ram_module_execution_permission.txt](docs/SOURCE_CATALOG.md#source-a3266245c866b8ea)
- [machine45_ram_module_existing_copy_extent.txt](docs/SOURCE_CATALOG.md#source-a8620339f04e2ef0)
- [machine45_ram_module_icache_coherency.txt](docs/SOURCE_CATALOG.md#source-0720be470ce49464)
- [machine45_ram_module_init_ordering.txt](docs/SOURCE_CATALOG.md#source-831730ffd08cb695)
- [machine45_ram_module_installation_contract.txt](docs/SOURCE_CATALOG.md#source-5e40718cfa0173ce)
- [machine45_ram_module_loader_dependency.txt](docs/SOURCE_CATALOG.md#source-93f554bd979a5371)
- [machine45_ram_module_ownership_certificate.txt](docs/SOURCE_CATALOG.md#source-76c3045abb4bd93c)
- [machine45_ram_module_physical_region.txt](docs/SOURCE_CATALOG.md#source-619a8559e7a79b8c)
- [machine45_ram_module_runtime_ram_occupancy.txt](docs/SOURCE_CATALOG.md#source-6b3fa481cd630c9c)
- [machine45_ram_module_template_source_lifetime.txt](docs/SOURCE_CATALOG.md#source-42d3f5388e8c2c3e)
- [machine45_ram_ownership_after_dma47.txt](docs/SOURCE_CATALOG.md#source-3a4db6d712fa3a40)
- [machine45_ram_tail_alias_ownership.txt](docs/SOURCE_CATALOG.md#source-e841c7963eb7e0f1)
- [machine45_ram_tail_allocator_overlap.txt](docs/SOURCE_CATALOG.md#source-75c85e96270cbf7f)
- [machine45_ram_tail_candidate_intervals.txt](docs/SOURCE_CATALOG.md#source-503c36d110a61c99)
- [machine45_ram_tail_capacity_certificate.txt](docs/SOURCE_CATALOG.md#source-625b6d9d608328d4)
- [machine45_ram_tail_computed_address_ranges.txt](docs/SOURCE_CATALOG.md#source-ae238a42ad972b8e)
- [machine45_ram_tail_direct_reference_census.txt](docs/SOURCE_CATALOG.md#source-7d97df3f99f144e9)
- [machine45_ram_tail_dma_overlap.txt](docs/SOURCE_CATALOG.md#source-8b2719739a102658)
- [machine45_ram_tail_object_extent.txt](docs/SOURCE_CATALOG.md#source-a76ab878ae8f865c)
- [machine45_ram_tail_post_dma_candidates.txt](docs/SOURCE_CATALOG.md#source-b1ffebd5c7f86bce)
- [machine45_ram_tail_reader_census.txt](docs/SOURCE_CATALOG.md#source-bd2d8060090cb2d8)
- [machine45_ram_tail_stack_overlap.txt](docs/SOURCE_CATALOG.md#source-dcdc7d863394871e)
- [machine45_ram_tail_startup_lifetime.txt](docs/SOURCE_CATALOG.md#source-594b959e0e6713bc)
- [machine45_ram_tail_writer_census.txt](docs/SOURCE_CATALOG.md#source-b1f6dcd34ea5a430)
- [page45_inplace_append_plan.txt](docs/SOURCE_CATALOG.md#source-7493cb4c7e025e9a)
- [section7_append_address_stability.txt](docs/SOURCE_CATALOG.md#source-78d80002f8d39a30)
- [section7_append_extension_architecture.txt](docs/SOURCE_CATALOG.md#source-055c21f351807317)
- [section7_append_lifetime_reassessment.txt](docs/SOURCE_CATALOG.md#source-d0c87c127ddb3b5b)

</details>

<details>
<summary>Historical FC045 hypotheses and corrections — 18 files</summary>

- [B_fc045_destination_slice.txt](docs/SOURCE_CATALOG.md#source-801fe8bf73ccbbe8)
- [fc045_0x10000000_alias_layout.txt](docs/SOURCE_CATALOG.md#source-ed4fa88809cfe11c)
- [fc045_address_domain_correspondences.txt](docs/SOURCE_CATALOG.md#source-6b25189f321dd785)
- [fc045_address_space_semantics.txt](docs/SOURCE_CATALOG.md#source-c76d94cd6bd662e0)
- [fc045_callsites.txt](docs/SOURCE_CATALOG.md#source-e06c082d9b0963cf)
- [fc045_cross_core_transfer_model.txt](docs/SOURCE_CATALOG.md#source-a0ba1d48447baf89)
- [fc045_destination_S_owner.txt](docs/SOURCE_CATALOG.md#source-1dc02164c7de8e13)
- [fc045_destination_consumers.txt](docs/SOURCE_CATALOG.md#source-f705597b6b3486a7)
- [fc045_destination_layout.txt](docs/SOURCE_CATALOG.md#source-21a14b30636a80f0)
- [fc045_destination_lifecycle.txt](docs/SOURCE_CATALOG.md#source-8dfa31e4892e1ca0)
- [fc045_layout_preserving_mirror.txt](docs/SOURCE_CATALOG.md#source-3ab277aab27e035c)
- [fc045_primitive_abi.txt](docs/SOURCE_CATALOG.md#source-3ca90b1c1fd3d573)
- [fc045_register_abi_final.txt](docs/SOURCE_CATALOG.md#source-b5f82bd81e71239b)
- [fc045_selector_alias_test.txt](docs/SOURCE_CATALOG.md#source-8a329035b37609f2)
- [fc045_selector_bridge.txt](docs/SOURCE_CATALOG.md#source-4b4142130322427a)
- [fc045_selector_overlap.txt](docs/SOURCE_CATALOG.md#source-e5dc72259b876072)
- [fc045_selector_source.txt](docs/SOURCE_CATALOG.md#source-b74706ed527e54e0)
- [fc045_selector_transfer_extent.txt](docs/SOURCE_CATALOG.md#source-653457e243c848af)

</details>

<details>
<summary>MAIN publication, compact transfer and request/cache paths — 30 files</summary>

- [compact_prefix_selector_field.txt](docs/SOURCE_CATALOG.md#source-3a79ae2386718754)
- [machine30_subtype4_override_fields.txt](docs/SOURCE_CATALOG.md#source-ebf7d72f95909a72)
- [machine30_subtype4_receiver.txt](docs/SOURCE_CATALOG.md#source-618aca520a0685e2)
- [machine30_subtype4_send_primitive.txt](docs/SOURCE_CATALOG.md#source-6aa8a5a4e0e7b358)
- [machine30_subtype4_to_service_record.txt](docs/SOURCE_CATALOG.md#source-50a86a0434f944fb)
- [machine45_K_to_compact_lifetime.txt](docs/SOURCE_CATALOG.md#source-bfeb726949174828)
- [machine45_compact_prefix_bridge_target.txt](docs/SOURCE_CATALOG.md#source-d1ac0b91115d0021)
- [machine45_compact_selector_refresh_gate.txt](docs/SOURCE_CATALOG.md#source-c8640d729e9591c3)
- [machine_change_async_to_xc.txt](docs/SOURCE_CATALOG.md#source-4033cbf25a2fafc8)
- [machine_change_event_fanout.txt](docs/SOURCE_CATALOG.md#source-83afe21170523237)
- [machine_change_to_K_admission_order.txt](docs/SOURCE_CATALOG.md#source-ecd34f9adfac1ef3)
- [machine_change_to_changed_list.txt](docs/SOURCE_CATALOG.md#source-6611aef9d358a9f4)
- [machine_change_to_selector_update_order.txt](docs/SOURCE_CATALOG.md#source-b902b44e9c841a99)
- [machine_change_to_service_candidate.txt](docs/SOURCE_CATALOG.md#source-ab8bd7562637fc49)
- [machine_selector_K_row_provenance.txt](docs/SOURCE_CATALOG.md#source-84563060cb0ad90a)
- [machine_selector_Q_cache_identity.txt](docs/SOURCE_CATALOG.md#source-95ddb9a536d5d4e7)
- [machine_selector_cache_refresh_order.txt](docs/SOURCE_CATALOG.md#source-064ae736c081b81f)
- [machine_selector_row_precedence.txt](docs/SOURCE_CATALOG.md#source-572faf3946bedbb5)
- [machine_selector_service_admission.txt](docs/SOURCE_CATALOG.md#source-eec43a4392f43a61)
- [machine_selector_service_track_identity.txt](docs/SOURCE_CATALOG.md#source-b408c6533091378e)
- [machine_setter_to_K_exact_chain.txt](docs/SOURCE_CATALOG.md#source-2b155d847feed93a)
- [machine_setter_to_x_update.txt](docs/SOURCE_CATALOG.md#source-31d492ac3b1e9374)
- [main_compact_prefix_layout.txt](docs/SOURCE_CATALOG.md#source-b449039aee2bdf58)
- [main_compact_prefix_to_section7_low_transfer.txt](docs/SOURCE_CATALOG.md#source-0b0339ab0d439ae7)
- [main_selector_refresh_signal_source.txt](docs/SOURCE_CATALOG.md#source-c21e6a8c458a5411)
- [selector_refresh_header_byte_source.txt](docs/SOURCE_CATALOG.md#source-521ca583b8ce4903)
- [selector_refresh_header_inhibit_source.txt](docs/SOURCE_CATALOG.md#source-7072068f0ba18d6f)
- [selector_refresh_request_lifecycle.txt](docs/SOURCE_CATALOG.md#source-f4cb0a883d1d5dd6)
- [selector_refresh_request_setters.txt](docs/SOURCE_CATALOG.md#source-283586d81e0e53e3)
- [selector_refresh_two_phase_transaction.txt](docs/SOURCE_CATALOG.md#source-07602c402f24b9f2)

</details>

<details>
<summary>MAIN registration, metadata, older architecture and remaining analysis — 169 files</summary>

- [37row_table_relocation_plan.txt](docs/SOURCE_CATALOG.md#source-876715598ebc1d95)
- [4000f7be_track_setter_caller.asm](docs/SOURCE_CATALOG.md#source-e42caa060e4b7fbb)
- [4000f870_caller.asm](docs/SOURCE_CATALOG.md#source-c3da748815e9ff19)
- [4000f9f4_binding.asm](docs/SOURCE_CATALOG.md#source-b7869ceeee6b8a3b)
- [40024cfc_lookup.asm](docs/SOURCE_CATALOG.md#source-56f64375093fa8cb)
- [40025620_function.asm](docs/SOURCE_CATALOG.md#source-e0d1c85f2912e2ca)
- [4002572e_reader_writer.asm](docs/SOURCE_CATALOG.md#source-4328c9fdf1b886b3)
- [40025a7e_payload_init_caller.asm](docs/SOURCE_CATALOG.md#source-b80cd4dc6c14dff7)
- [4002f2ae_selection.asm](docs/SOURCE_CATALOG.md#source-3dd9b82ac1be3a0c)
- [4002f346_machine_list_update.asm](docs/SOURCE_CATALOG.md#source-3bc771eb37320afb)
- [4002f868_machinelist_ctor_fields.asm](docs/SOURCE_CATALOG.md#source-1cc1c4bcb031e573)
- [40030f06_machine_list_update_handler.asm](docs/SOURCE_CATALOG.md#source-40fce39798555bbc)
- [400891e0_payload_to_storage_call.asm](docs/SOURCE_CATALOG.md#source-197d8c2ce8ac303e)
- [400a6f7e_track_storage_load.asm](docs/SOURCE_CATALOG.md#source-9b32ba23435cffa0)
- [400a7366_track_storage_save.asm](docs/SOURCE_CATALOG.md#source-2887ca076dec6c68)
- [400b3c38_machine_state_init.asm](docs/SOURCE_CATALOG.md#source-872a94b5a8134f58)
- [audio_command_decoder.txt](docs/SOURCE_CATALOG.md#source-5767ffb9c0cffbf1)
- [block_1618_layout.txt](docs/SOURCE_CATALOG.md#source-4795813b54c5de00)
- [block_1618_mask_1550.txt](docs/SOURCE_CATALOG.md#source-6705023b12d5404c)
- [block_1618_semantic_owner.txt](docs/SOURCE_CATALOG.md#source-2d14dab0177afd8a)
- [c_selector_field_all_producers.txt](docs/SOURCE_CATALOG.md#source-a52100cf4078945b)
- [c_selector_writer_precedence.txt](docs/SOURCE_CATALOG.md#source-659718e341154f3b)
- [c_to_m_to_t_selector_bridge.txt](docs/SOURCE_CATALOG.md#source-f493c363e8b74119)
- [changed_list_entry_format.txt](docs/SOURCE_CATALOG.md#source-faadef268a5b526b)
- [changed_list_producers.txt](docs/SOURCE_CATALOG.md#source-5662a6f246285e7f)
- [config_structure_crosswalk.txt](docs/SOURCE_CATALOG.md#source-c143f614999c52b9)
- [default_then_xc_callback.txt](docs/SOURCE_CATALOG.md#source-191dd8f803984191)
- [default_updater_callback_owner.txt](docs/SOURCE_CATALOG.md#source-a3eaf0ca39a2e0e0)
- [disp_a2_scan.txt](docs/SOURCE_CATALOG.md#source-e98ea10adbf4ceb4)
- [existing_machine_audio_differential.txt](docs/SOURCE_CATALOG.md#source-4229c4ded95a8a95)
- [firmware_integrity_audit.txt](docs/SOURCE_CATALOG.md#source-ec8165c0a6045967)
- [kitactive_dirty_mismatch.txt](docs/SOURCE_CATALOG.md#source-3940469353ada535)
- [kitactive_index_namespace.txt](docs/SOURCE_CATALOG.md#source-b0b778a348b262e8)
- [kitactive_mismatch_state_writers.txt](docs/SOURCE_CATALOG.md#source-821402f7ee609d07)
- [kitactive_single_index_refresh.txt](docs/SOURCE_CATALOG.md#source-a1d1077995867d55)
- [machine45_K_complete_writer_inventory.txt](docs/SOURCE_CATALOG.md#source-fb106491dad9649b)
- [machine45_K_selector_writer.txt](docs/SOURCE_CATALOG.md#source-f8526e071f54e5cd)
- [machine45_K_service_overwrite_risk.txt](docs/SOURCE_CATALOG.md#source-120b697cb0218455)
- [machine45_alias_trampoline_plan.txt](docs/SOURCE_CATALOG.md#source-6a103deb240ee5e1)
- [machine45_audio_hook_candidates.txt](docs/SOURCE_CATALOG.md#source-849acce1f2c72ed6)
- [machine45_data_alias_options.txt](docs/SOURCE_CATALOG.md#source-672241b3e9cd2f2c)
- [machine45_descriptor_donor.txt](docs/SOURCE_CATALOG.md#source-b95569e4601a28d3)
- [machine45_descriptor_donor_final.txt](docs/SOURCE_CATALOG.md#source-246267856c85fb91)
- [machine45_descriptor_reuse.txt](docs/SOURCE_CATALOG.md#source-4a4407c3dd4ed402)
- [machine45_explicit_bridge_hook.txt](docs/SOURCE_CATALOG.md#source-5901bcebce88e14f)
- [machine45_explicit_bridge_refresh_safety.txt](docs/SOURCE_CATALOG.md#source-b14c045b830c91bc)
- [machine45_explicit_bridge_required_writes.txt](docs/SOURCE_CATALOG.md#source-e637177fdfd4bceb)
- [machine45_explicit_bridge_write_point.txt](docs/SOURCE_CATALOG.md#source-7c267c853823628a)
- [machine45_explicit_selector_bridge_final_design.txt](docs/SOURCE_CATALOG.md#source-6436e85bd2e9a366)
- [machine45_full_candidate_base_verification.txt](docs/SOURCE_CATALOG.md#source-b83e60acfc8b8a43)
- [machine45_full_candidate_domain_preservation.txt](docs/SOURCE_CATALOG.md#source-75142145d537e1ae)
- [machine45_full_candidate_roundtrip.txt](docs/SOURCE_CATALOG.md#source-f2f335f9165a9eaf)
- [machine45_full_main_binary_diff.txt](docs/SOURCE_CATALOG.md#source-b908db4076cd57fb)
- [machine45_full_main_disassembly.txt](docs/SOURCE_CATALOG.md#source-3ccdaa647412ebf1)
- [machine45_full_patched_static_chain.txt](docs/SOURCE_CATALOG.md#source-1922296192440afd)
- [machine45_full_static_bridge_chain.txt](docs/SOURCE_CATALOG.md#source-07f5ef62e051d43f)
- [machine45_generic_92byte_envelope.txt](docs/SOURCE_CATALOG.md#source-27ebb3ac4143330d)
- [machine45_generic_dual_module_abi_test.txt](docs/SOURCE_CATALOG.md#source-6c1c5df18ef06cf8)
- [machine45_generic_executable_space_inventory.txt](docs/SOURCE_CATALOG.md#source-cfc1eb4f4eacf24d)
- [machine45_generic_extension_module_budget.txt](docs/SOURCE_CATALOG.md#source-d8304999cfa82649)
- [machine45_generic_minimal_trampoline_contract.txt](docs/SOURCE_CATALOG.md#source-8d8867f4dcb026cb)
- [machine45_generic_module_capacity.txt](docs/SOURCE_CATALOG.md#source-3ffcfa3a4fcbd595)
- [machine45_generic_outofline_dual_module_test.txt](docs/SOURCE_CATALOG.md#source-f529457ebf636a9c)
- [machine45_generic_outofline_init_feasibility.txt](docs/SOURCE_CATALOG.md#source-760a9e6c11629d87)
- [machine45_generic_outofline_param_binding.txt](docs/SOURCE_CATALOG.md#source-f419a4df4ff71113)
- [machine45_generic_outofline_process_granularity.txt](docs/SOURCE_CATALOG.md#source-2f2119e26e1e0008)
- [machine45_generic_reset_optional_policy.txt](docs/SOURCE_CATALOG.md#source-c0e1a16e12d2e6f9)
- [machine45_generic_source_native_crosswalk.txt](docs/SOURCE_CATALOG.md#source-d9de3ea35be6a7a9)
- [machine45_generic_split_module_feasibility.txt](docs/SOURCE_CATALOG.md#source-0a9d7ed3cfd79895)
- [machine45_generic_state_candidate_ranges.txt](docs/SOURCE_CATALOG.md#source-d4986be438aedb05)
- [machine45_generic_state_capacity.txt](docs/SOURCE_CATALOG.md#source-b0fb3ed1da5cc5c8)
- [machine45_generic_state_lifetime.txt](docs/SOURCE_CATALOG.md#source-b78988255fc07378)
- [machine45_generic_state_ownership_boundary.txt](docs/SOURCE_CATALOG.md#source-867fc939ac83917f)
- [machine45_generic_state_region_inventory.txt](docs/SOURCE_CATALOG.md#source-a4291f844562da15)
- [machine45_generic_state_reset_semantics.txt](docs/SOURCE_CATALOG.md#source-f4b1c5fda82016e6)
- [machine45_generic_stateful_test_module.txt](docs/SOURCE_CATALOG.md#source-afab5f94c2069310)
- [machine45_generic_three_layer_architecture.txt](docs/SOURCE_CATALOG.md#source-7d1bb12d2029e01f)
- [machine45_generic_trampoline_design.txt](docs/SOURCE_CATALOG.md#source-789047f2ac4238d6)
- [machine45_generic_trampoline_reach.txt](docs/SOURCE_CATALOG.md#source-eeccf01004b83223)
- [machine45_identity_preservation.txt](docs/SOURCE_CATALOG.md#source-d26ae550692d9fa9)
- [machine45_inplace_patch_options.txt](docs/SOURCE_CATALOG.md#source-f459287f21c93d3e)
- [machine45_main_combined_validation.txt](docs/SOURCE_CATALOG.md#source-b94bf3c0004e7132)
- [machine45_main_patch_manifest.txt](docs/SOURCE_CATALOG.md#source-d7b2da130b659020)
- [machine45_menu_patchpoints.txt](docs/SOURCE_CATALOG.md#source-e74365ced8c0e028)
- [machine45_microstub_plan.txt](docs/SOURCE_CATALOG.md#source-af4ad0058cb6593f)
- [machine45_minimal_helper.txt](docs/SOURCE_CATALOG.md#source-d61d54cc146a6102)
- [machine45_offline_patch_diff.txt](docs/SOURCE_CATALOG.md#source-b011c24775e8b8ca)
- [machine45_rangecheck_audit.txt](docs/SOURCE_CATALOG.md#source-c6fc7592da6f2259)
- [machine45_refresh_request_api.txt](docs/SOURCE_CATALOG.md#source-72dbecd612bc07a2)
- [machine45_research_candidate_data_layout.txt](docs/SOURCE_CATALOG.md#source-2de8b98f2a3d215e)
- [machine45_research_candidate_diff.txt](docs/SOURCE_CATALOG.md#source-df754e105bce6cae)
- [machine45_research_candidate_disassembly.txt](docs/SOURCE_CATALOG.md#source-97cc0d7653e0fdc2)
- [machine45_research_candidate_roundtrip.txt](docs/SOURCE_CATALOG.md#source-41569c875be25680)
- [machine45_serializer_inline_override.txt](docs/SOURCE_CATALOG.md#source-35d67533d1bf73e6)
- [machine45_serializer_local_liveness.txt](docs/SOURCE_CATALOG.md#source-d25c07abdc633948)
- [machine45_serializer_local_placement.txt](docs/SOURCE_CATALOG.md#source-7db526998bf24c82)
- [machine45_serializer_minimal_bridge.txt](docs/SOURCE_CATALOG.md#source-77241e07d5906616)
- [machine45_serializer_payload_reuse.txt](docs/SOURCE_CATALOG.md#source-e121ba3ea5a42957)
- [machine45_table_relocation_plan.txt](docs/SOURCE_CATALOG.md#source-3ee3250891ceed38)
- [machine45_three_aliases_exact.txt](docs/SOURCE_CATALOG.md#source-2d40e31af8757a6b)
- [machine_engine_selection_candidates.txt](docs/SOURCE_CATALOG.md#source-76254880f2b462c9)
- [machine_pair_selector_differential.txt](docs/SOURCE_CATALOG.md#source-ad95efaa41c79728)
- [machinelist_numeric_trace.txt](docs/SOURCE_CATALOG.md#source-2666ee6627c1fe08)
- [machinelist_selection_chain.txt](docs/SOURCE_CATALOG.md#source-4dcaf7b07fa83574)
- [machinetype_bulk_copy_paths.txt](docs/SOURCE_CATALOG.md#source-65141854e9107461)
- [machinetype_dispatch_boundary.asm](docs/SOURCE_CATALOG.md#source-a12d7f96a26e6629)
- [machinetype_dispatch_trace.txt](docs/SOURCE_CATALOG.md#source-9fbc00bebb2fe33f)
- [machinetype_main_consumer_chain.asm](docs/SOURCE_CATALOG.md#source-53e9528edee6bfe1)
- [machinetype_selector_translation.txt](docs/SOURCE_CATALOG.md#source-7459dd52be1a0192)
- [machinetype_structure_lowering.txt](docs/SOURCE_CATALOG.md#source-a5224f842c94d0b6)
- [machinetype_to_coldfire_selector_bridge.txt](docs/SOURCE_CATALOG.md#source-44cc500d6b865250)
- [machinetype_transport_receiver.asm](docs/SOURCE_CATALOG.md#source-93ec78361afc446c)
- [main_candidate_8e_mirror_layout.txt](docs/SOURCE_CATALOG.md#source-8a3a956808c3f866)
- [main_data_cave_audit.txt](docs/SOURCE_CATALOG.md#source-216534e9b0825cd2)
- [main_executable_cave_audit.txt](docs/SOURCE_CATALOG.md#source-b57eafce5a825d61)
- [main_mirror_selector_writers.txt](docs/SOURCE_CATALOG.md#source-c4ff0f0e883e3dbf)
- [main_to_audio_transport.txt](docs/SOURCE_CATALOG.md#source-4fce77b8072fc3c9)
- [main_track_to_coldfire_voice_map.txt](docs/SOURCE_CATALOG.md#source-e4ed2a8634e69ba8)
- [main_zero_region_execution_status.txt](docs/SOURCE_CATALOG.md#source-e75a7cd015085247)
- [mainscreen_sourcepage_bc_final.txt](docs/SOURCE_CATALOG.md#source-ae251982cb56f321)
- [obstructing_37row_table_refs.txt](docs/SOURCE_CATALOG.md#source-7ea71a98fc7fe3ae)
- [page45_existing_fallback_alias.txt](docs/SOURCE_CATALOG.md#source-5c67564b8dc3c464)
- [page45_overlap_exact.txt](docs/SOURCE_CATALOG.md#source-57040581ab975862)
- [page_accessor_256value_equivalence.txt](docs/SOURCE_CATALOG.md#source-4c7542550a3cb88a)
- [page_accessor_ccr_x_liveness.txt](docs/SOURCE_CATALOG.md#source-c627523d77eb53d2)
- [page_accessor_complete_function.txt](docs/SOURCE_CATALOG.md#source-deecbd1eb14847c5)
- [page_accessor_local_tail_space.txt](docs/SOURCE_CATALOG.md#source-6c2c65f336e91a5b)
- [page_accessor_piecewise_rewrite.txt](docs/SOURCE_CATALOG.md#source-6092f7a35d3a3188)
- [page_accessor_size_optimization.txt](docs/SOURCE_CATALOG.md#source-d05d9048d38bb514)
- [page_accessor_unresolved_virtual_callers.txt](docs/SOURCE_CATALOG.md#source-bfccd922fc617bcc)
- [page_accessor_x_across_virtual_return.txt](docs/SOURCE_CATALOG.md#source-d6b3d0b17cf3aca0)
- [page_accessor_x_caller_domain.txt](docs/SOURCE_CATALOG.md#source-f2f1b5750ff38732)
- [page_accessor_x_consumer_semantics.txt](docs/SOURCE_CATALOG.md#source-6d4a62220a797afc)
- [page_accessor_x_domain_difference.txt](docs/SOURCE_CATALOG.md#source-01046748e35fcb20)
- [page_accessor_x_forward_liveness.txt](docs/SOURCE_CATALOG.md#source-983ccb60e6a1c081)
- [page_accessor_x_observable_effect.txt](docs/SOURCE_CATALOG.md#source-179a3cba053fce99)
- [page_accessor_x_remaining_callers.txt](docs/SOURCE_CATALOG.md#source-01e198bcf022d125)
- [page_metadata_495refs_preservation.txt](docs/SOURCE_CATALOG.md#source-d6fd34de4f1c4db7)
- [page_metadata_accessor_callers.txt](docs/SOURCE_CATALOG.md#source-fd1f3dfe30718eaf)
- [page_metadata_existing_normalized_id.txt](docs/SOURCE_CATALOG.md#source-63a4bf005af6a46c)
- [page_metadata_oob_behavior.txt](docs/SOURCE_CATALOG.md#source-e1108383e5f00fc5)
- [page_metadata_pointer_alias.txt](docs/SOURCE_CATALOG.md#source-abdcf06ebd8f8fdc)
- [payload_to_c_deferred_sync.txt](docs/SOURCE_CATALOG.md#source-b6e0994ce42fa091)
- [project_config_machine_path.txt](docs/SOURCE_CATALOG.md#source-1612730cbf814cde)
- [record_a2_readers.txt](docs/SOURCE_CATALOG.md#source-186b579d2fe61751)
- [record_a2_writers.txt](docs/SOURCE_CATALOG.md#source-190564187c34b25e)
- [runtime_machine_a2_complete_writer_inventory.txt](docs/SOURCE_CATALOG.md#source-645c90298d3cae32)
- [runtime_machine_a2_writer_roles.txt](docs/SOURCE_CATALOG.md#source-c0608fedbc8c5425)
- [runtime_observation_availability.txt](docs/SOURCE_CATALOG.md#source-f0a016b1d0bf96b8)
- [selected_function_xrefs.txt](docs/SOURCE_CATALOG.md#source-1be30a816bf7db49)
- [selector_backward_provenance.txt](docs/SOURCE_CATALOG.md#source-c4f5013ff2b3a31d)
- [slot23_machine_values.txt](docs/SOURCE_CATALOG.md#source-276674a3aab63c9c)
- [slot23_normalizer_forward_path.txt](docs/SOURCE_CATALOG.md#source-19aee6e02596951c)
- [slot23_rev_semantics.txt](docs/SOURCE_CATALOG.md#source-4869d8e6fed833cb)
- [sourcepageview_bc_concrete_dispatch.txt](docs/SOURCE_CATALOG.md#source-3c7390193ecf886d)
- [sourcepageview_x_concrete_liveness.txt](docs/SOURCE_CATALOG.md#source-1062ea106ce1f149)
- [syx_roundtrip_repack.txt](docs/SOURCE_CATALOG.md#source-a18c58ac91b46950)
- [track_accessor_slot28.txt](docs/SOURCE_CATALOG.md#source-1f7fbf402feb817d)
- [track_config_layout.txt](docs/SOURCE_CATALOG.md#source-bdf4396e9d7ab027)
- [vslot30_vslot34_object_model.txt](docs/SOURCE_CATALOG.md#source-83a651b743ddba20)
- [x42_machine_default_map.txt](docs/SOURCE_CATALOG.md#source-9323db23e28150d6)
- [x42_type7_override.txt](docs/SOURCE_CATALOG.md#source-9a38a48684bf6142)
- [x42_writer_precedence.txt](docs/SOURCE_CATALOG.md#source-1149795d3fe4c61a)
- [x_root_identity.txt](docs/SOURCE_CATALOG.md#source-ccd43e5865454be8)
- [x_selector_field_provenance.txt](docs/SOURCE_CATALOG.md#source-bbb5c6af97e39c6c)
- [x_to_c_full_field_map.txt](docs/SOURCE_CATALOG.md#source-96d422d7eb2e1e39)
- [x_to_c_live_vs_load.txt](docs/SOURCE_CATALOG.md#source-80db808cd9da22dd)
- [x_to_c_updater_callers.txt](docs/SOURCE_CATALOG.md#source-c34868035e0469c7)
- [x_to_c_updater_lifecycle.txt](docs/SOURCE_CATALOG.md#source-94895a2726aeee29)

</details>

<details>
<summary>Observation planning and public board evidence — 56 files</summary>

- [elektron_debug_connector_pattern_comparison.txt](docs/SOURCE_CATALOG.md#source-bcb6bab0e779266c)
- [machine45_observer_async_read_alternative.txt](docs/SOURCE_CATALOG.md#source-186b7222c877073e)
- [machine45_observer_board_debug_exposure.txt](docs/SOURCE_CATALOG.md#source-158d6ff0893d3b33)
- [machine45_observer_breakpoint_validity.txt](docs/SOURCE_CATALOG.md#source-a924c6de003e2b0b)
- [machine45_observer_coldfire_debug_capability.txt](docs/SOURCE_CATALOG.md#source-9248b6d6d1c541f4)
- [machine45_observer_first_recipe.txt](docs/SOURCE_CATALOG.md#source-79264f0b9255c519)
- [machine45_observer_minimum_capabilities.txt](docs/SOURCE_CATALOG.md#source-2664d68ff2a5c11d)
- [machine45_observer_r0_vs_r1.txt](docs/SOURCE_CATALOG.md#source-dc0ddc29d1b9bd33)
- [machine45_observer_service_read_commands.txt](docs/SOURCE_CATALOG.md#source-f15c27f0b18ddca1)
- [machine45_observer_sysex_capability.txt](docs/SOURCE_CATALOG.md#source-a03e3aaead9e8144)
- [machine45_observer_temporal_capture_feasibility.txt](docs/SOURCE_CATALOG.md#source-871ea9f3e84a3928)
- [machine45_observer_transport_exhaustion.txt](docs/SOURCE_CATALOG.md#source-0ba305dc39c029f9)
- [machine45_observer_transport_inventory.txt](docs/SOURCE_CATALOG.md#source-18e22c97e2424554)
- [machine45_observer_transport_ranking.txt](docs/SOURCE_CATALOG.md#source-17b966a61757e91f)
- [machine45_observer_two_callback_capture.txt](docs/SOURCE_CATALOG.md#source-afd9e0b8e5be5525)
- [machine45_runtime_backend_decision_tree.txt](docs/SOURCE_CATALOG.md#source-1ddfdc9b9ca3ae9e)
- [machine45_runtime_dma47_destination_plan.txt](docs/SOURCE_CATALOG.md#source-5625c5e83035fcfe)
- [machine45_runtime_first_observation.txt](docs/SOURCE_CATALOG.md#source-5e8e8bd14b2e792d)
- [machine45_runtime_icache_test_design.txt](docs/SOURCE_CATALOG.md#source-b10e03408e3846d3)
- [machine45_runtime_observation_invasiveness.txt](docs/SOURCE_CATALOG.md#source-ba32cc759a23adab)
- [machine45_runtime_observe_dma47_S_plan.txt](docs/SOURCE_CATALOG.md#source-193e18badbd4972b)
- [machine45_runtime_observer_interface.txt](docs/SOURCE_CATALOG.md#source-1e3bdae8f2034bb8)
- [machine45_runtime_phase0_safety_scope.txt](docs/SOURCE_CATALOG.md#source-6c2081d535cd7c04)
- [machine45_runtime_ram_arena_certification_rules.txt](docs/SOURCE_CATALOG.md#source-e431e56c38ff2c7b)
- [machine45_runtime_ram_exec_test_design.txt](docs/SOURCE_CATALOG.md#source-8c17d5606d172251)
- [machine45_runtime_ram_tail_activity_plan.txt](docs/SOURCE_CATALOG.md#source-5c9ca016cc447b1d)
- [machine45_runtime_state_matrix.txt](docs/SOURCE_CATALOG.md#source-9362de7ea3ad251d)
- [machine45_runtime_unknown_dependency_graph.txt](docs/SOURCE_CATALOG.md#source-088006467c87384b)
- [syntakt_audio_processor_topology.txt](docs/SOURCE_CATALOG.md#source-a3fcb7f53058cfaa)
- [syntakt_bdm_area_inventory.txt](docs/SOURCE_CATALOG.md#source-06075734ca975299)
- [syntakt_bdm_backside_visibility_limits.txt](docs/SOURCE_CATALOG.md#source-f439b08a345c5924)
- [syntakt_bdm_next_evidence_requirement.txt](docs/SOURCE_CATALOG.md#source-7a16e9d744347a47)
- [syntakt_bdm_passive_role_analysis.txt](docs/SOURCE_CATALOG.md#source-a09869f4cb08ccdb)
- [syntakt_bdm_to_processor_assignment.txt](docs/SOURCE_CATALOG.md#source-5381e57caaba42f0)
- [syntakt_board_observation_access_closure.txt](docs/SOURCE_CATALOG.md#source-db90b0c2f014b55d)
- [syntakt_board_public_image_inventory.txt](docs/SOURCE_CATALOG.md#source-69555def115d1019)
- [syntakt_board_video_frame_sources.txt](docs/SOURCE_CATALOG.md#source-8d822b8253c5c028)
- [syntakt_coldfire_debug_pin_map.txt](docs/SOURCE_CATALOG.md#source-c97c83cc58045f72)
- [syntakt_coldfire_designators.txt](docs/SOURCE_CATALOG.md#source-8a05791b75517086)
- [syntakt_coldfire_neighbor_component_map.txt](docs/SOURCE_CATALOG.md#source-924a6edfb1ce8556)
- [syntakt_debug_access_risk_classification.txt](docs/SOURCE_CATALOG.md#source-208c29dd6102d86b)
- [syntakt_debug_board_revision_matrix.txt](docs/SOURCE_CATALOG.md#source-7a15dd7cf43efcf2)
- [syntakt_debug_candidate_interface_map.txt](docs/SOURCE_CATALOG.md#source-1bcb6c00f22ed12c)
- [syntakt_debug_observer_capability.txt](docs/SOURCE_CATALOG.md#source-223c80a387afbdf6)
- [syntakt_debug_pad_candidates.txt](docs/SOURCE_CATALOG.md#source-cf18e73e63a094b8)
- [syntakt_debug_passive_network.txt](docs/SOURCE_CATALOG.md#source-80699c241657bcc8)
- [syntakt_debug_trace_correlation.txt](docs/SOURCE_CATALOG.md#source-2950c247df1bac7d)
- [syntakt_debug_voltage_domain.txt](docs/SOURCE_CATALOG.md#source-fd93dab10afb80c9)
- [syntakt_dual_coldfire_physical_inventory.txt](docs/SOURCE_CATALOG.md#source-e2b71941469beb9a)
- [syntakt_factory_test_interface_evidence.txt](docs/SOURCE_CATALOG.md#source-4a0d0226e807d711)
- [syntakt_main_processor_topology.txt](docs/SOURCE_CATALOG.md#source-9f539ee634cf1875)
- [syntakt_pcba0046d_image_hunt.txt](docs/SOURCE_CATALOG.md#source-9a09b63abf014b2f)
- [syntakt_physical_logical_processor_crosswalk.txt](docs/SOURCE_CATALOG.md#source-9ddbff47c5718db1)
- [syntakt_section7_bdm_area_assignment.txt](docs/SOURCE_CATALOG.md#source-0435021b1ad585d9)
- [syntakt_section7_physical_assignment.txt](docs/SOURCE_CATALOG.md#source-2d809176ecbca4c3)
- [syntakt_section7_processor_physical_identity.txt](docs/SOURCE_CATALOG.md#source-fab33c7ab7d33e19)

</details>

<details>
<summary>Offline SDK and UI metadata — 47 files</summary>

- [machine45_dsp_sdk_validation.txt](docs/SOURCE_CATALOG.md#source-f7c9d6d8d4b34a31)
- [machine45_sdk_ui_manifest_contract.txt](docs/SOURCE_CATALOG.md#source-efa6cb37250fe765)
- [machine45_sdk_ui_metadata_design.txt](docs/SOURCE_CATALOG.md#source-80df79d80db49226)
- [machine45_sdk_ui_package_integration.txt](docs/SOURCE_CATALOG.md#source-ca125c554659b1f2)
- [machine45_ui_compact_overlay_storage.txt](docs/SOURCE_CATALOG.md#source-fa0329093385592e)
- [machine45_ui_compiled_renderer_mapping.txt](docs/SOURCE_CATALOG.md#source-3d691c71dc4155e7)
- [machine45_ui_custom_parameter_labels.txt](docs/SOURCE_CATALOG.md#source-81f4551b57284f15)
- [machine45_ui_eight_param_grouping.txt](docs/SOURCE_CATALOG.md#source-da14ee697f500875)
- [machine45_ui_exact45_hook_identity_cost.txt](docs/SOURCE_CATALOG.md#source-d242d06cf94b1a08)
- [machine45_ui_existing_icon_catalog.txt](docs/SOURCE_CATALOG.md#source-be854925c7e03186)
- [machine45_ui_existing_icon_reuse.txt](docs/SOURCE_CATALOG.md#source-5612577d471e0dc4)
- [machine45_ui_icon_asset_format.txt](docs/SOURCE_CATALOG.md#source-96928055b9ee55db)
- [machine45_ui_icon_field_differential.txt](docs/SOURCE_CATALOG.md#source-1895e7affa39d2c6)
- [machine45_ui_icon_render_chain.txt](docs/SOURCE_CATALOG.md#source-b1d186bdd18cbc6f)
- [machine45_ui_label_immediate_encoding.txt](docs/SOURCE_CATALOG.md#source-32768946bfaa53a0)
- [machine45_ui_label_late_override_boundary.txt](docs/SOURCE_CATALOG.md#source-515fa0f1143d438d)
- [machine45_ui_label_overlay_design.txt](docs/SOURCE_CATALOG.md#source-b21398b89ed328d6)
- [machine45_ui_machine0_param_descriptors.txt](docs/SOURCE_CATALOG.md#source-0fb7df71d2cc261e)
- [machine45_ui_new_custom_icon_feasibility.txt](docs/SOURCE_CATALOG.md#source-617abfd860cdb13a)
- [machine45_ui_overlay_accessor_consequence.txt](docs/SOURCE_CATALOG.md#source-a8c73985c2f67c53)
- [machine45_ui_overlay_manifest_lowering.txt](docs/SOURCE_CATALOG.md#source-0875780ca6258455)
- [machine45_ui_overlay_metadata_footprint.txt](docs/SOURCE_CATALOG.md#source-460c5ea822b8c3b0)
- [machine45_ui_overlay_profile_dry_run.txt](docs/SOURCE_CATALOG.md#source-69e915b028b75f0f)
- [machine45_ui_overlay_stock_renderer_validation.txt](docs/SOURCE_CATALOG.md#source-b209320ae2db0ced)
- [machine45_ui_overlay_storage_lifetime.txt](docs/SOURCE_CATALOG.md#source-e905a62108e2d63f)
- [machine45_ui_preview_fallback_policy.txt](docs/SOURCE_CATALOG.md#source-d20fd8b32e629d6c)
- [machine45_ui_private_labels.txt](docs/SOURCE_CATALOG.md#source-4b2c6d271eb1e39e)
- [machine45_ui_private_metadata_footprint.txt](docs/SOURCE_CATALOG.md#source-12b0ee989b8471f5)
- [machine45_ui_private_metadata_storage.txt](docs/SOURCE_CATALOG.md#source-683ce5d65388f1aa)
- [machine45_ui_private_page_accessor_design.txt](docs/SOURCE_CATALOG.md#source-8660af1e88b1d699)
- [machine45_ui_private_record_isolation.txt](docs/SOURCE_CATALOG.md#source-79119879ec9314f8)
- [machine45_ui_profile_dry_run.txt](docs/SOURCE_CATALOG.md#source-9687f1eab1002233)
- [machine45_ui_renderer_late_override_boundary.txt](docs/SOURCE_CATALOG.md#source-ff719a258b3be107)
- [machine45_ui_renderer_machine_identity.txt](docs/SOURCE_CATALOG.md#source-3211b3b919b52fd2)
- [machine45_ui_renderer_overlay_design.txt](docs/SOURCE_CATALOG.md#source-b38217f89313b187)
- [machine45_ui_renderer_param_index.txt](docs/SOURCE_CATALOG.md#source-0f734a8e7629850a)
- [machine45_ui_renderer_symbol_catalog.txt](docs/SOURCE_CATALOG.md#source-312b7e34a0786140)
- [machine45_ui_stack_label_generation.txt](docs/SOURCE_CATALOG.md#source-f65376705303d688)
- [machine45_ui_static_profile_compiler.txt](docs/SOURCE_CATALOG.md#source-a97dd4440271f6c4)
- [machine45_ui_static_to_runtime_record_construction.txt](docs/SOURCE_CATALOG.md#source-a8ca2946dab42403)
- [machine45_ui_stock_renderer_compatibility.txt](docs/SOURCE_CATALOG.md#source-061f896aa0ab81e2)
- [machine45_ui_storagefree_code_footprint.txt](docs/SOURCE_CATALOG.md#source-0323b679edab71d3)
- [machine45_ui_storagefree_execution_requirement.txt](docs/SOURCE_CATALOG.md#source-3bf6427e4c5546cd)
- [machine45_ui_storagefree_label_hook.txt](docs/SOURCE_CATALOG.md#source-e62d7f427e7bbe96)
- [machine45_ui_storagefree_profile_dry_run.txt](docs/SOURCE_CATALOG.md#source-40fa2b92475f4bc0)
- [machine45_ui_storagefree_renderer_hook.txt](docs/SOURCE_CATALOG.md#source-f864d62d04a7ff2f)
- [machine45_ui_tableless_renderer_selection.txt](docs/SOURCE_CATALOG.md#source-cef4f1139df04cec)

</details>

<details>
<summary>Parameter paths and historical control candidates — 30 files</summary>

- [machine45_eight_knob_compact_map.txt](docs/SOURCE_CATALOG.md#source-efeebcf15ccc4ec9)
- [machine45_eight_knob_consumers.txt](docs/SOURCE_CATALOG.md#source-e168d79dfee3a6d8)
- [machine45_eight_knob_control_candidates.txt](docs/SOURCE_CATALOG.md#source-a7b5d312939bccb6)
- [machine45_eight_knob_descriptor_map.txt](docs/SOURCE_CATALOG.md#source-cf0d151200b728bc)
- [machine45_eight_knob_e12_inheritance.txt](docs/SOURCE_CATALOG.md#source-1bd72c78d9ced741)
- [machine45_eight_knob_main_fields.txt](docs/SOURCE_CATALOG.md#source-dbe61f775d248162)
- [machine45_eight_knob_section7_fields.txt](docs/SOURCE_CATALOG.md#source-e4980287f6dda59d)
- [machine45_param1_audio_control_design.txt](docs/SOURCE_CATALOG.md#source-862342f26a553990)
- [machine45_param1_crosscore_path.txt](docs/SOURCE_CATALOG.md#source-a8a615da5b260a99)
- [machine45_param1_e12_inheritance.txt](docs/SOURCE_CATALOG.md#source-4099507abe0e7c4f)
- [machine45_param1_family0_consumer.txt](docs/SOURCE_CATALOG.md#source-faf73b586859b2f4)
- [machine45_param1_main_runtime_field.txt](docs/SOURCE_CATALOG.md#source-4502b718b7e55411)
- [machine45_param1_ui_storage_alias.txt](docs/SOURCE_CATALOG.md#source-2eca07448555cefc)
- [machine45_tune_audio_poc_placement.txt](docs/SOURCE_CATALOG.md#source-e98d69bb375b7559)
- [machine45_tune_candidate_base_verification.txt](docs/SOURCE_CATALOG.md#source-1892cd9019c52671)
- [machine45_tune_candidate_binary_diff.txt](docs/SOURCE_CATALOG.md#source-75e5a541e36dd9df)
- [machine45_tune_candidate_cost.txt](docs/SOURCE_CATALOG.md#source-592d1cc81be15065)
- [machine45_tune_candidate_disassembly.txt](docs/SOURCE_CATALOG.md#source-f0eba42e810bec2f)
- [machine45_tune_candidate_domain_validation.txt](docs/SOURCE_CATALOG.md#source-038943f719d068d9)
- [machine45_tune_candidate_roundtrip.txt](docs/SOURCE_CATALOG.md#source-f79d800f3feabcd2)
- [machine45_tune_control_full_design.txt](docs/SOURCE_CATALOG.md#source-7e2d8ccbf6ffa6b9)
- [machine45_tune_control_register_safety.txt](docs/SOURCE_CATALOG.md#source-26476db3075324d7)
- [machine45_tune_e12_isolation.txt](docs/SOURCE_CATALOG.md#source-a4b157743279d7fb)
- [machine45_tune_liveness_near_audio_poc.txt](docs/SOURCE_CATALOG.md#source-93f7329631851aa3)
- [machine45_tune_patched_static_chain.txt](docs/SOURCE_CATALOG.md#source-0c00bd64712e1607)
- [machine45_tune_shift_derivation.txt](docs/SOURCE_CATALOG.md#source-49d4b3fd70fb8d31)
- [parameter23_producers.txt](docs/SOURCE_CATALOG.md#source-05b784e96dae2e26)
- [parameter23_selector_encoding.txt](docs/SOURCE_CATALOG.md#source-99a5b1c7373f7f69)
- [parameter23_semantics.txt](docs/SOURCE_CATALOG.md#source-888205800af617b0)
- [record112_parameter23_lookup.txt](docs/SOURCE_CATALOG.md#source-932c35b3bc909368)

</details>

<details>
<summary>Persistence and object ownership — 44 files</summary>

- [machine45_pattern_v11_machine_byte_source.txt](docs/SOURCE_CATALOG.md#source-aa3c8a4f3345b0f7)
- [machine45_pattern_v11_raw45_behavior.txt](docs/SOURCE_CATALOG.md#source-7af411b2019f717f)
- [machine45_pattern_v11_to_runtime_machine.txt](docs/SOURCE_CATALOG.md#source-71614060e635278a)
- [machine45_persistence_audit.txt](docs/SOURCE_CATALOG.md#source-edd3ce2078aea321)
- [machine45_persistence_converter_crosswalk.txt](docs/SOURCE_CATALOG.md#source-343520aa95582e56)
- [machine45_persistence_final.txt](docs/SOURCE_CATALOG.md#source-4e8a011409396fbd)
- [machine45_persistence_minimal.txt](docs/SOURCE_CATALOG.md#source-2ac43f26dc0e80a8)
- [machine45_persistence_minimal_patch_design.txt](docs/SOURCE_CATALOG.md#source-e2cc6edf2c320388)
- [machine45_persistence_save_symmetry.txt](docs/SOURCE_CATALOG.md#source-f4b01430c5087c91)
- [machine45_sound_pattern_persistence_final.txt](docs/SOURCE_CATALOG.md#source-6987950a521a686b)
- [machine45_sound_v7_machine_byte_source.txt](docs/SOURCE_CATALOG.md#source-423aa4fff8ae4525)
- [machine45_sound_v7_raw45_behavior.txt](docs/SOURCE_CATALOG.md#source-e9e73a57d0addb98)
- [machine45_sound_v7_to_runtime_machine.txt](docs/SOURCE_CATALOG.md#source-fa5b68500f57cbbd)
- [pattern_trackchild_to_converter_final.txt](docs/SOURCE_CATALOG.md#source-9c8c865312f89dfb)
- [pattern_v11_19e70_interface_abi.txt](docs/SOURCE_CATALOG.md#source-93f4b29b6561422d)
- [pattern_v11_N28_consumer_inventory.txt](docs/SOURCE_CATALOG.md#source-ac2b2cd499d0a8ec)
- [pattern_v11_N28_destination_identity.txt](docs/SOURCE_CATALOG.md#source-a169e5baa61c1748)
- [pattern_v11_N28_machine_apply_flow.txt](docs/SOURCE_CATALOG.md#source-ec00ce886bd95428)
- [pattern_v11_N28_raw45_behavior.txt](docs/SOURCE_CATALOG.md#source-e644d17cbce826d7)
- [pattern_v11_N28_row_apply_candidates.txt](docs/SOURCE_CATALOG.md#source-c90da183d308f031)
- [pattern_v11_N28_selector_vs_runtime_apply.txt](docs/SOURCE_CATALOG.md#source-1d3c8285ff4c76e2)
- [pattern_v11_callback_40174808_abi.txt](docs/SOURCE_CATALOG.md#source-125f0c2253310c24)
- [pattern_v11_callback_4017AE60_abi.txt](docs/SOURCE_CATALOG.md#source-4a1e2e6c67ac7f3f)
- [pattern_v11_callback_child_slots.txt](docs/SOURCE_CATALOG.md#source-ca12a727edc465c7)
- [pattern_v11_callback_machine_signatures.txt](docs/SOURCE_CATALOG.md#source-5dc97fc75b731f61)
- [pattern_v11_callback_machine_value_flow.txt](docs/SOURCE_CATALOG.md#source-d3cf2ce912c8f030)
- [pattern_v11_callback_machine_write_inventory.txt](docs/SOURCE_CATALOG.md#source-8ce8cbcfae7e85ad)
- [pattern_v11_live_payload_copy_paths.txt](docs/SOURCE_CATALOG.md#source-d25ddcec301edf59)
- [pattern_v11_machine_backward_slice.txt](docs/SOURCE_CATALOG.md#source-96590ad5bf65dbea)
- [pattern_v11_machine_converter_ancestry.txt](docs/SOURCE_CATALOG.md#source-f658d1fb5a51bd6c)
- [pattern_v11_machine_exact_source.txt](docs/SOURCE_CATALOG.md#source-cfe1ecfc74b7f54b)
- [pattern_v11_machine_field_symmetry.txt](docs/SOURCE_CATALOG.md#source-864d0c123b91c661)
- [pattern_v11_machine_save_path.txt](docs/SOURCE_CATALOG.md#source-5e6d6bffc1e09baa)
- [pattern_v11_machine_setter_reachability.txt](docs/SOURCE_CATALOG.md#source-ed926d5a3ba97743)
- [pattern_v11_object_ancestry_closure.txt](docs/SOURCE_CATALOG.md#source-53cd858c9fa00723)
- [pattern_v11_raw45_load_behavior.txt](docs/SOURCE_CATALOG.md#source-f8273325d41a1a74)
- [pattern_v11_runtime_machine_writers.txt](docs/SOURCE_CATALOG.md#source-6f507d5af1d3db18)
- [pattern_v11_runtime_writer_source_provenance.txt](docs/SOURCE_CATALOG.md#source-042b97a17f884f00)
- [pattern_v11_selected_source_identity.txt](docs/SOURCE_CATALOG.md#source-0d4e63d89d066949)
- [pattern_v11_to_runtime_machine_writer_reachability.txt](docs/SOURCE_CATALOG.md#source-b0cdca802a2c36f2)
- [sound_v7_converter_final.txt](docs/SOURCE_CATALOG.md#source-338cc433ac946d57)
- [sound_v7_machine_converter_ancestry.txt](docs/SOURCE_CATALOG.md#source-f491ffc0899c6228)
- [sound_v7_object_ancestry_closure.txt](docs/SOURCE_CATALOG.md#source-a1e282da83e1b89c)
- [track_converter_owner_chain.txt](docs/SOURCE_CATALOG.md#source-e8096d4276d8d79c)

</details>

<details>
<summary>Section7 decoding, dispatch, state and processing — 211 files</summary>

- [coldfire_80008188_semantics.txt](docs/SOURCE_CATALOG.md#source-f3ced1f356bcb682)
- [coldfire_decoder_validation.txt](docs/SOURCE_CATALOG.md#source-771e5c02627af05a)
- [coldfire_engine_selection_one_level.txt](docs/SOURCE_CATALOG.md#source-85e9918f467474d3)
- [coldfire_fixed_callee_state_flow.txt](docs/SOURCE_CATALOG.md#source-1967ae6866140056)
- [coldfire_low_address_input_map.txt](docs/SOURCE_CATALOG.md#source-4ddcb0e745204f58)
- [coldfire_mode_0_7_semantics.txt](docs/SOURCE_CATALOG.md#source-adf12bfabc385efa)
- [coldfire_raw_selector_family_map.txt](docs/SOURCE_CATALOG.md#source-5a9f27609b8e5457)
- [coldfire_selector_3e_call1_targets.txt](docs/SOURCE_CATALOG.md#source-83dffe719728417b)
- [coldfire_selector_3e_call2_targets.txt](docs/SOURCE_CATALOG.md#source-9dd27e0cbdb543a0)
- [coldfire_selector_3e_path.txt](docs/SOURCE_CATALOG.md#source-e57946bee3db93c0)
- [coldfire_selector_3e_target_semantics.txt](docs/SOURCE_CATALOG.md#source-4c5566f19c187dca)
- [coldfire_selector_3e_writers.txt](docs/SOURCE_CATALOG.md#source-10e073f5c46bf9a0)
- [coldfire_selector_45_semantics.txt](docs/SOURCE_CATALOG.md#source-eaab763eb72a08f2)
- [coldfire_selector_j0_j1_provenance.txt](docs/SOURCE_CATALOG.md#source-546138880abfd0f6)
- [coldfire_slot_memory_layout.txt](docs/SOURCE_CATALOG.md#source-c27d6b2b274e40c7)
- [coldfire_statearg0_writers.txt](docs/SOURCE_CATALOG.md#source-f7908142c9295f27)
- [coldfire_voice_callee_full.asm](docs/SOURCE_CATALOG.md#source-5685e5c2a3ebd1b9)
- [coldfire_voice_dispatch.txt](docs/SOURCE_CATALOG.md#source-82fda4d9592dc288)
- [coldfire_voice_selector_writers.txt](docs/SOURCE_CATALOG.md#source-bcddf6c9fe2e7d06)
- [section7_13family_table_relocation.txt](docs/SOURCE_CATALOG.md#source-0451276e80910157)
- [section7_400022ec_audio_relevance.txt](docs/SOURCE_CATALOG.md#source-8ee9cfd1cb72f0a3)
- [section7_400022ec_caller_chain.txt](docs/SOURCE_CATALOG.md#source-ab501fdb3c426c1c)
- [section7_400022ec_direct_consumers.txt](docs/SOURCE_CATALOG.md#source-b05a886a6e4ba064)
- [section7_400022ec_voice_cadence.txt](docs/SOURCE_CATALOG.md#source-2219fbc820710545)
- [section7_400022ec_write_target.txt](docs/SOURCE_CATALOG.md#source-8634b9a0ed59a27e)
- [section7_8000_region_identity.txt](docs/SOURCE_CATALOG.md#source-c163e234a242fd1f)
- [section7_AB_composability.txt](docs/SOURCE_CATALOG.md#source-8586f9afddabc6c4)
- [section7_AB_family_abi_uniformity.txt](docs/SOURCE_CATALOG.md#source-41fe18c7d9d9e50c)
- [section7_AB_handler_write_sets.txt](docs/SOURCE_CATALOG.md#source-609bc65f7ff6df16)
- [section7_AB_local_layout.txt](docs/SOURCE_CATALOG.md#source-3e7ede7b5d15309b)
- [section7_AB_plus8_repack.txt](docs/SOURCE_CATALOG.md#source-a13f1a3313b494f0)
- [section7_B_later_helper_semantics.txt](docs/SOURCE_CATALOG.md#source-dceba4fa2b07909e)
- [section7_B_on_A_dependencies.txt](docs/SOURCE_CATALOG.md#source-513ce76733ad10c1)
- [section7_B_row_semantics.txt](docs/SOURCE_CATALOG.md#source-9025f3b1608d2e66)
- [section7_B_to_output_chain.txt](docs/SOURCE_CATALOG.md#source-43cff9c74017c19a)
- [section7_B_vector_consumers.txt](docs/SOURCE_CATALOG.md#source-73a577591c1464de)
- [section7_B_vector_definition.txt](docs/SOURCE_CATALOG.md#source-6b33584d8899ed53)
- [section7_S_1b0_consumers.txt](docs/SOURCE_CATALOG.md#source-5ac79534217d1055)
- [section7_S_1b0_forward_boundary.txt](docs/SOURCE_CATALOG.md#source-e14321bfa0e23dfc)
- [section7_S_1b0_layout.txt](docs/SOURCE_CATALOG.md#source-fb9bfe7134c12fab)
- [section7_S_global_slot_writers.txt](docs/SOURCE_CATALOG.md#source-153f2ee65577ec42)
- [section7_S_initialization_order.txt](docs/SOURCE_CATALOG.md#source-79c2ff543c981f6c)
- [section7_S_object_identity.txt](docs/SOURCE_CATALOG.md#source-4ca57106d474d69e)
- [section7_S_runtime_values.txt](docs/SOURCE_CATALOG.md#source-533cd254bd42abdd)
- [section7_address_normalization.txt](docs/SOURCE_CATALOG.md#source-a1ba1287be3d2fdc)
- [section7_adjacent128_reachable_domain.txt](docs/SOURCE_CATALOG.md#source-4cf6a21939742796)
- [section7_adjacent128_shift_plan.txt](docs/SOURCE_CATALOG.md#source-8669a09b24fe4aac)
- [section7_adjacent128_table_definition.txt](docs/SOURCE_CATALOG.md#source-c1af31e5e1bc5f61)
- [section7_adjacent128_tail_redundancy.txt](docs/SOURCE_CATALOG.md#source-5c56fddba63edd47)
- [section7_audio_block_layout.txt](docs/SOURCE_CATALOG.md#source-4d3c4daeea71679f)
- [section7_audio_block_size.txt](docs/SOURCE_CATALOG.md#source-7f85bd7aa45827a8)
- [section7_audio_block_trigger.txt](docs/SOURCE_CATALOG.md#source-63e66258f1624e1d)
- [section7_audio_sample_format.txt](docs/SOURCE_CATALOG.md#source-f997baac20c0695e)
- [section7_audio_sample_rate.txt](docs/SOURCE_CATALOG.md#source-e555f5165ec5f7db)
- [section7_block_rate.txt](docs/SOURCE_CATALOG.md#source-815950c2c367073e)
- [section7_clock_tree_init.txt](docs/SOURCE_CATALOG.md#source-c6f8615f16eb5eee)
- [section7_coldfire_core_fingerprint.txt](docs/SOURCE_CATALOG.md#source-0a64e0cc0ba6213b)
- [section7_compacted_map_decoder_placement.txt](docs/SOURCE_CATALOG.md#source-ba43770eae01e0ff)
- [section7_container_extent.txt](docs/SOURCE_CATALOG.md#source-3870055605abddc0)
- [section7_container_growth_test.txt](docs/SOURCE_CATALOG.md#source-dda8ae345db9918d)
- [section7_core_frequency.txt](docs/SOURCE_CATALOG.md#source-e1350a4291e2b4e5)
- [section7_cpu_identity_and_timing_model.txt](docs/SOURCE_CATALOG.md#source-14deff85a66378a2)
- [section7_current_extent.txt](docs/SOURCE_CATALOG.md#source-215ebad512363a6b)
- [section7_dispatcher_original_cfg.txt](docs/SOURCE_CATALOG.md#source-f6026141996682c3)
- [section7_dispatcher_reclaimed_exec_bytes.txt](docs/SOURCE_CATALOG.md#source-4b67f2a87aeedd59)
- [section7_dslot_address_domain.txt](docs/SOURCE_CATALOG.md#source-2fa16ea5420d9c32)
- [section7_dslot_cache_attributes.txt](docs/SOURCE_CATALOG.md#source-ecbe5daa8ce94d3d)
- [section7_e0_vs_e12_familyindex_differential.txt](docs/SOURCE_CATALOG.md#source-63db882371d2eb79)
- [section7_e12_A_B_roles.txt](docs/SOURCE_CATALOG.md#source-46623e0f14a56333)
- [section7_e12_audio_output_point.txt](docs/SOURCE_CATALOG.md#source-c9a9e829cf6c169a)
- [section7_e12_audio_poc_binary_diff.txt](docs/SOURCE_CATALOG.md#source-4578e03fe879b8f2)
- [section7_e12_audio_poc_cost.txt](docs/SOURCE_CATALOG.md#source-0eb5b6ae1c636bdd)
- [section7_e12_audio_poc_disassembly.txt](docs/SOURCE_CATALOG.md#source-3f202eb095aac45b)
- [section7_e12_audio_poc_preservation.txt](docs/SOURCE_CATALOG.md#source-4b65f2bf511ae0bb)
- [section7_e12_audio_poc_roundtrip.txt](docs/SOURCE_CATALOG.md#source-83ab89e8764cf70b)
- [section7_e12_b0_value_control.txt](docs/SOURCE_CATALOG.md#source-d19c8ecadc46d4b2)
- [section7_e12_code_placement_candidates.txt](docs/SOURCE_CATALOG.md#source-c12a44ba639efefb)
- [section7_e12_crosspair_candidates.txt](docs/SOURCE_CATALOG.md#source-e9d30bd23cf10318)
- [section7_e12_crosspair_distinct_state.txt](docs/SOURCE_CATALOG.md#source-dee27f44deafed91)
- [section7_e12_crosspair_isolation.txt](docs/SOURCE_CATALOG.md#source-4eed62b396df0dbf)
- [section7_e12_existing_state_switches.txt](docs/SOURCE_CATALOG.md#source-6cdbcd9c9103c525)
- [section7_e12_handler_entries.txt](docs/SOURCE_CATALOG.md#source-8741bd042095a533)
- [section7_e12_minimal_math_validation.txt](docs/SOURCE_CATALOG.md#source-957ce853952fb44d)
- [section7_e12_minimal_patch_audio_survival.txt](docs/SOURCE_CATALOG.md#source-7e53fa683432dabd)
- [section7_e12_minimal_patch_entry.txt](docs/SOURCE_CATALOG.md#source-c6b5544fcdff3147)
- [section7_e12_postdispatch_domain_safety.txt](docs/SOURCE_CATALOG.md#source-24754e1077fcd9f5)
- [section7_e12_unique_handler_design.txt](docs/SOURCE_CATALOG.md#source-2ae6c5ba63b52357)
- [section7_e12_unique_handler_domain_safety.txt](docs/SOURCE_CATALOG.md#source-32a7cb87a42c891c)
- [section7_e12_unused_parameter_bits.txt](docs/SOURCE_CATALOG.md#source-275ab66aa7aa2312)
- [section7_e12_wrapper_placement.txt](docs/SOURCE_CATALOG.md#source-a21bfd2ed672dc39)
- [section7_end_boundary_references.txt](docs/SOURCE_CATALOG.md#source-0fa0b9dbc990f515)
- [section7_exact45_inplace_rewrite.txt](docs/SOURCE_CATALOG.md#source-de04af0d450e41bf)
- [section7_exact45_raw_liveness.txt](docs/SOURCE_CATALOG.md#source-40dd153106893355)
- [section7_extension_budget.txt](docs/SOURCE_CATALOG.md#source-5025741113ad5425)
- [section7_extension_call_reach.txt](docs/SOURCE_CATALOG.md#source-4ab7f4032adb877b)
- [section7_extension_runtime_overlap.txt](docs/SOURCE_CATALOG.md#source-c58a0d5b149266ce)
- [section7_family0_AB_exact_abi.txt](docs/SOURCE_CATALOG.md#source-ee4c1fbbba57f31a)
- [section7_family0_D4_liveness.txt](docs/SOURCE_CATALOG.md#source-6d813632007a8a22)
- [section7_family0_internal_entry_inventory.txt](docs/SOURCE_CATALOG.md#source-729eca75ca21cdc9)
- [section7_family12_altentry_distinct_state.txt](docs/SOURCE_CATALOG.md#source-62f6ceede0213446)
- [section7_family12_altentry_preconditions.txt](docs/SOURCE_CATALOG.md#source-5dc6bddf0ccf2839)
- [section7_family12_altentry_safety.txt](docs/SOURCE_CATALOG.md#source-a5a35cfabd6af2c3)
- [section7_family12_compacted_local_layout.txt](docs/SOURCE_CATALOG.md#source-558170dc333683f4)
- [section7_family12_domain_audit.txt](docs/SOURCE_CATALOG.md#source-246226e32bd0e084)
- [section7_family12_exec_wrapper_placement.txt](docs/SOURCE_CATALOG.md#source-866eb3c2ce60a5dc)
- [section7_family12_existing_branch_arm.txt](docs/SOURCE_CATALOG.md#source-09981e3d3b845942)
- [section7_family12_existing_exec_entry_candidates.txt](docs/SOURCE_CATALOG.md#source-f5e99fb275368422)
- [section7_family12_extension_plan.txt](docs/SOURCE_CATALOG.md#source-013c95eb201e954a)
- [section7_family12_first_distinct_behavior.txt](docs/SOURCE_CATALOG.md#source-6d1b3cf2e72bd766)
- [section7_family12_local_code_budget.txt](docs/SOURCE_CATALOG.md#source-29e107eb3450ffe8)
- [section7_family12_local_slack_exec_viability.txt](docs/SOURCE_CATALOG.md#source-fc262010468a903f)
- [section7_family12_micro_wrapper.txt](docs/SOURCE_CATALOG.md#source-b741d696f9ddb738)
- [section7_family12_min_wrapper_encoding.txt](docs/SOURCE_CATALOG.md#source-fb8f36ca73f7fafb)
- [section7_family12_minimal_perturbation.txt](docs/SOURCE_CATALOG.md#source-c9446ae4d3a7c3b5)
- [section7_family12_packed_candidate_diff.txt](docs/SOURCE_CATALOG.md#source-9bb35ec46d3b429d)
- [section7_family12_packed_candidate_disassembly.txt](docs/SOURCE_CATALOG.md#source-422a3331412baf68)
- [section7_family12_packed_candidate_roundtrip.txt](docs/SOURCE_CATALOG.md#source-bc2d15b90b34d4d4)
- [section7_family12_postdonor_write_option.txt](docs/SOURCE_CATALOG.md#source-2fcb26eb987eacbf)
- [section7_family12_provable_perturbation.txt](docs/SOURCE_CATALOG.md#source-1df79525fe8c0837)
- [section7_family12_skipped_prefix_dependencies.txt](docs/SOURCE_CATALOG.md#source-72cb68d70251824a)
- [section7_family12_wrapper_isolation.txt](docs/SOURCE_CATALOG.md#source-a1fc0bc30a728f10)
- [section7_family12_wrapper_side_effects.txt](docs/SOURCE_CATALOG.md#source-4f6e2cfc0430453f)
- [section7_family1_exact45_predicate.txt](docs/SOURCE_CATALOG.md#source-ef269acf968de9c4)
- [section7_family1_existing_users_preserved.txt](docs/SOURCE_CATALOG.md#source-8b276480209d2840)
- [section7_family1_output_point.txt](docs/SOURCE_CATALOG.md#source-83c92a38526f68dc)
- [section7_family_index_lifetime.txt](docs/SOURCE_CATALOG.md#source-a10bcbe8c2770a2d)
- [section7_family_index_postdispatch_consumers.txt](docs/SOURCE_CATALOG.md#source-c39a1b662293d8e9)
- [section7_family_index_stored_state.txt](docs/SOURCE_CATALOG.md#source-49680f0a73938dc5)
- [section7_family_inventory.txt](docs/SOURCE_CATALOG.md#source-672b2cf2d39ae393)
- [section7_familychange_A0_liveness.txt](docs/SOURCE_CATALOG.md#source-c926169b6fe89087)
- [section7_familychange_A6_liveness.txt](docs/SOURCE_CATALOG.md#source-c2ec6cb802c94c64)
- [section7_familychange_D0_liveness.txt](docs/SOURCE_CATALOG.md#source-87b36f0a9df2a2cc)
- [section7_familychange_D4_role.txt](docs/SOURCE_CATALOG.md#source-6ec70cb52a754f6e)
- [section7_familychange_D6_liveness.txt](docs/SOURCE_CATALOG.md#source-1d5c7d051808615d)
- [section7_familychange_ccr_x_liveness.txt](docs/SOURCE_CATALOG.md#source-448063a3e782ff09)
- [section7_familychange_complete_boundary_qualification.txt](docs/SOURCE_CATALOG.md#source-18872fbc93e28209)
- [section7_familychange_original_call_boundary.txt](docs/SOURCE_CATALOG.md#source-ee70c2bb5ee3be5b)
- [section7_full_machine45_binary_diff.txt](docs/SOURCE_CATALOG.md#source-2548aae66f1d1fc8)
- [section7_full_machine45_disassembly.txt](docs/SOURCE_CATALOG.md#source-f0b998f37dd8f2fe)
- [section7_growth_later_section_effects.txt](docs/SOURCE_CATALOG.md#source-716be51b57dcb093)
- [section7_growth_probe_runtime_model.txt](docs/SOURCE_CATALOG.md#source-5f3ecdd143f4bdf3)
- [section7_independent_audio_sink_candidates.txt](docs/SOURCE_CATALOG.md#source-7d24f563969c8fe2)
- [section7_internal_sram_load_timing.txt](docs/SOURCE_CATALOG.md#source-884c21563bc12dff)
- [section7_internal_sram_mapping.txt](docs/SOURCE_CATALOG.md#source-b3555f45e79a59eb)
- [section7_linear_mapping_tail_qualification.txt](docs/SOURCE_CATALOG.md#source-4d2d5fc6804e47bc)
- [section7_load_base.txt](docs/SOURCE_CATALOG.md#source-b2361bb8f7ae10a8)
- [section7_loaded_address_extent.txt](docs/SOURCE_CATALOG.md#source-75623a9d6c4211c2)
- [section7_loader_length_semantics.txt](docs/SOURCE_CATALOG.md#source-c7d2f21f3b4982da)
- [section7_loader_size_semantics.txt](docs/SOURCE_CATALOG.md#source-7e3b73cae87df450)
- [section7_low_prefix_to_T_map.txt](docs/SOURCE_CATALOG.md#source-8b4ed677309b774d)
- [section7_machine45_eight_params.txt](docs/SOURCE_CATALOG.md#source-1f74ea317df738db)
- [section7_machine45_existing_handler_combo.txt](docs/SOURCE_CATALOG.md#source-65172441009444e8)
- [section7_machine45_space_audit.txt](docs/SOURCE_CATALOG.md#source-0ab5a608dfd8f76c)
- [section7_maximum_safe_extension.txt](docs/SOURCE_CATALOG.md#source-9a9e0bb17099567a)
- [section7_natural_e12_route.txt](docs/SOURCE_CATALOG.md#source-001dc7d29f46c9a6)
- [section7_natural_family12_abi.txt](docs/SOURCE_CATALOG.md#source-b7b8448dd0783082)
- [section7_natural_family12_words.txt](docs/SOURCE_CATALOG.md#source-f4f08002d7efa355)
- [section7_new_machine_minimal_abi.txt](docs/SOURCE_CATALOG.md#source-30d38fc78e1a7131)
- [section7_old_end_startup_copy_semantics.txt](docs/SOURCE_CATALOG.md#source-80163166a6030166)
- [section7_old_size_constant_uses.txt](docs/SOURCE_CATALOG.md#source-54cfec4b43fd704e)
- [section7_outer_loader_path.txt](docs/SOURCE_CATALOG.md#source-b05eef26e94626d1)
- [section7_overlap_mapping_identity.txt](docs/SOURCE_CATALOG.md#source-59fd7ddd9ab98f67)
- [section7_overlap_paradox_resolution.txt](docs/SOURCE_CATALOG.md#source-c8b297f03495d3da)
- [section7_overlap_postclear_consumers.txt](docs/SOURCE_CATALOG.md#source-46f8e71e90f2d483)
- [section7_overlap_postclear_restore.txt](docs/SOURCE_CATALOG.md#source-ed77948caf9e31e8)
- [section7_overlap_tail_classification.txt](docs/SOURCE_CATALOG.md#source-2a5086b8b9afbcce)
- [section7_packed_dispatcher_cfg.txt](docs/SOURCE_CATALOG.md#source-6f5133b630d81ce8)
- [section7_packed_map_a6_call_boundary.txt](docs/SOURCE_CATALOG.md#source-824b05a959a65d1b)
- [section7_packed_map_call_boundary_diff.txt](docs/SOURCE_CATALOG.md#source-046318036dc0f6dc)
- [section7_packed_map_domain_equivalence.txt](docs/SOURCE_CATALOG.md#source-192057c476ebb703)
- [section7_packed_map_remaining_register_diff.txt](docs/SOURCE_CATALOG.md#source-e866b9c9d74d7bbc)
- [section7_packed_map_state_preserving_decoder.txt](docs/SOURCE_CATALOG.md#source-1511106be2452261)
- [section7_peripheral_map_fingerprint.txt](docs/SOURCE_CATALOG.md#source-348ba13720d73164)
- [section7_post_end_owner.txt](docs/SOURCE_CATALOG.md#source-741581f4e5f37185)
- [section7_post_image_memory_map.txt](docs/SOURCE_CATALOG.md#source-2db32ff4be4ca9d0)
- [section7_postimage_memory_headroom.txt](docs/SOURCE_CATALOG.md#source-261dfcae2e6539fa)
- [section7_raw1_vs_raw45_differential.txt](docs/SOURCE_CATALOG.md#source-be27ac43b6137084)
- [section7_raw_selector_all_consumers.txt](docs/SOURCE_CATALOG.md#source-202679d6c70c908e)
- [section7_raw_selector_indexed_tables.txt](docs/SOURCE_CATALOG.md#source-d0ec47f9872d9805)
- [section7_raw_selector_postmap_uses.txt](docs/SOURCE_CATALOG.md#source-75b638d728e687d3)
- [section7_raw_selector_value_branches.txt](docs/SOURCE_CATALOG.md#source-9f90f344e43c8831)
- [section7_redundant_family_slot.txt](docs/SOURCE_CATALOG.md#source-b3384aabf01d001d)
- [section7_runtime_execution_address_model.txt](docs/SOURCE_CATALOG.md#source-99d77d8edf36854c)
- [section7_selector0_44_preservation.txt](docs/SOURCE_CATALOG.md#source-346fea6fabdd93c5)
- [section7_selector45_audio_hook.txt](docs/SOURCE_CATALOG.md#source-dd43443ea38ac786)
- [section7_selector45_combined_roundtrip.txt](docs/SOURCE_CATALOG.md#source-98e394bb06b5dc04)
- [section7_selector45_current_path.txt](docs/SOURCE_CATALOG.md#source-24959e9d7c842b02)
- [section7_selector45_data_only_distinction.txt](docs/SOURCE_CATALOG.md#source-3727c28f21127105)
- [section7_selector45_gate_bypass_design.txt](docs/SOURCE_CATALOG.md#source-9be8721a7da61c4d)
- [section7_selector45_gate_bypass_domain_safety.txt](docs/SOURCE_CATALOG.md#source-951f30f7cec5647d)
- [section7_selector45_gate_bypass_site.txt](docs/SOURCE_CATALOG.md#source-ebdfd18a94e01093)
- [section7_selector45_gate_raw_liveness.txt](docs/SOURCE_CATALOG.md#source-aab58e47a7af9e48)
- [section7_selector45_gate_repeat_safety.txt](docs/SOURCE_CATALOG.md#source-1f9984bae4948036)
- [section7_selector45_hook_options.txt](docs/SOURCE_CATALOG.md#source-1d7fb9e50ebd4274)
- [section7_selector45_routing_candidate.txt](docs/SOURCE_CATALOG.md#source-1b065c6f0e5dc12b)
- [section7_selector45_stateless_transform.txt](docs/SOURCE_CATALOG.md#source-20db43d8652464d8)
- [section7_selector45_temporary_family.txt](docs/SOURCE_CATALOG.md#source-98a2c39c8de0368f)
- [section7_selector_dispatch_complete.txt](docs/SOURCE_CATALOG.md#source-753c2ff641c9de27)
- [section7_selector_domain_equivalence.txt](docs/SOURCE_CATALOG.md#source-8596930a02747250)
- [section7_selector_map_compaction_options.txt](docs/SOURCE_CATALOG.md#source-861d7cd002ac2851)
- [section7_selector_map_exact_values.txt](docs/SOURCE_CATALOG.md#source-1709f07db6fef53c)
- [section7_selector_map_min_decoder.txt](docs/SOURCE_CATALOG.md#source-fcc30a79b15f2b7d)
- [section7_selector_map_reader_inventory.txt](docs/SOURCE_CATALOG.md#source-d801975501204ee1)
- [section7_selector_refresh_gate_exact.txt](docs/SOURCE_CATALOG.md#source-a98f01560df1c259)
- [section7_selector_refresh_gate_source.txt](docs/SOURCE_CATALOG.md#source-748d0c3680781ca7)
- [section7_startup_clear_exact_iteration.txt](docs/SOURCE_CATALOG.md#source-aa053f1a5d237d0e)
- [section7_startup_ordering_overlap.txt](docs/SOURCE_CATALOG.md#source-996e9ee08d5d23ae)
- [section7_startup_write_semantics.txt](docs/SOURCE_CATALOG.md#source-6e4d07ba44510b4f)
- [section7_tail_data_vs_code_viability.txt](docs/SOURCE_CATALOG.md#source-ba76829237b16a49)
- [section7_variable_length_repack_requirements.txt](docs/SOURCE_CATALOG.md#source-2842e57d535a1c67)
- [section7_voice_iteration_outputs.txt](docs/SOURCE_CATALOG.md#source-675d0eca756235e7)

</details>

<details>
<summary>V1/V2 reference algorithms, candidates and performance — 115 files</summary>

- [machine45_v1_actual_parameter_semantics.txt](docs/SOURCE_CATALOG.md#source-70c3e2a8ef4d8627)
- [machine45_v1_binary_diff.txt](docs/SOURCE_CATALOG.md#source-7ffc190fc386bbd6)
- [machine45_v1_candidate_base_verification.txt](docs/SOURCE_CATALOG.md#source-90aa6dc688fad0de)
- [machine45_v1_candidate_disassembly.txt](docs/SOURCE_CATALOG.md#source-639609b1d88bc9f4)
- [machine45_v1_candidate_donor_preservation.txt](docs/SOURCE_CATALOG.md#source-7996ff70a8ef4ae5)
- [machine45_v1_candidate_equation_validation.txt](docs/SOURCE_CATALOG.md#source-a3ec99d8538e38c5)
- [machine45_v1_candidate_roundtrip.txt](docs/SOURCE_CATALOG.md#source-66723636cac9c013)
- [machine45_v1_candidate_static_cost.txt](docs/SOURCE_CATALOG.md#source-3d8ec92bda696a4b)
- [machine45_v1_donor_fastpath.txt](docs/SOURCE_CATALOG.md#source-88681f3e9683a74a)
- [machine45_v1_donor_reuse_boundary.txt](docs/SOURCE_CATALOG.md#source-660f9a762a089b0a)
- [machine45_v1_e12_isolation.txt](docs/SOURCE_CATALOG.md#source-ce60a3c93cf931d8)
- [machine45_v1_e12_local_budget.txt](docs/SOURCE_CATALOG.md#source-c769bcd52386d68c)
- [machine45_v1_early_e12_branch.txt](docs/SOURCE_CATALOG.md#source-f666febc4f785fde)
- [machine45_v1_fastpath_preservation.txt](docs/SOURCE_CATALOG.md#source-a6e8f9ede02323b4)
- [machine45_v1_fastpath_render_design.txt](docs/SOURCE_CATALOG.md#source-fb93c0f41e73fc95)
- [machine45_v1_full_static_chain.txt](docs/SOURCE_CATALOG.md#source-f19f065f4292a279)
- [machine45_v1_helper_cadence.txt](docs/SOURCE_CATALOG.md#source-9660063ffbf09fa5)
- [machine45_v1_host_model_equivalence.txt](docs/SOURCE_CATALOG.md#source-f1d2c336d826c261)
- [machine45_v1_host_model_spec.txt](docs/SOURCE_CATALOG.md#source-dfe90895b9c66470)
- [machine45_v1_numeric_safety.txt](docs/SOURCE_CATALOG.md#source-a969fd7bf2574b17)
- [machine45_v1_parameter_integration.txt](docs/SOURCE_CATALOG.md#source-b40ed2ffb559ad8a)
- [machine45_v1_parameter_locality.txt](docs/SOURCE_CATALOG.md#source-3edfcb5f8d44b515)
- [machine45_v1_patch_composition.txt](docs/SOURCE_CATALOG.md#source-f4325249c120b293)
- [machine45_v1_pathology_sweep.txt](docs/SOURCE_CATALOG.md#source-763fd8f91397f279)
- [machine45_v1_reference_audio_manifest.txt](docs/SOURCE_CATALOG.md#source-f2ff554e391332c7)
- [machine45_v1_render_equation.txt](docs/SOURCE_CATALOG.md#source-160a991c5ba5c651)
- [machine45_v1_render_placement.txt](docs/SOURCE_CATALOG.md#source-3b458f4c45742599)
- [machine45_v1_render_point.txt](docs/SOURCE_CATALOG.md#source-9d706419d36944c8)
- [machine45_v1_render_state.txt](docs/SOURCE_CATALOG.md#source-e4644cd2cf3fe50b)
- [machine45_v1_spectral_characterization.txt](docs/SOURCE_CATALOG.md#source-1410b567deb813ce)
- [machine45_v1_static_performance.txt](docs/SOURCE_CATALOG.md#source-253a4ee762c35a07)
- [machine45_v1_waveform_characterization.txt](docs/SOURCE_CATALOG.md#source-8b7570635dba53aa)
- [machine45_v2_binary_diff.txt](docs/SOURCE_CATALOG.md#source-226d26e7ca3c3b60)
- [machine45_v2_binary_equivalence_plan.txt](docs/SOURCE_CATALOG.md#source-0076bc8ff8c936fe)
- [machine45_v2_block_cycle_scaling.txt](docs/SOURCE_CATALOG.md#source-678460e26d596bd0)
- [machine45_v2_branch_cost_dominance.txt](docs/SOURCE_CATALOG.md#source-45965e21b5144e2d)
- [machine45_v2_branchless_binary_diff.txt](docs/SOURCE_CATALOG.md#source-3ac7e091d00ed145)
- [machine45_v2_branchless_candidate_base_verification.txt](docs/SOURCE_CATALOG.md#source-a0c4ffa9716bc1f1)
- [machine45_v2_branchless_candidate_disassembly.txt](docs/SOURCE_CATALOG.md#source-504649ecfff57cf0)
- [machine45_v2_branchless_candidate_equivalence.txt](docs/SOURCE_CATALOG.md#source-adcc7d51b963ef87)
- [machine45_v2_branchless_candidate_roundtrip.txt](docs/SOURCE_CATALOG.md#source-57dfc3cf9696493b)
- [machine45_v2_branchless_composition.txt](docs/SOURCE_CATALOG.md#source-e5fd0f09642ba705)
- [machine45_v2_branchless_execution_shape.txt](docs/SOURCE_CATALOG.md#source-6fbf9596b40b4467)
- [machine45_v2_branchless_fold_byte_budget.txt](docs/SOURCE_CATALOG.md#source-55a64bb430cdd138)
- [machine45_v2_branchless_fold_equivalence.txt](docs/SOURCE_CATALOG.md#source-d99ea9d6865e462c)
- [machine45_v2_branchless_relative_timing_summary.txt](docs/SOURCE_CATALOG.md#source-4d4a5048ebe20ba9)
- [machine45_v2_branchless_symbolic_difference.txt](docs/SOURCE_CATALOG.md#source-665b8f9a55b22cd4)
- [machine45_v2_candidate_base_verification.txt](docs/SOURCE_CATALOG.md#source-e70c1f2c73288b3d)
- [machine45_v2_candidate_composition.txt](docs/SOURCE_CATALOG.md#source-58ea77bef7cdacd1)
- [machine45_v2_candidate_cost.txt](docs/SOURCE_CATALOG.md#source-ef90c5fe94076afb)
- [machine45_v2_candidate_disassembly.txt](docs/SOURCE_CATALOG.md#source-5e870e4b4199e259)
- [machine45_v2_candidate_donor_preservation.txt](docs/SOURCE_CATALOG.md#source-51ec02abf4dac92f)
- [machine45_v2_candidate_equations.txt](docs/SOURCE_CATALOG.md#source-784d3bb83bc85a91)
- [machine45_v2_candidate_equivalence.txt](docs/SOURCE_CATALOG.md#source-6268912aaebc3352)
- [machine45_v2_candidate_numeric_safety.txt](docs/SOURCE_CATALOG.md#source-1cbb19b15773a211)
- [machine45_v2_candidate_parameter_semantics.txt](docs/SOURCE_CATALOG.md#source-03f41a0f3052df39)
- [machine45_v2_candidate_roundtrip.txt](docs/SOURCE_CATALOG.md#source-0501f229abf6ee1e)
- [machine45_v2_candidate_static_cost.txt](docs/SOURCE_CATALOG.md#source-4a09b8dbe217771f)
- [machine45_v2_coldfire_cycle_model.txt](docs/SOURCE_CATALOG.md#source-5cd348803b0d356b)
- [machine45_v2_control_continuity.txt](docs/SOURCE_CATALOG.md#source-95642dff60798fb9)
- [machine45_v2_control_path_cost_classes.txt](docs/SOURCE_CATALOG.md#source-fdacac26bcc836ee)
- [machine45_v2_core_specific_cycle_budget.txt](docs/SOURCE_CATALOG.md#source-f9e8d6223b852463)
- [machine45_v2_core_specific_timing_terms.txt](docs/SOURCE_CATALOG.md#source-94d5f0f34731d952)
- [machine45_v2_cycle_budget.txt](docs/SOURCE_CATALOG.md#source-beff6727d76e0c9e)
- [machine45_v2_donor_cycle_comparison.txt](docs/SOURCE_CATALOG.md#source-f09a9dd116b5239c)
- [machine45_v2_donor_e12_phase_alignment.txt](docs/SOURCE_CATALOG.md#source-13946c4d772962a6)
- [machine45_v2_donor_preservation.txt](docs/SOURCE_CATALOG.md#source-21c3e6aed6873d20)
- [machine45_v2_donor_reference_domain.txt](docs/SOURCE_CATALOG.md#source-627a5e9144697479)
- [machine45_v2_dslot8_cache_locality.txt](docs/SOURCE_CATALOG.md#source-459af786668f3e45)
- [machine45_v2_dslot8_caller_provenance.txt](docs/SOURCE_CATALOG.md#source-eb65c61da60edd84)
- [machine45_v2_dslot8_donor_sram_class.txt](docs/SOURCE_CATALOG.md#source-bafe06c6cea1f023)
- [machine45_v2_dslot8_load_elimination_design.txt](docs/SOURCE_CATALOG.md#source-8e814984deb37c3a)
- [machine45_v2_dslot8_load_use_chain.txt](docs/SOURCE_CATALOG.md#source-c4fc4217c9b734b2)
- [machine45_v2_dslot8_memory_class.txt](docs/SOURCE_CATALOG.md#source-ebccd7bfe58dc798)
- [machine45_v2_dslot8_memory_resolved_delta.txt](docs/SOURCE_CATALOG.md#source-5fd7cf84ca26ebc4)
- [machine45_v2_dslot8_physical_access.txt](docs/SOURCE_CATALOG.md#source-ce2777f317c65e57)
- [machine45_v2_dslot8_preexisting_value.txt](docs/SOURCE_CATALOG.md#source-fadc959ea6f5cbb4)
- [machine45_v2_dslot8_semantic_identity.txt](docs/SOURCE_CATALOG.md#source-7d03a512f9ce2ff6)
- [machine45_v2_dslot8_symbolic_update.txt](docs/SOURCE_CATALOG.md#source-fc4f588d92658254)
- [machine45_v2_dslot8_timing_resolution.txt](docs/SOURCE_CATALOG.md#source-f3e937bba3ef9acf)
- [machine45_v2_eight_slot_relative_bound.txt](docs/SOURCE_CATALOG.md#source-5c45534854c408be)
- [machine45_v2_emac_dependency_dominance.txt](docs/SOURCE_CATALOG.md#source-611fc7f7fb93552c)
- [machine45_v2_encoded_sonic_regression.txt](docs/SOURCE_CATALOG.md#source-787b95e3ab03b469)
- [machine45_v2_exact_byte_budget.txt](docs/SOURCE_CATALOG.md#source-0a78055e17e121ff)
- [machine45_v2_exact_design_readiness.txt](docs/SOURCE_CATALOG.md#source-8a9c0b2bd483306c)
- [machine45_v2_exact_instruction_design.txt](docs/SOURCE_CATALOG.md#source-889af4a54d343b57)
- [machine45_v2_exact_math_contract.txt](docs/SOURCE_CATALOG.md#source-72dc2403488f6efd)
- [machine45_v2_exact_static_cost.txt](docs/SOURCE_CATALOG.md#source-e55409d33a0428e6)
- [machine45_v2_full_static_chain.txt](docs/SOURCE_CATALOG.md#source-2476f5df9234ecd2)
- [machine45_v2_helper_cycle_bound.txt](docs/SOURCE_CATALOG.md#source-49b7e7570f5c0cfe)
- [machine45_v2_host_model_validation.txt](docs/SOURCE_CATALOG.md#source-9b2a52233199e20c)
- [machine45_v2_instruction_class_inventory.txt](docs/SOURCE_CATALOG.md#source-ace390d83d6104d0)
- [machine45_v2_memory_access_dominance.txt](docs/SOURCE_CATALOG.md#source-0dcc91c2d74ff5f1)
- [machine45_v2_minimum_clock_requirement.txt](docs/SOURCE_CATALOG.md#source-68acf3d2be127ced)
- [machine45_v2_operand_liveness.txt](docs/SOURCE_CATALOG.md#source-15698b5abb517088)
- [machine45_v2_patch_composition.txt](docs/SOURCE_CATALOG.md#source-1ae0683dffab7169)
- [machine45_v2_preferred_design.txt](docs/SOURCE_CATALOG.md#source-4a673a591ce5390e)
- [machine45_v2_reference_audio_manifest.txt](docs/SOURCE_CATALOG.md#source-c3d4a044312da06c)
- [machine45_v2_relative_timing_blocker.txt](docs/SOURCE_CATALOG.md#source-c3bc4146b8d77a6a)
- [machine45_v2_reuse_contract.txt](docs/SOURCE_CATALOG.md#source-ec1046780a0a1e64)
- [machine45_v2_runtime_cadence_clock.txt](docs/SOURCE_CATALOG.md#source-4fb598cfc7c0ea3e)
- [machine45_v2_runtime_execution_domain.txt](docs/SOURCE_CATALOG.md#source-b61f78c9a2cd6f54)
- [machine45_v2_sign_fold_branchless_math.txt](docs/SOURCE_CATALOG.md#source-735aea6901253d7f)
- [machine45_v2_sign_fold_exact_semantics.txt](docs/SOURCE_CATALOG.md#source-39a55ee0fe1e0ff6)
- [machine45_v2_sign_fold_instruction_candidates.txt](docs/SOURCE_CATALOG.md#source-8b13724925d0a9b6)
- [machine45_v2_sign_fold_register_liveness.txt](docs/SOURCE_CATALOG.md#source-c4bc84e0dbbf3287)
- [machine45_v2_slot_cost_dominance.txt](docs/SOURCE_CATALOG.md#source-983c9ad84e36fccd)
- [machine45_v2_spectral_comparison.txt](docs/SOURCE_CATALOG.md#source-67b64902031cc47c)
- [machine45_v2_static_performance_closure.txt](docs/SOURCE_CATALOG.md#source-4285232af0501373)
- [machine45_v2_structural_timing_risks.txt](docs/SOURCE_CATALOG.md#source-f545980ce48ec80b)
- [machine45_v2_symbolic_cost_difference.txt](docs/SOURCE_CATALOG.md#source-69b197bb1b81f0ff)
- [machine45_v2_symbolic_cycle_expressions.txt](docs/SOURCE_CATALOG.md#source-77c4d74aa7d5f6dd)
- [machine45_v2_tune_cleanup.txt](docs/SOURCE_CATALOG.md#source-7f3a91e3b57029da)
- [machine45_v2_tune_cleanup_exact.txt](docs/SOURCE_CATALOG.md#source-8958f38434d86030)
- [machine45_v2_two_state_read_timing_class.txt](docs/SOURCE_CATALOG.md#source-6a23b3d1876226f5)

</details>

Census count: **803 existing evidence files**. File sizes, hashes and publication
categories are in `workspace_inventory.json`; locations are not verification claims.
**All original files and frozen binaries remain unchanged.**
