#pragma once

#include <stdint.h>

#include "hexl/c/defines.h"

FUNC Eltwise_AddMod(uint64_t* result, const uint64_t* operand1,
                    const uint64_t* operand2, uint64_t n, uint64_t modulus);
FUNC Eltwise_AddScalarMod(uint64_t* result, const uint64_t* operand1,
                          uint64_t operand2, uint64_t n, uint64_t modulus);

FUNC Eltwise_CmpAdd(uint64_t* result, const uint64_t* operand1, uint64_t n,
                    uint64_t cmp, uint64_t bound, uint64_t diff);

FUNC Eltwise_CmpSubMod(uint64_t* result, const uint64_t* operand1, uint64_t n,
                       uint64_t modulus, uint64_t cmp, uint64_t bound,
                       uint64_t diff);

FUNC Eltwise_FMAMod(uint64_t* result, const uint64_t* arg1, uint64_t arg2,
                    const uint64_t* arg3, uint64_t n, uint64_t modulus,
                    uint64_t input_mod_factor);

FUNC Eltwise_MultMod(uint64_t* result, const uint64_t* operand1,
                     const uint64_t* operand2, uint64_t n, uint64_t modulus,
                     uint64_t input_mod_factor);

FUNC Eltwise_ReduceMod(uint64_t* result, const uint64_t* operand, uint64_t n,
                       uint64_t modulus, uint64_t input_mod_factor,
                       uint64_t output_mod_factor);

FUNC Eltwise_SubMod(uint64_t* result, const uint64_t* operand1,
                    const uint64_t* operand2, uint64_t n, uint64_t modulus);

FUNC Eltwise_SubScalarMod(uint64_t* result, const uint64_t* operand1,
                          uint64_t operand2, uint64_t n, uint64_t modulus);
