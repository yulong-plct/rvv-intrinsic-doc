// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vssseg7e16_v_f16mf4(_Float16 *base, ptrdiff_t bstride, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, vfloat16mf4_t v6, size_t vl) {
  return __riscv_vssseg7e16_v_f16mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vssseg7e16_v_f16mf2(_Float16 *base, ptrdiff_t bstride, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, vfloat16mf2_t v6, size_t vl) {
  return __riscv_vssseg7e16_v_f16mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vssseg7e16_v_f16m1(_Float16 *base, ptrdiff_t bstride, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, size_t vl) {
  return __riscv_vssseg7e16_v_f16m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vssseg7e16_v_i16mf4(int16_t *base, ptrdiff_t bstride, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3, vint16mf4_t v4, vint16mf4_t v5, vint16mf4_t v6, size_t vl) {
  return __riscv_vssseg7e16_v_i16mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vssseg7e16_v_i16mf2(int16_t *base, ptrdiff_t bstride, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3, vint16mf2_t v4, vint16mf2_t v5, vint16mf2_t v6, size_t vl) {
  return __riscv_vssseg7e16_v_i16mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vssseg7e16_v_i16m1(int16_t *base, ptrdiff_t bstride, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, size_t vl) {
  return __riscv_vssseg7e16_v_i16m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vssseg7e16_v_u16mf4(uint16_t *base, ptrdiff_t bstride, vuint16mf4_t v0, vuint16mf4_t v1, vuint16mf4_t v2, vuint16mf4_t v3, vuint16mf4_t v4, vuint16mf4_t v5, vuint16mf4_t v6, size_t vl) {
  return __riscv_vssseg7e16_v_u16mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vssseg7e16_v_u16mf2(uint16_t *base, ptrdiff_t bstride, vuint16mf2_t v0, vuint16mf2_t v1, vuint16mf2_t v2, vuint16mf2_t v3, vuint16mf2_t v4, vuint16mf2_t v5, vuint16mf2_t v6, size_t vl) {
  return __riscv_vssseg7e16_v_u16mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vssseg7e16_v_u16m1(uint16_t *base, ptrdiff_t bstride, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, size_t vl) {
  return __riscv_vssseg7e16_v_u16m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vssseg7e16_v_f16mf4_m(vbool64_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, vfloat16mf4_t v6, size_t vl) {
  return __riscv_vssseg7e16_v_f16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vssseg7e16_v_f16mf2_m(vbool32_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, vfloat16mf2_t v6, size_t vl) {
  return __riscv_vssseg7e16_v_f16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vssseg7e16_v_f16m1_m(vbool16_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, size_t vl) {
  return __riscv_vssseg7e16_v_f16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vssseg7e16_v_i16mf4_m(vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3, vint16mf4_t v4, vint16mf4_t v5, vint16mf4_t v6, size_t vl) {
  return __riscv_vssseg7e16_v_i16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vssseg7e16_v_i16mf2_m(vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3, vint16mf2_t v4, vint16mf2_t v5, vint16mf2_t v6, size_t vl) {
  return __riscv_vssseg7e16_v_i16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vssseg7e16_v_i16m1_m(vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, size_t vl) {
  return __riscv_vssseg7e16_v_i16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vssseg7e16_v_u16mf4_m(vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4_t v0, vuint16mf4_t v1, vuint16mf4_t v2, vuint16mf4_t v3, vuint16mf4_t v4, vuint16mf4_t v5, vuint16mf4_t v6, size_t vl) {
  return __riscv_vssseg7e16_v_u16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vssseg7e16_v_u16mf2_m(vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2_t v0, vuint16mf2_t v1, vuint16mf2_t v2, vuint16mf2_t v3, vuint16mf2_t v4, vuint16mf2_t v5, vuint16mf2_t v6, size_t vl) {
  return __riscv_vssseg7e16_v_u16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vssseg7e16_v_u16m1_m(vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, size_t vl) {
  return __riscv_vssseg7e16_v_u16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

