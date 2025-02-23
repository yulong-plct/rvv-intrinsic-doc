// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat64m1x8_t test_vlseg8e64_v_f64m1x8_tu(vfloat64m1x8_t maskedoff_tuple, const double *base, size_t vl) {
  return __riscv_vlseg8e64_v_f64m1x8_tu(maskedoff_tuple, base, vl);
}

vint64m1x8_t test_vlseg8e64_v_i64m1x8_tu(vint64m1x8_t maskedoff_tuple, const int64_t *base, size_t vl) {
  return __riscv_vlseg8e64_v_i64m1x8_tu(maskedoff_tuple, base, vl);
}

vuint64m1x8_t test_vlseg8e64_v_u64m1x8_tu(vuint64m1x8_t maskedoff_tuple, const uint64_t *base, size_t vl) {
  return __riscv_vlseg8e64_v_u64m1x8_tu(maskedoff_tuple, base, vl);
}

vfloat64m1x8_t test_vlseg8e64_v_f64m1x8_tum(vbool64_t mask, vfloat64m1x8_t maskedoff_tuple, const double *base, size_t vl) {
  return __riscv_vlseg8e64_v_f64m1x8_tum(mask, maskedoff_tuple, base, vl);
}

vint64m1x8_t test_vlseg8e64_v_i64m1x8_tum(vbool64_t mask, vint64m1x8_t maskedoff_tuple, const int64_t *base, size_t vl) {
  return __riscv_vlseg8e64_v_i64m1x8_tum(mask, maskedoff_tuple, base, vl);
}

vuint64m1x8_t test_vlseg8e64_v_u64m1x8_tum(vbool64_t mask, vuint64m1x8_t maskedoff_tuple, const uint64_t *base, size_t vl) {
  return __riscv_vlseg8e64_v_u64m1x8_tum(mask, maskedoff_tuple, base, vl);
}

vfloat64m1x8_t test_vlseg8e64_v_f64m1x8_tumu(vbool64_t mask, vfloat64m1x8_t maskedoff_tuple, const double *base, size_t vl) {
  return __riscv_vlseg8e64_v_f64m1x8_tumu(mask, maskedoff_tuple, base, vl);
}

vint64m1x8_t test_vlseg8e64_v_i64m1x8_tumu(vbool64_t mask, vint64m1x8_t maskedoff_tuple, const int64_t *base, size_t vl) {
  return __riscv_vlseg8e64_v_i64m1x8_tumu(mask, maskedoff_tuple, base, vl);
}

vuint64m1x8_t test_vlseg8e64_v_u64m1x8_tumu(vbool64_t mask, vuint64m1x8_t maskedoff_tuple, const uint64_t *base, size_t vl) {
  return __riscv_vlseg8e64_v_u64m1x8_tumu(mask, maskedoff_tuple, base, vl);
}

vfloat64m1x8_t test_vlseg8e64_v_f64m1x8_mu(vbool64_t mask, vfloat64m1x8_t maskedoff_tuple, const double *base, size_t vl) {
  return __riscv_vlseg8e64_v_f64m1x8_mu(mask, maskedoff_tuple, base, vl);
}

vint64m1x8_t test_vlseg8e64_v_i64m1x8_mu(vbool64_t mask, vint64m1x8_t maskedoff_tuple, const int64_t *base, size_t vl) {
  return __riscv_vlseg8e64_v_i64m1x8_mu(mask, maskedoff_tuple, base, vl);
}

vuint64m1x8_t test_vlseg8e64_v_u64m1x8_mu(vbool64_t mask, vuint64m1x8_t maskedoff_tuple, const uint64_t *base, size_t vl) {
  return __riscv_vlseg8e64_v_u64m1x8_mu(mask, maskedoff_tuple, base, vl);
}

