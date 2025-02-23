// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsseg2e64_v_f64m1x2(double *base, vfloat64m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e64_v_f64m1x2(base, v_tuple, vl);
}

void test_vsseg2e64_v_f64m2x2(double *base, vfloat64m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e64_v_f64m2x2(base, v_tuple, vl);
}

void test_vsseg2e64_v_f64m4x2(double *base, vfloat64m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e64_v_f64m4x2(base, v_tuple, vl);
}

void test_vsseg2e64_v_i64m1x2(int64_t *base, vint64m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e64_v_i64m1x2(base, v_tuple, vl);
}

void test_vsseg2e64_v_i64m2x2(int64_t *base, vint64m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e64_v_i64m2x2(base, v_tuple, vl);
}

void test_vsseg2e64_v_i64m4x2(int64_t *base, vint64m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e64_v_i64m4x2(base, v_tuple, vl);
}

void test_vsseg2e64_v_u64m1x2(uint64_t *base, vuint64m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e64_v_u64m1x2(base, v_tuple, vl);
}

void test_vsseg2e64_v_u64m2x2(uint64_t *base, vuint64m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e64_v_u64m2x2(base, v_tuple, vl);
}

void test_vsseg2e64_v_u64m4x2(uint64_t *base, vuint64m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e64_v_u64m4x2(base, v_tuple, vl);
}

void test_vsseg2e64_v_f64m1x2_m(vbool64_t mask, double *base, vfloat64m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e64_v_f64m1x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e64_v_f64m2x2_m(vbool32_t mask, double *base, vfloat64m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e64_v_f64m2x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e64_v_f64m4x2_m(vbool16_t mask, double *base, vfloat64m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e64_v_f64m4x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e64_v_i64m1x2_m(vbool64_t mask, int64_t *base, vint64m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e64_v_i64m1x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e64_v_i64m2x2_m(vbool32_t mask, int64_t *base, vint64m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e64_v_i64m2x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e64_v_i64m4x2_m(vbool16_t mask, int64_t *base, vint64m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e64_v_i64m4x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e64_v_u64m1x2_m(vbool64_t mask, uint64_t *base, vuint64m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e64_v_u64m1x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e64_v_u64m2x2_m(vbool32_t mask, uint64_t *base, vuint64m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e64_v_u64m2x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e64_v_u64m4x2_m(vbool16_t mask, uint64_t *base, vuint64m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e64_v_u64m4x2_m(mask, base, v_tuple, vl);
}

