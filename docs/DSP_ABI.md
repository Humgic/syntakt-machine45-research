# Installation-independent DSP source ABI

Canonical header: [machine45_dsp_api.h](../include/machine45_dsp_api.h).
This is an independently authored **source contract**, not a native ColdFire call
binding, packed transport structure, installer or running device plugin host.

| Concept | Contract |
| --- | --- |
| Controls | Exactly eight received raw uint16_t values, in physical knob order |
| Private state | Declared 0–72 bytes, at least four-byte alignment; optional/stateless is allowed |
| Output | Signed int32_t local generation sample; not an assertion about final DAC PCM |
| Process | Scalar call with supplied context; retained host geometry has 32 positions per sibling lane |
| Init | Optional unless declared required |
| Reset | Optional explicit operation; no automatic device reset event is bound |

Raw controls are received values after existing upstream processing, not guaranteed
instantaneous knob positions or uniform 0–127 human units. No firmware offset,
Machine ID, executable address, heap ownership or final sample clock is part of
the module API. Modules must not retain borrowed context/parameter/state pointers
beyond the documented ownership period.

## Private state certificate

The original 72-byte loan was qualified only while actual family 12 owns the retained
host profile. Other families use that storage. It is not globally free RAM, code
storage, an allocation or a saved Sound field. Rebinding the host or changing its
schedule requires rechecking ownership. Arbitrary reset/reactivation persistence
and third-party writes were not demonstrated.

## Layers and missing backend

1. DSP module: stable controls/state/output source declarations.
2. Host adapter: device-specific parameter decoding, local-output routing and ABI
   preservation, independent of where the module is ultimately installed.
3. Installation backend: qualified executable storage/lifetime, code capacity,
   process/init binding, relocation and cache/CCR/EMAC policy. **Unavailable.**

The private SDK has offline reference modules and tests, but they are not packaged
here: some test assets contain firmware-derived coefficients and require separate
licensing/data-boundary review. There is no native binary, target toolchain,
deployable module package or promised installation address in this repository.
Passing source/offline checks must never be called device-runnable.
