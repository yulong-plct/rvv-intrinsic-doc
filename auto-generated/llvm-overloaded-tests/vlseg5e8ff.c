// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8x5_t test_vlseg5e8ff_v_i8mf8x5_m(vbool64_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff(mask, base, new_vl, vl);
}

vint8mf4x5_t test_vlseg5e8ff_v_i8mf4x5_m(vbool32_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff(mask, base, new_vl, vl);
}

vint8mf2x5_t test_vlseg5e8ff_v_i8mf2x5_m(vbool16_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff(mask, base, new_vl, vl);
}

vint8m1x5_t test_vlseg5e8ff_v_i8m1x5_m(vbool8_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff(mask, base, new_vl, vl);
}

vuint8mf8x5_t test_vlseg5e8ff_v_u8mf8x5_m(vbool64_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff(mask, base, new_vl, vl);
}

vuint8mf4x5_t test_vlseg5e8ff_v_u8mf4x5_m(vbool32_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff(mask, base, new_vl, vl);
}

vuint8mf2x5_t test_vlseg5e8ff_v_u8mf2x5_m(vbool16_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff(mask, base, new_vl, vl);
}

vuint8m1x5_t test_vlseg5e8ff_v_u8m1x5_m(vbool8_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff(mask, base, new_vl, vl);
}

