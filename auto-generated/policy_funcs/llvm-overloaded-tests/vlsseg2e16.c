// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4x2_t test_vlsseg2e16_v_f16mf4x2_tu(vfloat16mf4x2_t maskedoff_tuple, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tu(maskedoff_tuple, base, bstride, vl);
}

vfloat16mf2x2_t test_vlsseg2e16_v_f16mf2x2_tu(vfloat16mf2x2_t maskedoff_tuple, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tu(maskedoff_tuple, base, bstride, vl);
}

vfloat16m1x2_t test_vlsseg2e16_v_f16m1x2_tu(vfloat16m1x2_t maskedoff_tuple, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tu(maskedoff_tuple, base, bstride, vl);
}

vfloat16m2x2_t test_vlsseg2e16_v_f16m2x2_tu(vfloat16m2x2_t maskedoff_tuple, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tu(maskedoff_tuple, base, bstride, vl);
}

vfloat16m4x2_t test_vlsseg2e16_v_f16m4x2_tu(vfloat16m4x2_t maskedoff_tuple, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tu(maskedoff_tuple, base, bstride, vl);
}

vint16mf4x2_t test_vlsseg2e16_v_i16mf4x2_tu(vint16mf4x2_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tu(maskedoff_tuple, base, bstride, vl);
}

vint16mf2x2_t test_vlsseg2e16_v_i16mf2x2_tu(vint16mf2x2_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tu(maskedoff_tuple, base, bstride, vl);
}

vint16m1x2_t test_vlsseg2e16_v_i16m1x2_tu(vint16m1x2_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tu(maskedoff_tuple, base, bstride, vl);
}

vint16m2x2_t test_vlsseg2e16_v_i16m2x2_tu(vint16m2x2_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tu(maskedoff_tuple, base, bstride, vl);
}

vint16m4x2_t test_vlsseg2e16_v_i16m4x2_tu(vint16m4x2_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tu(maskedoff_tuple, base, bstride, vl);
}

vuint16mf4x2_t test_vlsseg2e16_v_u16mf4x2_tu(vuint16mf4x2_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tu(maskedoff_tuple, base, bstride, vl);
}

vuint16mf2x2_t test_vlsseg2e16_v_u16mf2x2_tu(vuint16mf2x2_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tu(maskedoff_tuple, base, bstride, vl);
}

vuint16m1x2_t test_vlsseg2e16_v_u16m1x2_tu(vuint16m1x2_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tu(maskedoff_tuple, base, bstride, vl);
}

vuint16m2x2_t test_vlsseg2e16_v_u16m2x2_tu(vuint16m2x2_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tu(maskedoff_tuple, base, bstride, vl);
}

vuint16m4x2_t test_vlsseg2e16_v_u16m4x2_tu(vuint16m4x2_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tu(maskedoff_tuple, base, bstride, vl);
}

