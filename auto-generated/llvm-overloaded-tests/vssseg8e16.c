// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vssseg8e16_v_f16mf4x8(_Float16 *base, ptrdiff_t bstride, vfloat16mf4x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e16(base, bstride, v_tuple, vl);
}

void test_vssseg8e16_v_f16mf2x8(_Float16 *base, ptrdiff_t bstride, vfloat16mf2x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e16(base, bstride, v_tuple, vl);
}

void test_vssseg8e16_v_f16m1x8(_Float16 *base, ptrdiff_t bstride, vfloat16m1x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e16(base, bstride, v_tuple, vl);
}

void test_vssseg8e16_v_i16mf4x8(int16_t *base, ptrdiff_t bstride, vint16mf4x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e16(base, bstride, v_tuple, vl);
}

void test_vssseg8e16_v_i16mf2x8(int16_t *base, ptrdiff_t bstride, vint16mf2x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e16(base, bstride, v_tuple, vl);
}

void test_vssseg8e16_v_i16m1x8(int16_t *base, ptrdiff_t bstride, vint16m1x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e16(base, bstride, v_tuple, vl);
}

void test_vssseg8e16_v_u16mf4x8(uint16_t *base, ptrdiff_t bstride, vuint16mf4x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e16(base, bstride, v_tuple, vl);
}

void test_vssseg8e16_v_u16mf2x8(uint16_t *base, ptrdiff_t bstride, vuint16mf2x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e16(base, bstride, v_tuple, vl);
}

void test_vssseg8e16_v_u16m1x8(uint16_t *base, ptrdiff_t bstride, vuint16m1x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e16(base, bstride, v_tuple, vl);
}

void test_vssseg8e16_v_f16mf4x8_m(vbool64_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16mf4x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg8e16_v_f16mf2x8_m(vbool32_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16mf2x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg8e16_v_f16m1x8_m(vbool16_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16m1x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg8e16_v_i16mf4x8_m(vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg8e16_v_i16mf2x8_m(vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg8e16_v_i16m1x8_m(vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg8e16_v_u16mf4x8_m(vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg8e16_v_u16mf2x8_m(vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg8e16_v_u16m1x8_m(vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e16(mask, base, bstride, v_tuple, vl);
}

