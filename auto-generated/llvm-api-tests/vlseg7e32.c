// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2x7_t test_vlseg7e32_v_f32mf2x7(const float *base, size_t vl) {
  return __riscv_vlseg7e32_v_f32mf2x7(base, vl);
}

vfloat32m1x7_t test_vlseg7e32_v_f32m1x7(const float *base, size_t vl) {
  return __riscv_vlseg7e32_v_f32m1x7(base, vl);
}

vint32mf2x7_t test_vlseg7e32_v_i32mf2x7(const int32_t *base, size_t vl) {
  return __riscv_vlseg7e32_v_i32mf2x7(base, vl);
}

vint32m1x7_t test_vlseg7e32_v_i32m1x7(const int32_t *base, size_t vl) {
  return __riscv_vlseg7e32_v_i32m1x7(base, vl);
}

vuint32mf2x7_t test_vlseg7e32_v_u32mf2x7(const uint32_t *base, size_t vl) {
  return __riscv_vlseg7e32_v_u32mf2x7(base, vl);
}

vuint32m1x7_t test_vlseg7e32_v_u32m1x7(const uint32_t *base, size_t vl) {
  return __riscv_vlseg7e32_v_u32m1x7(base, vl);
}

vfloat32mf2x7_t test_vlseg7e32_v_f32mf2x7_m(vbool64_t mask, const float *base, size_t vl) {
  return __riscv_vlseg7e32_v_f32mf2x7_m(mask, base, vl);
}

vfloat32m1x7_t test_vlseg7e32_v_f32m1x7_m(vbool32_t mask, const float *base, size_t vl) {
  return __riscv_vlseg7e32_v_f32m1x7_m(mask, base, vl);
}

vint32mf2x7_t test_vlseg7e32_v_i32mf2x7_m(vbool64_t mask, const int32_t *base, size_t vl) {
  return __riscv_vlseg7e32_v_i32mf2x7_m(mask, base, vl);
}

vint32m1x7_t test_vlseg7e32_v_i32m1x7_m(vbool32_t mask, const int32_t *base, size_t vl) {
  return __riscv_vlseg7e32_v_i32m1x7_m(mask, base, vl);
}

vuint32mf2x7_t test_vlseg7e32_v_u32mf2x7_m(vbool64_t mask, const uint32_t *base, size_t vl) {
  return __riscv_vlseg7e32_v_u32mf2x7_m(mask, base, vl);
}

vuint32m1x7_t test_vlseg7e32_v_u32m1x7_m(vbool32_t mask, const uint32_t *base, size_t vl) {
  return __riscv_vlseg7e32_v_u32m1x7_m(mask, base, vl);
}

