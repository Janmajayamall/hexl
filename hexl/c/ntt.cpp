
#pragma once

#include "hexl/c/ntt.h"

#include <stdint.h>

#include "hexl/c/defines.h"
#include "hexl/ntt/ntt.hpp"

using namespace intel::hexl;

FUNC NTT_Create(uint64_t degree, uint64_t q, void** ntt_v) {
  NTT* ntt_op = new NTT(degree, q);
  *ntt_v = ntt_op;
}

FUNC NTT_ComputeForward(void* thisptr, uint64_t* result,
                        const uint64_t* operand, uint64_t input_mod_factor,
                        uint64_t output_mod_factor) {
  NTT* ntt_op = reinterpret_cast<NTT*>(thisptr);
  ntt_op->ComputeForward(result, operand, input_mod_factor, output_mod_factor);
}

FUNC NTT_ComputeInverse(void* thisptr, uint64_t* result,
                        const uint64_t* operand, uint64_t input_mod_factor,
                        uint64_t output_mod_factor) {
  NTT* ntt_op = reinterpret_cast<NTT*>(thisptr);
  ntt_op->ComputeInverse(result, operand, input_mod_factor, output_mod_factor);
}

FUNC NTT_Destroy(void* thisptr) { 
  NTT* ntt_op = reinterpret_cast<NTT*>(thisptr);
  delete ntt_op;
}