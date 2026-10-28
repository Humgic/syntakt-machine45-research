# Syntakt Machine45 research handoff

Research into adding a genuinely independent **46th Machine (public ID 45)** to
Elektron Syntakt while retaining stock IDs 0–44. Initial integration should reuse
an existing renderer to prove the lifecycle, rather than replace SY TONE or ship
a new sound design first.

**Research documentation and a source-level DSP API; no installable firmware mod is included.**
**RESEARCH ONLY / DO NOT FLASH.** No firmware image or proprietary code is distributed.

The public checker can verify selected stock firmware metadata. This repository
does **not** contain enough source, private evidence or patch data to reproduce
the frozen candidate. Artifact hashes identify the private files; they do not
make those files available or validate their behavior.

## Start here

- [Technical handoff](MACHINE45_TECHNICAL_HANDOFF.md): architecture, versioned
  addresses, independent identity, compact transport, dispatch and open boundaries.
- [Evidence index](EVIDENCE_INDEX.md): qualified proof chains and the private
  803-file evidence census. Catalog entries provide provenance, not source contents.
- [Issue draft](GITHUB_ISSUE_DRAFT.md): prepared for human review; not submitted.
- [Frozen baseline](docs/FROZEN_BASELINE.md): exact private artifact hashes and scope.
- [DSP source ABI](docs/DSP_ABI.md): eight raw controls and a placement-independent API.
- [Publication policy](docs/PUBLICATION_POLICY.md): what is deliberately excluded.

## Current status

| Area | Qualification |
| --- | --- |
| Distinct MAIN raw ID 45 and recorded menu/metadata edits | Confirmed locally by static analysis |
| Public ID 45 → compact selector 45 → implementation family e12 | Strongly supported composed path; peer timing/coherency unobserved |
| Eight native parameter fields and local DSP consumers | Confirmed by static analysis; complete transport strongly supported |
| Sound-v7 current-Kit Machine-byte save/load | Confirmed by static analysis on the recovered accepted-record route |
| Standalone Sound application and Pattern Machine restoration | Unproven |
| Enter/leave 45, Sound-lock precedence, complete p-lock lifecycle | Not verified end-to-end |
| Arbitrary native DSP installation | Blocked / unproven |
| Device acceptance, audibility and runtime performance | Untested / unproven |

There is **no claim of a completed hardware-working new Machine**. Host arithmetic
and bounded instruction-model results are distinct from whole-device emulation
and hardware validation. The original private V2 candidate remains frozen.

## Small read-only check

Python standard library only. Supply your own legitimately extracted **stock 1.41**
sections; no images are included here:

```sh
python3 tools/check_stock_metadata.py --main path/to/main.bin --section7 path/to/section7.bin
```

The tool checks exact input hashes and selected metadata. It does not validate the
private candidate or a complete Machine lifecycle, and it does not write firmware
or access hardware. No dependencies or global setup are required.

## Community context

The handoff is intended to complement [SyntHack OS](https://github.com/Angelo-politek/Synthack-OS)
and [SY FM4](https://github.com/Rxuting/sy-fm4), not duplicate their frameworks.
FM4 extends existing Machine 4; this research concerns separate public identity 45.
Resource allocation, shared CPU 2 loading and version ports should be coordinated
with their maintainers. See the pinned source versions in
[UPSTREAM_SOURCES.json](metadata/UPSTREAM_SOURCES.json).

The first integration experiment should register the independent identity with
borrowed metadata and an existing renderer, then test selection, transitions and
persistence in the community emulator framework. Custom DSP installation can be
qualified separately. See the handoff's recommended implementation sequence.

## License and exclusions

MIT applies to the independently authored documentation, API and tool included
here. It grants no rights in Elektron firmware, code, assets or trademarks.
This project is not affiliated with or endorsed by Elektron or the cited projects.
Do not add firmware images, original opcode/disassembly dumps, captured coefficient
tables, binary diffs or deployable packages. See [LICENSE](LICENSE).
