/*
 * Machine45 generic DSP source contract, version 1.
 * Canonical portable source ABI. Native installation is NOT available.
 * RESEARCH ONLY / DO NOT FLASH. Candidate B is a test module, not the ABI.
 *
 * Eight knobs are the only public controls. Host coordinates are infrastructure.
 * This header deliberately contains no firmware offsets, donor IDs or pointers
 * to firmware objects. It is not a packed wire structure or a ColdFire C-call ABI.
 */
#ifndef MACHINE45_DSP_API_H
#define MACHINE45_DSP_API_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MACHINE45_DSP_ABI_VERSION UINT32_C(1)
#define MACHINE45_DSP_PARAM_COUNT 8u
#define MACHINE45_DSP_BLOCK_FRAMES 32u
#define MACHINE45_DSP_PHASE_MASK UINT32_C(0x00ffffff)

/* Static capacity of the qualified retained Machine45 host profile.
 * The bank is a per-slot ownership loan while this implementation is selected;
 * it is not globally unused memory. Native pointer/callback binding is absent.
 */
#define MACHINE45_DSP_CERTIFIED_PRIVATE_STATE_BYTES 72u
#define MACHINE45_DSP_STATE_CAPACITY_BYTES 72u
#define MACHINE45_DSP_PRIVATE_STATE_ALIGNMENT 4u

/* Opaque source storage shape, not a new target allocation or wire structure.
 * The union supplies uint32_t alignment to reference implementations. An actual
 * binding must separately enforce the required four-byte pointer alignment.
 * No module may access beyond its declared state_bytes or retain this pointer
 * after its selected-implementation ownership ends. No neighboring host fields
 * are part of this storage. Private bytes are not parameters or extra controls.
 */
typedef union Machine45DSPState {
    uint32_t alignment;
    uint8_t private_state[MACHINE45_DSP_CERTIFIED_PRIVATE_STATE_BYTES];
} Machine45DSPState;

/* RAW16_RECEIVED, physical knob order: param[0] is knob 1, param[7] knob 8.
 * Numeric values preserve all received bits. No implied range, human unit,
 * normalization, signedness reinterpretation or synthesis meaning per index.
 * Host holds this snapshot read-only for one 32-frame invocation.
 */
typedef struct Machine45Params {
    uint16_t param[MACHINE45_DSP_PARAM_COUNT];
} Machine45Params;

/* Native signed word; numeric convention sample / 2^31. Not physical DAC PCM. */
typedef int32_t Machine45Sample;

/* Optional coordinates that a module may ignore. No extra public controls.
 * Nominal/effective phase are low 24-bit cycle coordinates at the current position.
 * slot: 0..7; lane: 1..3; frame: 0..31; reserved: 0.
 * Lane calls are serial sibling streams, not successive 32-frame time blocks.
 * No sample rate, absolute time, note-on/off or inactive event is supplied.
 */
typedef struct Machine45Context {
    uint32_t nominal_phase24;
    uint32_t effective_phase24;
    uint8_t slot;
    uint8_t lane;
    uint8_t frame;
    uint8_t reserved;
} Machine45Context;

/* Source requirements declaration: 0..72 private bytes in the qualified profile.
 * Zero remains NULL/stateless. Nonzero storage maps to an existing slot bank;
 * no heap/global allocation is authorized. The host owns binding/reset.
 * State must never alias host phase/history, parameter, frame or output memory.
 * These admissible source requirements do not install a native adapter.
 */
typedef struct Machine45DspRequirements {
    uint32_t abi_version;
    uint32_t state_bytes;
} Machine45DspRequirements;

/* Init/reset operations are reference lifecycle hooks, NOT installed callbacks.
 * Stateless modules accept NULL/0 and perform no state write.
 * Existing full slot initialization/family re-entry zero all certified bytes.
 * Ordinary retained processing, parameter updates and the current control reset
 * do not clear them. A future callback binding must follow the actual qualified
 * initialization edge; no note-on/off or phase-zero reset may be guessed.
 * No deactivate hook or reset on every selection gesture is defined.
 */
void machine45_dsp_init(void *private_state, uint32_t state_bytes);
void machine45_dsp_reset(void *private_state);

/* Host drives 32 positions and routes each generated sample into its existing
 * amplitude/output tail. Params/context are borrowed for this invocation only.
 * A future qualified binding may pass an aligned private pointer for nonzero
 * requirements, retaining its contents across ordinary blocks while selected.
 * A module must not retain params/context pointers, block, allocate, touch
 * transport or firmware globals. Output/intermediate arithmetic must be bounded.
 * Native assembly lowering/inlining still needs its own register/CCR certificate;
 * these declarations do not assert that an ordinary C return is the target ABI.
 */
Machine45Sample machine45_dsp_process_sample(
    void *private_state,
    const Machine45Params *params,
    const Machine45Context *context);

/* Module registration is a source-level contract, not a serialized structure
 * or a promise about a target compiler's calling convention/pointer size.
 * Immutable module assets are permitted. Mutable module globals, firmware
 * addresses, heap allocation, I/O and hidden controls are not permitted.
 */
typedef enum Machine45DSPGranularity {
    MACHINE45_DSP_SCALAR_SAMPLE = 1
} Machine45DSPGranularity;

typedef enum Machine45DSPOutputFormat {
    MACHINE45_DSP_SIGNED_INT32_Q1_31_LOCAL = 1
} Machine45DSPOutputFormat;

/* A module may restrict a raw input's supported domain without changing its
 * representation. The offline host rejects outside-domain values; it does not
 * clamp them. Generic modules normally declare [0,65535] for all eight inputs.
 */
typedef struct Machine45DSPParameterRange {
    uint16_t minimum;
    uint16_t maximum;
} Machine45DSPParameterRange;

typedef void (*Machine45DSPInit)(void *, uint32_t);
typedef void (*Machine45DSPReset)(void *);
typedef Machine45Sample (*Machine45DSPProcess)(
    void *, const Machine45Params *, const Machine45Context *);

typedef struct Machine45DSPModule {
    const char *name;
    Machine45DspRequirements requirements;
    uint32_t parameter_count;
    uint32_t process_granularity;
    uint32_t output_format;
    uint32_t init_required;
    uint32_t reset_required; /* v1 must be 0: no automatic reset event proven */
    Machine45DSPParameterRange parameter_ranges[MACHINE45_DSP_PARAM_COUNT];
    Machine45DSPInit init; /* optional when init_required == 0 */
    Machine45DSPReset reset; /* optional; explicit offline calls only */
    Machine45DSPProcess process_sample;
} Machine45DSPModule;

/* Exactly one module is linked per offline library. Its callbacks use the
 * declarations above; the same host can load either reference module.
 */
const Machine45DSPModule *machine45_dsp_get_module(void);

#ifdef __cplusplus
}
#endif

#endif /* MACHINE45_DSP_API_H */
