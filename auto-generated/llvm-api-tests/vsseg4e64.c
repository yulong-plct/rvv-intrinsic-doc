// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsseg4e64_v_f64m1x4(double *base, vfloat64m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64_v_f64m1x4(base, v_tuple, vl);
}

void test_vsseg4e64_v_f64m2x4(double *base, vfloat64m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64_v_f64m2x4(base, v_tuple, vl);
}

void test_vsseg4e64_v_i64m1x4(int64_t *base, vint64m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64_v_i64m1x4(base, v_tuple, vl);
}

void test_vsseg4e64_v_i64m2x4(int64_t *base, vint64m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64_v_i64m2x4(base, v_tuple, vl);
}

void test_vsseg4e64_v_u64m1x4(uint64_t *base, vuint64m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64_v_u64m1x4(base, v_tuple, vl);
}

void test_vsseg4e64_v_u64m2x4(uint64_t *base, vuint64m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64_v_u64m2x4(base, v_tuple, vl);
}

void test_vsseg4e64_v_f64m1x4_m(vbool64_t mask, double *base, vfloat64m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64_v_f64m1x4_m(mask, base, v_tuple, vl);
}

void test_vsseg4e64_v_f64m2x4_m(vbool32_t mask, double *base, vfloat64m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64_v_f64m2x4_m(mask, base, v_tuple, vl);
}

void test_vsseg4e64_v_i64m1x4_m(vbool64_t mask, int64_t *base, vint64m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64_v_i64m1x4_m(mask, base, v_tuple, vl);
}

void test_vsseg4e64_v_i64m2x4_m(vbool32_t mask, int64_t *base, vint64m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64_v_i64m2x4_m(mask, base, v_tuple, vl);
}

void test_vsseg4e64_v_u64m1x4_m(vbool64_t mask, uint64_t *base, vuint64m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64_v_u64m1x4_m(mask, base, v_tuple, vl);
}

void test_vsseg4e64_v_u64m2x4_m(vbool32_t mask, uint64_t *base, vuint64m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64_v_u64m2x4_m(mask, base, v_tuple, vl);
}