vfloat16mf4x2_t test_vlsseg2e16_v_f16mf4x2_tum(vbool64_t mask, vfloat16mf4x2_t maskedoff_tuple, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat16mf2x2_t test_vlsseg2e16_v_f16mf2x2_tum(vbool32_t mask, vfloat16mf2x2_t maskedoff_tuple, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat16m1x2_t test_vlsseg2e16_v_f16m1x2_tum(vbool16_t mask, vfloat16m1x2_t maskedoff_tuple, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat16m2x2_t test_vlsseg2e16_v_f16m2x2_tum(vbool8_t mask, vfloat16m2x2_t maskedoff_tuple, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat16m4x2_t test_vlsseg2e16_v_f16m4x2_tum(vbool4_t mask, vfloat16m4x2_t maskedoff_tuple, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint16mf4x2_t test_vlsseg2e16_v_i16mf4x2_tum(vbool64_t mask, vint16mf4x2_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint16mf2x2_t test_vlsseg2e16_v_i16mf2x2_tum(vbool32_t mask, vint16mf2x2_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint16m1x2_t test_vlsseg2e16_v_i16m1x2_tum(vbool16_t mask, vint16m1x2_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint16m2x2_t test_vlsseg2e16_v_i16m2x2_tum(vbool8_t mask, vint16m2x2_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint16m4x2_t test_vlsseg2e16_v_i16m4x2_tum(vbool4_t mask, vint16m4x2_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16mf4x2_t test_vlsseg2e16_v_u16mf4x2_tum(vbool64_t mask, vuint16mf4x2_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16mf2x2_t test_vlsseg2e16_v_u16mf2x2_tum(vbool32_t mask, vuint16mf2x2_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16m1x2_t test_vlsseg2e16_v_u16m1x2_tum(vbool16_t mask, vuint16m1x2_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16m2x2_t test_vlsseg2e16_v_u16m2x2_tum(vbool8_t mask, vuint16m2x2_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16m4x2_t test_vlsseg2e16_v_u16m4x2_tum(vbool4_t mask, vuint16m4x2_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat16mf4x2_t test_vlsseg2e16_v_f16mf4x2_tumu(vbool64_t mask, vfloat16mf4x2_t maskedoff_tuple, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat16mf2x2_t test_vlsseg2e16_v_f16mf2x2_tumu(vbool32_t mask, vfloat16mf2x2_t maskedoff_tuple, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat16m1x2_t test_vlsseg2e16_v_f16m1x2_tumu(vbool16_t mask, vfloat16m1x2_t maskedoff_tuple, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat16m2x2_t test_vlsseg2e16_v_f16m2x2_tumu(vbool8_t mask, vfloat16m2x2_t maskedoff_tuple, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat16m4x2_t test_vlsseg2e16_v_f16m4x2_tumu(vbool4_t mask, vfloat16m4x2_t maskedoff_tuple, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint16mf4x2_t test_vlsseg2e16_v_i16mf4x2_tumu(vbool64_t mask, vint16mf4x2_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint16mf2x2_t test_vlsseg2e16_v_i16mf2x2_tumu(vbool32_t mask, vint16mf2x2_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint16m1x2_t test_vlsseg2e16_v_i16m1x2_tumu(vbool16_t mask, vint16m1x2_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint16m2x2_t test_vlsseg2e16_v_i16m2x2_tumu(vbool8_t mask, vint16m2x2_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint16m4x2_t test_vlsseg2e16_v_i16m4x2_tumu(vbool4_t mask, vint16m4x2_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16mf4x2_t test_vlsseg2e16_v_u16mf4x2_tumu(vbool64_t mask, vuint16mf4x2_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16mf2x2_t test_vlsseg2e16_v_u16mf2x2_tumu(vbool32_t mask, vuint16mf2x2_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16m1x2_t test_vlsseg2e16_v_u16m1x2_tumu(vbool16_t mask, vuint16m1x2_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16m2x2_t test_vlsseg2e16_v_u16m2x2_tumu(vbool8_t mask, vuint16m2x2_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16m4x2_t test_vlsseg2e16_v_u16m4x2_tumu(vbool4_t mask, vuint16m4x2_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat16mf4x2_t test_vlsseg2e16_v_f16mf4x2_mu(vbool64_t mask, vfloat16mf4x2_t maskedoff_tuple, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat16mf2x2_t test_vlsseg2e16_v_f16mf2x2_mu(vbool32_t mask, vfloat16mf2x2_t maskedoff_tuple, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat16m1x2_t test_vlsseg2e16_v_f16m1x2_mu(vbool16_t mask, vfloat16m1x2_t maskedoff_tuple, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat16m2x2_t test_vlsseg2e16_v_f16m2x2_mu(vbool8_t mask, vfloat16m2x2_t maskedoff_tuple, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat16m4x2_t test_vlsseg2e16_v_f16m4x2_mu(vbool4_t mask, vfloat16m4x2_t maskedoff_tuple, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint16mf4x2_t test_vlsseg2e16_v_i16mf4x2_mu(vbool64_t mask, vint16mf4x2_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint16mf2x2_t test_vlsseg2e16_v_i16mf2x2_mu(vbool32_t mask, vint16mf2x2_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint16m1x2_t test_vlsseg2e16_v_i16m1x2_mu(vbool16_t mask, vint16m1x2_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint16m2x2_t test_vlsseg2e16_v_i16m2x2_mu(vbool8_t mask, vint16m2x2_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint16m4x2_t test_vlsseg2e16_v_i16m4x2_mu(vbool4_t mask, vint16m4x2_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16mf4x2_t test_vlsseg2e16_v_u16mf4x2_mu(vbool64_t mask, vuint16mf4x2_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16mf2x2_t test_vlsseg2e16_v_u16mf2x2_mu(vbool32_t mask, vuint16mf2x2_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16m1x2_t test_vlsseg2e16_v_u16m1x2_mu(vbool16_t mask, vuint16m1x2_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16m2x2_t test_vlsseg2e16_v_u16m2x2_mu(vbool8_t mask, vuint16m2x2_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16m4x2_t test_vlsseg2e16_v_u16m4x2_mu(vbool4_t mask, vuint16m4x2_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_mu(mask, maskedoff_tuple, base, bstride, vl);
}

