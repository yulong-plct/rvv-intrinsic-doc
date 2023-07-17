// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2x4_t test_vlseg4e32_v_f32mf2x4_tu(vfloat32mf2x4_t maskedoff_tuple, const float *base, size_t vl) {
  return __riscv_vlseg4e32_v_f32mf2x4_tu(maskedoff_tuple, base, vl);
}

vfloat32m1x4_t test_vlseg4e32_v_f32m1x4_tu(vfloat32m1x4_t maskedoff_tuple, const float *base, size_t vl) {
  return __riscv_vlseg4e32_v_f32m1x4_tu(maskedoff_tuple, base, vl);
}

vfloat32m2x4_t test_vlseg4e32_v_f32m2x4_tu(vfloat32m2x4_t maskedoff_tuple, const float *base, size_t vl) {
  return __riscv_vlseg4e32_v_f32m2x4_tu(maskedoff_tuple, base, vl);
}

vint32mf2x4_t test_vlseg4e32_v_i32mf2x4_tu(vint32mf2x4_t maskedoff_tuple, const int32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_i32mf2x4_tu(maskedoff_tuple, base, vl);
}

vint32m1x4_t test_vlseg4e32_v_i32m1x4_tu(vint32m1x4_t maskedoff_tuple, const int32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_i32m1x4_tu(maskedoff_tuple, base, vl);
}

vint32m2x4_t test_vlseg4e32_v_i32m2x4_tu(vint32m2x4_t maskedoff_tuple, const int32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_i32m2x4_tu(maskedoff_tuple, base, vl);
}

vuint32mf2x4_t test_vlseg4e32_v_u32mf2x4_tu(vuint32mf2x4_t maskedoff_tuple, const uint32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_u32mf2x4_tu(maskedoff_tuple, base, vl);
}

vuint32m1x4_t test_vlseg4e32_v_u32m1x4_tu(vuint32m1x4_t maskedoff_tuple, const uint32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_u32m1x4_tu(maskedoff_tuple, base, vl);
}

vuint32m2x4_t test_vlseg4e32_v_u32m2x4_tu(vuint32m2x4_t maskedoff_tuple, const uint32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_u32m2x4_tu(maskedoff_tuple, base, vl);
}

vfloat32mf2x4_t test_vlseg4e32_v_f32mf2x4_tum(vbool64_t mask, vfloat32mf2x4_t maskedoff_tuple, const float *base, size_t vl) {
  return __riscv_vlseg4e32_v_f32mf2x4_tum(mask, maskedoff_tuple, base, vl);
}

vfloat32m1x4_t test_vlseg4e32_v_f32m1x4_tum(vbool32_t mask, vfloat32m1x4_t maskedoff_tuple, const float *base, size_t vl) {
  return __riscv_vlseg4e32_v_f32m1x4_tum(mask, maskedoff_tuple, base, vl);
}

vfloat32m2x4_t test_vlseg4e32_v_f32m2x4_tum(vbool16_t mask, vfloat32m2x4_t maskedoff_tuple, const float *base, size_t vl) {
  return __riscv_vlseg4e32_v_f32m2x4_tum(mask, maskedoff_tuple, base, vl);
}

vint32mf2x4_t test_vlseg4e32_v_i32mf2x4_tum(vbool64_t mask, vint32mf2x4_t maskedoff_tuple, const int32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_i32mf2x4_tum(mask, maskedoff_tuple, base, vl);
}

vint32m1x4_t test_vlseg4e32_v_i32m1x4_tum(vbool32_t mask, vint32m1x4_t maskedoff_tuple, const int32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_i32m1x4_tum(mask, maskedoff_tuple, base, vl);
}

vint32m2x4_t test_vlseg4e32_v_i32m2x4_tum(vbool16_t mask, vint32m2x4_t maskedoff_tuple, const int32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_i32m2x4_tum(mask, maskedoff_tuple, base, vl);
}

vuint32mf2x4_t test_vlseg4e32_v_u32mf2x4_tum(vbool64_t mask, vuint32mf2x4_t maskedoff_tuple, const uint32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_u32mf2x4_tum(mask, maskedoff_tuple, base, vl);
}

vuint32m1x4_t test_vlseg4e32_v_u32m1x4_tum(vbool32_t mask, vuint32m1x4_t maskedoff_tuple, const uint32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_u32m1x4_tum(mask, maskedoff_tuple, base, vl);
}

vuint32m2x4_t test_vlseg4e32_v_u32m2x4_tum(vbool16_t mask, vuint32m2x4_t maskedoff_tuple, const uint32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_u32m2x4_tum(mask, maskedoff_tuple, base, vl);
}

