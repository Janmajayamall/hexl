
#pragma once

#include "hexl/c/eltwise.h"

#include <stdint.h>

#include "hexl/c/defines.h"
#include "hexl/eltwise/eltwise-add-mod.hpp"
#include "hexl/eltwise/eltwise-cmp-add.hpp"
#include "hexl/eltwise/eltwise-cmp-sub-mod.hpp"
#include "hexl/eltwise/eltwise-fma-mod.hpp"
#include "hexl/eltwise/eltwise-mult-mod.hpp"
#include "hexl/eltwise/eltwise-reduce-mod.hpp"
#include "hexl/eltwise/eltwise-sub-mod.hpp"

using namespace intel::hexl;

FUNC Eltwise_AddMod(uint64_t* result, const uint64_t* operand1,
                    const uint64_t* operand2, uint64_t n, uint64_t modulus) {
  EltwiseAddMod(result, operand1, operand2, n, modulus);
}

FUNC Eltwise_AddScalarMod(uint64_t* result, const uint64_t* operand1,
                          uint64_t operand2, uint64_t n, uint64_t modulus) {
  EltwiseAddMod(result, operand1, operand2, n, modulus);
}

FUNC Eltwise_CmpAdd(uint64_t* result, const uint64_t* operand1, uint64_t n,
                    uint64_t cmp, uint64_t bound, uint64_t diff) {
  CMPINT c = (CMPINT)cmp;
  EltwiseCmpAdd(result, operand1, n, c, bound, diff);
}

FUNC Eltwise_CmpSubMod(uint64_t* result, const uint64_t* operand1, uint64_t n,
                       uint64_t modulus, uint64_t cmp, uint64_t bound,
                       uint64_t diff) {
  CMPINT c = (CMPINT)cmp;
  EltwiseCmpSubMod(result, operand1, n, modulus, c, bound, diff);
}

FUNC Eltwise_FMAMod(uint64_t* result, const uint64_t* arg1, uint64_t arg2,
                    const uint64_t* arg3, uint64_t n, uint64_t modulus,
                    uint64_t input_mod_factor) {
  EltwiseFMAMod(result, arg1, arg2, arg3, n, modulus, input_mod_factor);
}

FUNC Eltwise_MultMod(uint64_t* result, const uint64_t* operand1,
                     const uint64_t* operand2, uint64_t n, uint64_t modulus,
                     uint64_t input_mod_factor) {
  EltwiseMultMod(result, operand1, operand2, n, modulus, input_mod_factor);
}

FUNC Eltwise_ReduceMod(uint64_t* result, const uint64_t* operand, uint64_t n,
                       uint64_t modulus, uint64_t input_mod_factor,
                       uint64_t output_mod_factor) {
  EltwiseReduceMod(result, operand, n, modulus, input_mod_factor,
                   output_mod_factor);
}

FUNC Eltwise_SubMod(uint64_t* result, const uint64_t* operand1,
                    const uint64_t* operand2, uint64_t n, uint64_t modulus) {
  EltwiseSubMod(result, operand1, operand2, n, modulus);
}

FUNC Eltwise_SubScalarMod(uint64_t* result, const uint64_t* operand1,
                          uint64_t operand2, uint64_t n, uint64_t modulus) {
  EltwiseSubMod(result, operand1, operand2, n, modulus);
}
