// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8x3_t test_vlsseg3e8_v_i8mf8x3_tu(vint8mf8x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tu(maskedoff_tuple, base, bstride, vl);
}

vint8mf4x3_t test_vlsseg3e8_v_i8mf4x3_tu(vint8mf4x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tu(maskedoff_tuple, base, bstride, vl);
}

vint8mf2x3_t test_vlsseg3e8_v_i8mf2x3_tu(vint8mf2x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tu(maskedoff_tuple, base, bstride, vl);
}

vint8m1x3_t test_vlsseg3e8_v_i8m1x3_tu(vint8m1x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tu(maskedoff_tuple, base, bstride, vl);
}

vint8m2x3_t test_vlsseg3e8_v_i8m2x3_tu(vint8m2x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tu(maskedoff_tuple, base, bstride, vl);
}

vuint8mf8x3_t test_vlsseg3e8_v_u8mf8x3_tu(vuint8mf8x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tu(maskedoff_tuple, base, bstride, vl);
}

vuint8mf4x3_t test_vlsseg3e8_v_u8mf4x3_tu(vuint8mf4x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tu(maskedoff_tuple, base, bstride, vl);
}

vuint8mf2x3_t test_vlsseg3e8_v_u8mf2x3_tu(vuint8mf2x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tu(maskedoff_tuple, base, bstride, vl);
}

vuint8m1x3_t test_vlsseg3e8_v_u8m1x3_tu(vuint8m1x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tu(maskedoff_tuple, base, bstride, vl);
}

vuint8m2x3_t test_vlsseg3e8_v_u8m2x3_tu(vuint8m2x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tu(maskedoff_tuple, base, bstride, vl);
}

vint8mf8x3_t test_vlsseg3e8_v_i8mf8x3_tum(vbool64_t mask, vint8mf8x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf4x3_t test_vlsseg3e8_v_i8mf4x3_tum(vbool32_t mask, vint8mf4x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf2x3_t test_vlsseg3e8_v_i8mf2x3_tum(vbool16_t mask, vint8mf2x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint8m1x3_t test_vlsseg3e8_v_i8m1x3_tum(vbool8_t mask, vint8m1x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint8m2x3_t test_vlsseg3e8_v_i8m2x3_tum(vbool4_t mask, vint8m2x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf8x3_t test_vlsseg3e8_v_u8mf8x3_tum(vbool64_t mask, vuint8mf8x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf4x3_t test_vlsseg3e8_v_u8mf4x3_tum(vbool32_t mask, vuint8mf4x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf2x3_t test_vlsseg3e8_v_u8mf2x3_tum(vbool16_t mask, vuint8mf2x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8m1x3_t test_vlsseg3e8_v_u8m1x3_tum(vbool8_t mask, vuint8m1x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8m2x3_t test_vlsseg3e8_v_u8m2x3_tum(vbool4_t mask, vuint8m2x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf8x3_t test_vlsseg3e8_v_i8mf8x3_tumu(vbool64_t mask, vint8mf8x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf4x3_t test_vlsseg3e8_v_i8mf4x3_tumu(vbool32_t mask, vint8mf4x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf2x3_t test_vlsseg3e8_v_i8mf2x3_tumu(vbool16_t mask, vint8mf2x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8m1x3_t test_vlsseg3e8_v_i8m1x3_tumu(vbool8_t mask, vint8m1x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8m2x3_t test_vlsseg3e8_v_i8m2x3_tumu(vbool4_t mask, vint8m2x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf8x3_t test_vlsseg3e8_v_u8mf8x3_tumu(vbool64_t mask, vuint8mf8x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf4x3_t test_vlsseg3e8_v_u8mf4x3_tumu(vbool32_t mask, vuint8mf4x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf2x3_t test_vlsseg3e8_v_u8mf2x3_tumu(vbool16_t mask, vuint8mf2x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8m1x3_t test_vlsseg3e8_v_u8m1x3_tumu(vbool8_t mask, vuint8m1x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8m2x3_t test_vlsseg3e8_v_u8m2x3_tumu(vbool4_t mask, vuint8m2x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf8x3_t test_vlsseg3e8_v_i8mf8x3_mu(vbool64_t mask, vint8mf8x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf4x3_t test_vlsseg3e8_v_i8mf4x3_mu(vbool32_t mask, vint8mf4x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf2x3_t test_vlsseg3e8_v_i8mf2x3_mu(vbool16_t mask, vint8mf2x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8m1x3_t test_vlsseg3e8_v_i8m1x3_mu(vbool8_t mask, vint8m1x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8m2x3_t test_vlsseg3e8_v_i8m2x3_mu(vbool4_t mask, vint8m2x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf8x3_t test_vlsseg3e8_v_u8mf8x3_mu(vbool64_t mask, vuint8mf8x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf4x3_t test_vlsseg3e8_v_u8mf4x3_mu(vbool32_t mask, vuint8mf4x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf2x3_t test_vlsseg3e8_v_u8mf2x3_mu(vbool16_t mask, vuint8mf2x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8m1x3_t test_vlsseg3e8_v_u8m1x3_mu(vbool8_t mask, vuint8m1x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8m2x3_t test_vlsseg3e8_v_u8m2x3_mu(vbool4_t mask, vuint8m2x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e8_mu(mask, maskedoff_tuple, base, bstride, vl);
}

