// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2x4_t test_vlsseg4e32_v_f32mf2x4(const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_f32mf2x4(base, bstride, vl);
}

vfloat32m1x4_t test_vlsseg4e32_v_f32m1x4(const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_f32m1x4(base, bstride, vl);
}

vfloat32m2x4_t test_vlsseg4e32_v_f32m2x4(const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_f32m2x4(base, bstride, vl);
}

vint32mf2x4_t test_vlsseg4e32_v_i32mf2x4(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_i32mf2x4(base, bstride, vl);
}

vint32m1x4_t test_vlsseg4e32_v_i32m1x4(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_i32m1x4(base, bstride, vl);
}

vint32m2x4_t test_vlsseg4e32_v_i32m2x4(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_i32m2x4(base, bstride, vl);
}

vuint32mf2x4_t test_vlsseg4e32_v_u32mf2x4(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_u32mf2x4(base, bstride, vl);
}

vuint32m1x4_t test_vlsseg4e32_v_u32m1x4(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_u32m1x4(base, bstride, vl);
}

vuint32m2x4_t test_vlsseg4e32_v_u32m2x4(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_u32m2x4(base, bstride, vl);
}

vfloat32mf2x4_t test_vlsseg4e32_v_f32mf2x4_m(vbool64_t mask, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_f32mf2x4_m(mask, base, bstride, vl);
}

vfloat32m1x4_t test_vlsseg4e32_v_f32m1x4_m(vbool32_t mask, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_f32m1x4_m(mask, base, bstride, vl);
}

vfloat32m2x4_t test_vlsseg4e32_v_f32m2x4_m(vbool16_t mask, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_f32m2x4_m(mask, base, bstride, vl);
}

vint32mf2x4_t test_vlsseg4e32_v_i32mf2x4_m(vbool64_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_i32mf2x4_m(mask, base, bstride, vl);
}

vint32m1x4_t test_vlsseg4e32_v_i32m1x4_m(vbool32_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_i32m1x4_m(mask, base, bstride, vl);
}

vint32m2x4_t test_vlsseg4e32_v_i32m2x4_m(vbool16_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_i32m2x4_m(mask, base, bstride, vl);
}

vuint32mf2x4_t test_vlsseg4e32_v_u32mf2x4_m(vbool64_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_u32mf2x4_m(mask, base, bstride, vl);
}

vuint32m1x4_t test_vlsseg4e32_v_u32m1x4_m(vbool32_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_u32m1x4_m(mask, base, bstride, vl);
}

vuint32m2x4_t test_vlsseg4e32_v_u32m2x4_m(vbool16_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_u32m2x4_m(mask, base, bstride, vl);
}