vfloat32mf2x4_t test_vlseg4e32_v_f32mf2x4_tumu(vbool64_t mask, vfloat32mf2x4_t maskedoff_tuple, const float *base, size_t vl) {
  return __riscv_vlseg4e32_v_f32mf2x4_tumu(mask, maskedoff_tuple, base, vl);
}

vfloat32m1x4_t test_vlseg4e32_v_f32m1x4_tumu(vbool32_t mask, vfloat32m1x4_t maskedoff_tuple, const float *base, size_t vl) {
  return __riscv_vlseg4e32_v_f32m1x4_tumu(mask, maskedoff_tuple, base, vl);
}

vfloat32m2x4_t test_vlseg4e32_v_f32m2x4_tumu(vbool16_t mask, vfloat32m2x4_t maskedoff_tuple, const float *base, size_t vl) {
  return __riscv_vlseg4e32_v_f32m2x4_tumu(mask, maskedoff_tuple, base, vl);
}

vint32mf2x4_t test_vlseg4e32_v_i32mf2x4_tumu(vbool64_t mask, vint32mf2x4_t maskedoff_tuple, const int32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_i32mf2x4_tumu(mask, maskedoff_tuple, base, vl);
}

vint32m1x4_t test_vlseg4e32_v_i32m1x4_tumu(vbool32_t mask, vint32m1x4_t maskedoff_tuple, const int32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_i32m1x4_tumu(mask, maskedoff_tuple, base, vl);
}

vint32m2x4_t test_vlseg4e32_v_i32m2x4_tumu(vbool16_t mask, vint32m2x4_t maskedoff_tuple, const int32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_i32m2x4_tumu(mask, maskedoff_tuple, base, vl);
}

vuint32mf2x4_t test_vlseg4e32_v_u32mf2x4_tumu(vbool64_t mask, vuint32mf2x4_t maskedoff_tuple, const uint32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_u32mf2x4_tumu(mask, maskedoff_tuple, base, vl);
}

vuint32m1x4_t test_vlseg4e32_v_u32m1x4_tumu(vbool32_t mask, vuint32m1x4_t maskedoff_tuple, const uint32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_u32m1x4_tumu(mask, maskedoff_tuple, base, vl);
}

vuint32m2x4_t test_vlseg4e32_v_u32m2x4_tumu(vbool16_t mask, vuint32m2x4_t maskedoff_tuple, const uint32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_u32m2x4_tumu(mask, maskedoff_tuple, base, vl);
}

vfloat32mf2x4_t test_vlseg4e32_v_f32mf2x4_mu(vbool64_t mask, vfloat32mf2x4_t maskedoff_tuple, const float *base, size_t vl) {
  return __riscv_vlseg4e32_v_f32mf2x4_mu(mask, maskedoff_tuple, base, vl);
}

vfloat32m1x4_t test_vlseg4e32_v_f32m1x4_mu(vbool32_t mask, vfloat32m1x4_t maskedoff_tuple, const float *base, size_t vl) {
  return __riscv_vlseg4e32_v_f32m1x4_mu(mask, maskedoff_tuple, base, vl);
}

vfloat32m2x4_t test_vlseg4e32_v_f32m2x4_mu(vbool16_t mask, vfloat32m2x4_t maskedoff_tuple, const float *base, size_t vl) {
  return __riscv_vlseg4e32_v_f32m2x4_mu(mask, maskedoff_tuple, base, vl);
}

vint32mf2x4_t test_vlseg4e32_v_i32mf2x4_mu(vbool64_t mask, vint32mf2x4_t maskedoff_tuple, const int32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_i32mf2x4_mu(mask, maskedoff_tuple, base, vl);
}

vint32m1x4_t test_vlseg4e32_v_i32m1x4_mu(vbool32_t mask, vint32m1x4_t maskedoff_tuple, const int32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_i32m1x4_mu(mask, maskedoff_tuple, base, vl);
}

vint32m2x4_t test_vlseg4e32_v_i32m2x4_mu(vbool16_t mask, vint32m2x4_t maskedoff_tuple, const int32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_i32m2x4_mu(mask, maskedoff_tuple, base, vl);
}

vuint32mf2x4_t test_vlseg4e32_v_u32mf2x4_mu(vbool64_t mask, vuint32mf2x4_t maskedoff_tuple, const uint32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_u32mf2x4_mu(mask, maskedoff_tuple, base, vl);
}

vuint32m1x4_t test_vlseg4e32_v_u32m1x4_mu(vbool32_t mask, vuint32m1x4_t maskedoff_tuple, const uint32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_u32m1x4_mu(mask, maskedoff_tuple, base, vl);
}

vuint32m2x4_t test_vlseg4e32_v_u32m2x4_mu(vbool16_t mask, vuint32m2x4_t maskedoff_tuple, const uint32_t *base, size_t vl) {
  return __riscv_vlseg4e32_v_u32m2x4_mu(mask, maskedoff_tuple, base, vl);
}

