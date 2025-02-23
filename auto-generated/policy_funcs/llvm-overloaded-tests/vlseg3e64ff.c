// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat64m1x3_t test_vlseg3e64ff_v_f64m1x3_tu(vfloat64m1x3_t maskedoff_tuple, const double *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vfloat64m2x3_t test_vlseg3e64ff_v_f64m2x3_tu(vfloat64m2x3_t maskedoff_tuple, const double *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint64m1x3_t test_vlseg3e64ff_v_i64m1x3_tu(vint64m1x3_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint64m2x3_t test_vlseg3e64ff_v_i64m2x3_tu(vint64m2x3_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint64m1x3_t test_vlseg3e64ff_v_u64m1x3_tu(vuint64m1x3_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint64m2x3_t test_vlseg3e64ff_v_u64m2x3_tu(vuint64m2x3_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vfloat64m1x3_t test_vlseg3e64ff_v_f64m1x3_tum(vbool64_t mask, vfloat64m1x3_t maskedoff_tuple, const double *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat64m2x3_t test_vlseg3e64ff_v_f64m2x3_tum(vbool32_t mask, vfloat64m2x3_t maskedoff_tuple, const double *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint64m1x3_t test_vlseg3e64ff_v_i64m1x3_tum(vbool64_t mask, vint64m1x3_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint64m2x3_t test_vlseg3e64ff_v_i64m2x3_tum(vbool32_t mask, vint64m2x3_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint64m1x3_t test_vlseg3e64ff_v_u64m1x3_tum(vbool64_t mask, vuint64m1x3_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint64m2x3_t test_vlseg3e64ff_v_u64m2x3_tum(vbool32_t mask, vuint64m2x3_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat64m1x3_t test_vlseg3e64ff_v_f64m1x3_tumu(vbool64_t mask, vfloat64m1x3_t maskedoff_tuple, const double *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat64m2x3_t test_vlseg3e64ff_v_f64m2x3_tumu(vbool32_t mask, vfloat64m2x3_t maskedoff_tuple, const double *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint64m1x3_t test_vlseg3e64ff_v_i64m1x3_tumu(vbool64_t mask, vint64m1x3_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint64m2x3_t test_vlseg3e64ff_v_i64m2x3_tumu(vbool32_t mask, vint64m2x3_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint64m1x3_t test_vlseg3e64ff_v_u64m1x3_tumu(vbool64_t mask, vuint64m1x3_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint64m2x3_t test_vlseg3e64ff_v_u64m2x3_tumu(vbool32_t mask, vuint64m2x3_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat64m1x3_t test_vlseg3e64ff_v_f64m1x3_mu(vbool64_t mask, vfloat64m1x3_t maskedoff_tuple, const double *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat64m2x3_t test_vlseg3e64ff_v_f64m2x3_mu(vbool32_t mask, vfloat64m2x3_t maskedoff_tuple, const double *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint64m1x3_t test_vlseg3e64ff_v_i64m1x3_mu(vbool64_t mask, vint64m1x3_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint64m2x3_t test_vlseg3e64ff_v_i64m2x3_mu(vbool32_t mask, vint64m2x3_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint64m1x3_t test_vlseg3e64ff_v_u64m1x3_mu(vbool64_t mask, vuint64m1x3_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint64m2x3_t test_vlseg3e64ff_v_u64m2x3_mu(vbool32_t mask, vuint64m2x3_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

