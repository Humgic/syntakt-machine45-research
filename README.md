# Syntakt Machine45 research handoff

Research into adding a genuinely independent **46th Machine (public ID 45)** to
Elektron Syntakt while retaining stock IDs 0–44. Initial integration should reuse
an existing renderer to prove the lifecycle, rather than replace SY TONE or ship
a new sound design first.

**Documentation and an offline source API only — not an installable firmware mod.**
**RESEARCH ONLY / DO NOT FLASH.** No firmware image or proprietary code is distributed.

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
|---|---|
| Distinct MAIN raw ID45 and recorded menu/metadata edits | Confirmed locally by static analysis |
| Public ID45 → compact selector45 → e12 | Strongly supported composed path; peer timing/coherency unobserved |
| Eight native parameter fields and local DSP consumers | Confirmed locally; complete transport strongly supported |
| Sound-v7 current-Kit Machine-byte save/load | Confirmed on the recovered accepted-record route |
| Standalone Sound application and Pattern Machine restoration | Unproven |
| Enter/leave45, Sound-lock precedence, complete p-lock lifecycle | Not verified end-to-end |
| Arbitrary native DSP installation | Blocked / unproven |
| Device acceptance, audibility and runtime performance | Untested / unproven |

There is **no claim of a completed hardware-working new Machine**. Host arithmetic
and bounded instruction-model results are distinct from whole-device emulation
and hardware validation. The original private V2 candidate remains frozen.

## Small read-only check

Python standard library only. Supply your own legitimately extracted **stock 1.41**
sections; no images are included here:

```sh
python3 tools/check_stock_metadata.py --main /private/main.bin --section7 /private/section7.bin
```

The tool checks exact input hashes and selected metadata. It does not patch, build,
repack, flash, generate audio, connect to hardware or establish a complete Machine
lifecycle. No dependencies or global setup are required.

## Community context

The handoff is intended to complement [SyntHack OS](https://github.com/Angelo-politek/Synthack-OS)
and [SY FM4](https://github.com/Rxuting/sy-fm4), not duplicate their frameworks.
FM4 extends existing Machine4; this research concerns separate public identity45.
Resource allocation, shared CPU2 loading and version ports should be coordinated
with their maintainers. See the pinned source versions in
[UPSTREAM_SOURCES.json](metadata/UPSTREAM_SOURCES.json).

## License and exclusions

MIT applies to the independently authored documentation, API and tool included
here. It grants no rights in Elektron firmware, code, assets or trademarks.
This project is not affiliated with or endorsed by Elektron or the cited projects.
Do not add firmware images, original opcode/disassembly dumps, captured coefficient
tables, binary diffs or deployable packages. See [LICENSE](LICENSE).
