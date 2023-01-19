#pragma once

#include <stdint.h>

#include "hexl/c/defines.h"

FUNC NTT_Create(uint64_t degree, uint64_t q, void** ntt_v);

FUNC NTT_ComputeForward(void* thisptr, uint64_t* result,
                        const uint64_t* operand, uint64_t input_mod_factor,
                        uint64_t output_mod_factor);

FUNC NTT_ComputeInverse(void* thisptr, uint64_t* result,
                        const uint64_t* operand, uint64_t input_mod_factor,
                        uint64_t output_mod_factor);