// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vfmacc_vv_f16mf4_tu(vfloat16mf4_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return vfmacc_vv_f16mf4_tu(vd, vs1, vs2, vl);
}

vfloat16mf4_t test_vfmacc_vf_f16mf4_tu(vfloat16mf4_t vd, _Float16 rs1, vfloat16mf4_t vs2, size_t vl) {
  return vfmacc_vf_f16mf4_tu(vd, rs1, vs2, vl);
}

vfloat16mf2_t test_vfmacc_vv_f16mf2_tu(vfloat16mf2_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return vfmacc_vv_f16mf2_tu(vd, vs1, vs2, vl);
}

vfloat16mf2_t test_vfmacc_vf_f16mf2_tu(vfloat16mf2_t vd, _Float16 rs1, vfloat16mf2_t vs2, size_t vl) {
  return vfmacc_vf_f16mf2_tu(vd, rs1, vs2, vl);
}

vfloat16m1_t test_vfmacc_vv_f16m1_tu(vfloat16m1_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return vfmacc_vv_f16m1_tu(vd, vs1, vs2, vl);
}

vfloat16m1_t test_vfmacc_vf_f16m1_tu(vfloat16m1_t vd, _Float16 rs1, vfloat16m1_t vs2, size_t vl) {
  return vfmacc_vf_f16m1_tu(vd, rs1, vs2, vl);
}

vfloat16m2_t test_vfmacc_vv_f16m2_tu(vfloat16m2_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return vfmacc_vv_f16m2_tu(vd, vs1, vs2, vl);
}

vfloat16m2_t test_vfmacc_vf_f16m2_tu(vfloat16m2_t vd, _Float16 rs1, vfloat16m2_t vs2, size_t vl) {
  return vfmacc_vf_f16m2_tu(vd, rs1, vs2, vl);
}

vfloat16m4_t test_vfmacc_vv_f16m4_tu(vfloat16m4_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return vfmacc_vv_f16m4_tu(vd, vs1, vs2, vl);
}

vfloat16m4_t test_vfmacc_vf_f16m4_tu(vfloat16m4_t vd, _Float16 rs1, vfloat16m4_t vs2, size_t vl) {
  return vfmacc_vf_f16m4_tu(vd, rs1, vs2, vl);
}

vfloat16m8_t test_vfmacc_vv_f16m8_tu(vfloat16m8_t vd, vfloat16m8_t vs1, vfloat16m8_t vs2, size_t vl) {
  return vfmacc_vv_f16m8_tu(vd, vs1, vs2, vl);
}

vfloat16m8_t test_vfmacc_vf_f16m8_tu(vfloat16m8_t vd, _Float16 rs1, vfloat16m8_t vs2, size_t vl) {
  return vfmacc_vf_f16m8_tu(vd, rs1, vs2, vl);
}

vfloat32mf2_t test_vfmacc_vv_f32mf2_tu(vfloat32mf2_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return vfmacc_vv_f32mf2_tu(vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfmacc_vf_f32mf2_tu(vfloat32mf2_t vd, float rs1, vfloat32mf2_t vs2, size_t vl) {
  return vfmacc_vf_f32mf2_tu(vd, rs1, vs2, vl);
}

vfloat32m1_t test_vfmacc_vv_f32m1_tu(vfloat32m1_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return vfmacc_vv_f32m1_tu(vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfmacc_vf_f32m1_tu(vfloat32m1_t vd, float rs1, vfloat32m1_t vs2, size_t vl) {
  return vfmacc_vf_f32m1_tu(vd, rs1, vs2, vl);
}

vfloat32m2_t test_vfmacc_vv_f32m2_tu(vfloat32m2_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return vfmacc_vv_f32m2_tu(vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfmacc_vf_f32m2_tu(vfloat32m2_t vd, float rs1, vfloat32m2_t vs2, size_t vl) {
  return vfmacc_vf_f32m2_tu(vd, rs1, vs2, vl);
}

vfloat32m4_t test_vfmacc_vv_f32m4_tu(vfloat32m4_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return vfmacc_vv_f32m4_tu(vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfmacc_vf_f32m4_tu(vfloat32m4_t vd, float rs1, vfloat32m4_t vs2, size_t vl) {
  return vfmacc_vf_f32m4_tu(vd, rs1, vs2, vl);
}

vfloat32m8_t test_vfmacc_vv_f32m8_tu(vfloat32m8_t vd, vfloat32m8_t vs1, vfloat32m8_t vs2, size_t vl) {
  return vfmacc_vv_f32m8_tu(vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfmacc_vf_f32m8_tu(vfloat32m8_t vd, float rs1, vfloat32m8_t vs2, size_t vl) {
  return vfmacc_vf_f32m8_tu(vd, rs1, vs2, vl);
}

vfloat64m1_t test_vfmacc_vv_f64m1_tu(vfloat64m1_t vd, vfloat64m1_t vs1, vfloat64m1_t vs2, size_t vl) {
  return vfmacc_vv_f64m1_tu(vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfmacc_vf_f64m1_tu(vfloat64m1_t vd, double rs1, vfloat64m1_t vs2, size_t vl) {
  return vfmacc_vf_f64m1_tu(vd, rs1, vs2, vl);
}

vfloat64m2_t test_vfmacc_vv_f64m2_tu(vfloat64m2_t vd, vfloat64m2_t vs1, vfloat64m2_t vs2, size_t vl) {
  return vfmacc_vv_f64m2_tu(vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfmacc_vf_f64m2_tu(vfloat64m2_t vd, double rs1, vfloat64m2_t vs2, size_t vl) {
  return vfmacc_vf_f64m2_tu(vd, rs1, vs2, vl);
}

vfloat64m4_t test_vfmacc_vv_f64m4_tu(vfloat64m4_t vd, vfloat64m4_t vs1, vfloat64m4_t vs2, size_t vl) {
  return vfmacc_vv_f64m4_tu(vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfmacc_vf_f64m4_tu(vfloat64m4_t vd, double rs1, vfloat64m4_t vs2, size_t vl) {
  return vfmacc_vf_f64m4_tu(vd, rs1, vs2, vl);
}

vfloat64m8_t test_vfmacc_vv_f64m8_tu(vfloat64m8_t vd, vfloat64m8_t vs1, vfloat64m8_t vs2, size_t vl) {
  return vfmacc_vv_f64m8_tu(vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfmacc_vf_f64m8_tu(vfloat64m8_t vd, double rs1, vfloat64m8_t vs2, size_t vl) {
  return vfmacc_vf_f64m8_tu(vd, rs1, vs2, vl);
}

vfloat16mf4_t test_vfmacc_vv_f16mf4_tum(vbool64_t mask, vfloat16mf4_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return vfmacc_vv_f16mf4_tum(mask, vd, vs1, vs2, vl);
}

vfloat16mf4_t test_vfmacc_vf_f16mf4_tum(vbool64_t mask, vfloat16mf4_t vd, _Float16 rs1, vfloat16mf4_t vs2, size_t vl) {
  return vfmacc_vf_f16mf4_tum(mask, vd, rs1, vs2, vl);
}

vfloat16mf2_t test_vfmacc_vv_f16mf2_tum(vbool32_t mask, vfloat16mf2_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return vfmacc_vv_f16mf2_tum(mask, vd, vs1, vs2, vl);
}

vfloat16mf2_t test_vfmacc_vf_f16mf2_tum(vbool32_t mask, vfloat16mf2_t vd, _Float16 rs1, vfloat16mf2_t vs2, size_t vl) {
  return vfmacc_vf_f16mf2_tum(mask, vd, rs1, vs2, vl);
}

vfloat16m1_t test_vfmacc_vv_f16m1_tum(vbool16_t mask, vfloat16m1_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return vfmacc_vv_f16m1_tum(mask, vd, vs1, vs2, vl);
}

vfloat16m1_t test_vfmacc_vf_f16m1_tum(vbool16_t mask, vfloat16m1_t vd, _Float16 rs1, vfloat16m1_t vs2, size_t vl) {
  return vfmacc_vf_f16m1_tum(mask, vd, rs1, vs2, vl);
}

vfloat16m2_t test_vfmacc_vv_f16m2_tum(vbool8_t mask, vfloat16m2_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return vfmacc_vv_f16m2_tum(mask, vd, vs1, vs2, vl);
}

vfloat16m2_t test_vfmacc_vf_f16m2_tum(vbool8_t mask, vfloat16m2_t vd, _Float16 rs1, vfloat16m2_t vs2, size_t vl) {
  return vfmacc_vf_f16m2_tum(mask, vd, rs1, vs2, vl);
}

vfloat16m4_t test_vfmacc_vv_f16m4_tum(vbool4_t mask, vfloat16m4_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return vfmacc_vv_f16m4_tum(mask, vd, vs1, vs2, vl);
}

vfloat16m4_t test_vfmacc_vf_f16m4_tum(vbool4_t mask, vfloat16m4_t vd, _Float16 rs1, vfloat16m4_t vs2, size_t vl) {
  return vfmacc_vf_f16m4_tum(mask, vd, rs1, vs2, vl);
}

vfloat16m8_t test_vfmacc_vv_f16m8_tum(vbool2_t mask, vfloat16m8_t vd, vfloat16m8_t vs1, vfloat16m8_t vs2, size_t vl) {
  return vfmacc_vv_f16m8_tum(mask, vd, vs1, vs2, vl);
}

vfloat16m8_t test_vfmacc_vf_f16m8_tum(vbool2_t mask, vfloat16m8_t vd, _Float16 rs1, vfloat16m8_t vs2, size_t vl) {
  return vfmacc_vf_f16m8_tum(mask, vd, rs1, vs2, vl);
}

vfloat32mf2_t test_vfmacc_vv_f32mf2_tum(vbool64_t mask, vfloat32mf2_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return vfmacc_vv_f32mf2_tum(mask, vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfmacc_vf_f32mf2_tum(vbool64_t mask, vfloat32mf2_t vd, float rs1, vfloat32mf2_t vs2, size_t vl) {
  return vfmacc_vf_f32mf2_tum(mask, vd, rs1, vs2, vl);
}

vfloat32m1_t test_vfmacc_vv_f32m1_tum(vbool32_t mask, vfloat32m1_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return vfmacc_vv_f32m1_tum(mask, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfmacc_vf_f32m1_tum(vbool32_t mask, vfloat32m1_t vd, float rs1, vfloat32m1_t vs2, size_t vl) {
  return vfmacc_vf_f32m1_tum(mask, vd, rs1, vs2, vl);
}

vfloat32m2_t test_vfmacc_vv_f32m2_tum(vbool16_t mask, vfloat32m2_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return vfmacc_vv_f32m2_tum(mask, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfmacc_vf_f32m2_tum(vbool16_t mask, vfloat32m2_t vd, float rs1, vfloat32m2_t vs2, size_t vl) {
  return vfmacc_vf_f32m2_tum(mask, vd, rs1, vs2, vl);
}

vfloat32m4_t test_vfmacc_vv_f32m4_tum(vbool8_t mask, vfloat32m4_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return vfmacc_vv_f32m4_tum(mask, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfmacc_vf_f32m4_tum(vbool8_t mask, vfloat32m4_t vd, float rs1, vfloat32m4_t vs2, size_t vl) {
  return vfmacc_vf_f32m4_tum(mask, vd, rs1, vs2, vl);
}

vfloat32m8_t test_vfmacc_vv_f32m8_tum(vbool4_t mask, vfloat32m8_t vd, vfloat32m8_t vs1, vfloat32m8_t vs2, size_t vl) {
  return vfmacc_vv_f32m8_tum(mask, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfmacc_vf_f32m8_tum(vbool4_t mask, vfloat32m8_t vd, float rs1, vfloat32m8_t vs2, size_t vl) {
  return vfmacc_vf_f32m8_tum(mask, vd, rs1, vs2, vl);
}

vfloat64m1_t test_vfmacc_vv_f64m1_tum(vbool64_t mask, vfloat64m1_t vd, vfloat64m1_t vs1, vfloat64m1_t vs2, size_t vl) {
  return vfmacc_vv_f64m1_tum(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfmacc_vf_f64m1_tum(vbool64_t mask, vfloat64m1_t vd, double rs1, vfloat64m1_t vs2, size_t vl) {
  return vfmacc_vf_f64m1_tum(mask, vd, rs1, vs2, vl);
}

vfloat64m2_t test_vfmacc_vv_f64m2_tum(vbool32_t mask, vfloat64m2_t vd, vfloat64m2_t vs1, vfloat64m2_t vs2, size_t vl) {
  return vfmacc_vv_f64m2_tum(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfmacc_vf_f64m2_tum(vbool32_t mask, vfloat64m2_t vd, double rs1, vfloat64m2_t vs2, size_t vl) {
  return vfmacc_vf_f64m2_tum(mask, vd, rs1, vs2, vl);
}

vfloat64m4_t test_vfmacc_vv_f64m4_tum(vbool16_t mask, vfloat64m4_t vd, vfloat64m4_t vs1, vfloat64m4_t vs2, size_t vl) {
  return vfmacc_vv_f64m4_tum(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfmacc_vf_f64m4_tum(vbool16_t mask, vfloat64m4_t vd, double rs1, vfloat64m4_t vs2, size_t vl) {
  return vfmacc_vf_f64m4_tum(mask, vd, rs1, vs2, vl);
}

vfloat64m8_t test_vfmacc_vv_f64m8_tum(vbool8_t mask, vfloat64m8_t vd, vfloat64m8_t vs1, vfloat64m8_t vs2, size_t vl) {
  return vfmacc_vv_f64m8_tum(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfmacc_vf_f64m8_tum(vbool8_t mask, vfloat64m8_t vd, double rs1, vfloat64m8_t vs2, size_t vl) {
  return vfmacc_vf_f64m8_tum(mask, vd, rs1, vs2, vl);
}

vfloat16mf4_t test_vfmacc_vv_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return vfmacc_vv_f16mf4_tumu(mask, vd, vs1, vs2, vl);
}

vfloat16mf4_t test_vfmacc_vf_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t vd, _Float16 rs1, vfloat16mf4_t vs2, size_t vl) {
  return vfmacc_vf_f16mf4_tumu(mask, vd, rs1, vs2, vl);
}

vfloat16mf2_t test_vfmacc_vv_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return vfmacc_vv_f16mf2_tumu(mask, vd, vs1, vs2, vl);
}

vfloat16mf2_t test_vfmacc_vf_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t vd, _Float16 rs1, vfloat16mf2_t vs2, size_t vl) {
  return vfmacc_vf_f16mf2_tumu(mask, vd, rs1, vs2, vl);
}

vfloat16m1_t test_vfmacc_vv_f16m1_tumu(vbool16_t mask, vfloat16m1_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return vfmacc_vv_f16m1_tumu(mask, vd, vs1, vs2, vl);
}

vfloat16m1_t test_vfmacc_vf_f16m1_tumu(vbool16_t mask, vfloat16m1_t vd, _Float16 rs1, vfloat16m1_t vs2, size_t vl) {
  return vfmacc_vf_f16m1_tumu(mask, vd, rs1, vs2, vl);
}

vfloat16m2_t test_vfmacc_vv_f16m2_tumu(vbool8_t mask, vfloat16m2_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return vfmacc_vv_f16m2_tumu(mask, vd, vs1, vs2, vl);
}

vfloat16m2_t test_vfmacc_vf_f16m2_tumu(vbool8_t mask, vfloat16m2_t vd, _Float16 rs1, vfloat16m2_t vs2, size_t vl) {
  return vfmacc_vf_f16m2_tumu(mask, vd, rs1, vs2, vl);
}

vfloat16m4_t test_vfmacc_vv_f16m4_tumu(vbool4_t mask, vfloat16m4_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return vfmacc_vv_f16m4_tumu(mask, vd, vs1, vs2, vl);
}

vfloat16m4_t test_vfmacc_vf_f16m4_tumu(vbool4_t mask, vfloat16m4_t vd, _Float16 rs1, vfloat16m4_t vs2, size_t vl) {
  return vfmacc_vf_f16m4_tumu(mask, vd, rs1, vs2, vl);
}

vfloat16m8_t test_vfmacc_vv_f16m8_tumu(vbool2_t mask, vfloat16m8_t vd, vfloat16m8_t vs1, vfloat16m8_t vs2, size_t vl) {
  return vfmacc_vv_f16m8_tumu(mask, vd, vs1, vs2, vl);
}

vfloat16m8_t test_vfmacc_vf_f16m8_tumu(vbool2_t mask, vfloat16m8_t vd, _Float16 rs1, vfloat16m8_t vs2, size_t vl) {
  return vfmacc_vf_f16m8_tumu(mask, vd, rs1, vs2, vl);
}

vfloat32mf2_t test_vfmacc_vv_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return vfmacc_vv_f32mf2_tumu(mask, vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfmacc_vf_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t vd, float rs1, vfloat32mf2_t vs2, size_t vl) {
  return vfmacc_vf_f32mf2_tumu(mask, vd, rs1, vs2, vl);
}

vfloat32m1_t test_vfmacc_vv_f32m1_tumu(vbool32_t mask, vfloat32m1_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return vfmacc_vv_f32m1_tumu(mask, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfmacc_vf_f32m1_tumu(vbool32_t mask, vfloat32m1_t vd, float rs1, vfloat32m1_t vs2, size_t vl) {
  return vfmacc_vf_f32m1_tumu(mask, vd, rs1, vs2, vl);
}

vfloat32m2_t test_vfmacc_vv_f32m2_tumu(vbool16_t mask, vfloat32m2_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return vfmacc_vv_f32m2_tumu(mask, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfmacc_vf_f32m2_tumu(vbool16_t mask, vfloat32m2_t vd, float rs1, vfloat32m2_t vs2, size_t vl) {
  return vfmacc_vf_f32m2_tumu(mask, vd, rs1, vs2, vl);
}

vfloat32m4_t test_vfmacc_vv_f32m4_tumu(vbool8_t mask, vfloat32m4_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return vfmacc_vv_f32m4_tumu(mask, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfmacc_vf_f32m4_tumu(vbool8_t mask, vfloat32m4_t vd, float rs1, vfloat32m4_t vs2, size_t vl) {
  return vfmacc_vf_f32m4_tumu(mask, vd, rs1, vs2, vl);
}

vfloat32m8_t test_vfmacc_vv_f32m8_tumu(vbool4_t mask, vfloat32m8_t vd, vfloat32m8_t vs1, vfloat32m8_t vs2, size_t vl) {
  return vfmacc_vv_f32m8_tumu(mask, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfmacc_vf_f32m8_tumu(vbool4_t mask, vfloat32m8_t vd, float rs1, vfloat32m8_t vs2, size_t vl) {
  return vfmacc_vf_f32m8_tumu(mask, vd, rs1, vs2, vl);
}

vfloat64m1_t test_vfmacc_vv_f64m1_tumu(vbool64_t mask, vfloat64m1_t vd, vfloat64m1_t vs1, vfloat64m1_t vs2, size_t vl) {
  return vfmacc_vv_f64m1_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfmacc_vf_f64m1_tumu(vbool64_t mask, vfloat64m1_t vd, double rs1, vfloat64m1_t vs2, size_t vl) {
  return vfmacc_vf_f64m1_tumu(mask, vd, rs1, vs2, vl);
}

vfloat64m2_t test_vfmacc_vv_f64m2_tumu(vbool32_t mask, vfloat64m2_t vd, vfloat64m2_t vs1, vfloat64m2_t vs2, size_t vl) {
  return vfmacc_vv_f64m2_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfmacc_vf_f64m2_tumu(vbool32_t mask, vfloat64m2_t vd, double rs1, vfloat64m2_t vs2, size_t vl) {
  return vfmacc_vf_f64m2_tumu(mask, vd, rs1, vs2, vl);
}

vfloat64m4_t test_vfmacc_vv_f64m4_tumu(vbool16_t mask, vfloat64m4_t vd, vfloat64m4_t vs1, vfloat64m4_t vs2, size_t vl) {
  return vfmacc_vv_f64m4_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfmacc_vf_f64m4_tumu(vbool16_t mask, vfloat64m4_t vd, double rs1, vfloat64m4_t vs2, size_t vl) {
  return vfmacc_vf_f64m4_tumu(mask, vd, rs1, vs2, vl);
}

vfloat64m8_t test_vfmacc_vv_f64m8_tumu(vbool8_t mask, vfloat64m8_t vd, vfloat64m8_t vs1, vfloat64m8_t vs2, size_t vl) {
  return vfmacc_vv_f64m8_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfmacc_vf_f64m8_tumu(vbool8_t mask, vfloat64m8_t vd, double rs1, vfloat64m8_t vs2, size_t vl) {
  return vfmacc_vf_f64m8_tumu(mask, vd, rs1, vs2, vl);
}

vfloat16mf4_t test_vfmacc_vv_f16mf4_mu(vbool64_t mask, vfloat16mf4_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return vfmacc_vv_f16mf4_mu(mask, vd, vs1, vs2, vl);
}

vfloat16mf4_t test_vfmacc_vf_f16mf4_mu(vbool64_t mask, vfloat16mf4_t vd, _Float16 rs1, vfloat16mf4_t vs2, size_t vl) {
  return vfmacc_vf_f16mf4_mu(mask, vd, rs1, vs2, vl);
}

vfloat16mf2_t test_vfmacc_vv_f16mf2_mu(vbool32_t mask, vfloat16mf2_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return vfmacc_vv_f16mf2_mu(mask, vd, vs1, vs2, vl);
}

vfloat16mf2_t test_vfmacc_vf_f16mf2_mu(vbool32_t mask, vfloat16mf2_t vd, _Float16 rs1, vfloat16mf2_t vs2, size_t vl) {
  return vfmacc_vf_f16mf2_mu(mask, vd, rs1, vs2, vl);
}

vfloat16m1_t test_vfmacc_vv_f16m1_mu(vbool16_t mask, vfloat16m1_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return vfmacc_vv_f16m1_mu(mask, vd, vs1, vs2, vl);
}

vfloat16m1_t test_vfmacc_vf_f16m1_mu(vbool16_t mask, vfloat16m1_t vd, _Float16 rs1, vfloat16m1_t vs2, size_t vl) {
  return vfmacc_vf_f16m1_mu(mask, vd, rs1, vs2, vl);
}

vfloat16m2_t test_vfmacc_vv_f16m2_mu(vbool8_t mask, vfloat16m2_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return vfmacc_vv_f16m2_mu(mask, vd, vs1, vs2, vl);
}

vfloat16m2_t test_vfmacc_vf_f16m2_mu(vbool8_t mask, vfloat16m2_t vd, _Float16 rs1, vfloat16m2_t vs2, size_t vl) {
  return vfmacc_vf_f16m2_mu(mask, vd, rs1, vs2, vl);
}

vfloat16m4_t test_vfmacc_vv_f16m4_mu(vbool4_t mask, vfloat16m4_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return vfmacc_vv_f16m4_mu(mask, vd, vs1, vs2, vl);
}

vfloat16m4_t test_vfmacc_vf_f16m4_mu(vbool4_t mask, vfloat16m4_t vd, _Float16 rs1, vfloat16m4_t vs2, size_t vl) {
  return vfmacc_vf_f16m4_mu(mask, vd, rs1, vs2, vl);
}

vfloat16m8_t test_vfmacc_vv_f16m8_mu(vbool2_t mask, vfloat16m8_t vd, vfloat16m8_t vs1, vfloat16m8_t vs2, size_t vl) {
  return vfmacc_vv_f16m8_mu(mask, vd, vs1, vs2, vl);
}

vfloat16m8_t test_vfmacc_vf_f16m8_mu(vbool2_t mask, vfloat16m8_t vd, _Float16 rs1, vfloat16m8_t vs2, size_t vl) {
  return vfmacc_vf_f16m8_mu(mask, vd, rs1, vs2, vl);
}

vfloat32mf2_t test_vfmacc_vv_f32mf2_mu(vbool64_t mask, vfloat32mf2_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return vfmacc_vv_f32mf2_mu(mask, vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfmacc_vf_f32mf2_mu(vbool64_t mask, vfloat32mf2_t vd, float rs1, vfloat32mf2_t vs2, size_t vl) {
  return vfmacc_vf_f32mf2_mu(mask, vd, rs1, vs2, vl);
}

vfloat32m1_t test_vfmacc_vv_f32m1_mu(vbool32_t mask, vfloat32m1_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return vfmacc_vv_f32m1_mu(mask, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfmacc_vf_f32m1_mu(vbool32_t mask, vfloat32m1_t vd, float rs1, vfloat32m1_t vs2, size_t vl) {
  return vfmacc_vf_f32m1_mu(mask, vd, rs1, vs2, vl);
}

vfloat32m2_t test_vfmacc_vv_f32m2_mu(vbool16_t mask, vfloat32m2_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return vfmacc_vv_f32m2_mu(mask, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfmacc_vf_f32m2_mu(vbool16_t mask, vfloat32m2_t vd, float rs1, vfloat32m2_t vs2, size_t vl) {
  return vfmacc_vf_f32m2_mu(mask, vd, rs1, vs2, vl);
}

vfloat32m4_t test_vfmacc_vv_f32m4_mu(vbool8_t mask, vfloat32m4_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return vfmacc_vv_f32m4_mu(mask, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfmacc_vf_f32m4_mu(vbool8_t mask, vfloat32m4_t vd, float rs1, vfloat32m4_t vs2, size_t vl) {
  return vfmacc_vf_f32m4_mu(mask, vd, rs1, vs2, vl);
}

vfloat32m8_t test_vfmacc_vv_f32m8_mu(vbool4_t mask, vfloat32m8_t vd, vfloat32m8_t vs1, vfloat32m8_t vs2, size_t vl) {
  return vfmacc_vv_f32m8_mu(mask, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfmacc_vf_f32m8_mu(vbool4_t mask, vfloat32m8_t vd, float rs1, vfloat32m8_t vs2, size_t vl) {
  return vfmacc_vf_f32m8_mu(mask, vd, rs1, vs2, vl);
}

vfloat64m1_t test_vfmacc_vv_f64m1_mu(vbool64_t mask, vfloat64m1_t vd, vfloat64m1_t vs1, vfloat64m1_t vs2, size_t vl) {
  return vfmacc_vv_f64m1_mu(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfmacc_vf_f64m1_mu(vbool64_t mask, vfloat64m1_t vd, double rs1, vfloat64m1_t vs2, size_t vl) {
  return vfmacc_vf_f64m1_mu(mask, vd, rs1, vs2, vl);
}

vfloat64m2_t test_vfmacc_vv_f64m2_mu(vbool32_t mask, vfloat64m2_t vd, vfloat64m2_t vs1, vfloat64m2_t vs2, size_t vl) {
  return vfmacc_vv_f64m2_mu(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfmacc_vf_f64m2_mu(vbool32_t mask, vfloat64m2_t vd, double rs1, vfloat64m2_t vs2, size_t vl) {
  return vfmacc_vf_f64m2_mu(mask, vd, rs1, vs2, vl);
}

vfloat64m4_t test_vfmacc_vv_f64m4_mu(vbool16_t mask, vfloat64m4_t vd, vfloat64m4_t vs1, vfloat64m4_t vs2, size_t vl) {
  return vfmacc_vv_f64m4_mu(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfmacc_vf_f64m4_mu(vbool16_t mask, vfloat64m4_t vd, double rs1, vfloat64m4_t vs2, size_t vl) {
  return vfmacc_vf_f64m4_mu(mask, vd, rs1, vs2, vl);
}

vfloat64m8_t test_vfmacc_vv_f64m8_mu(vbool8_t mask, vfloat64m8_t vd, vfloat64m8_t vs1, vfloat64m8_t vs2, size_t vl) {
  return vfmacc_vv_f64m8_mu(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfmacc_vf_f64m8_mu(vbool8_t mask, vfloat64m8_t vd, double rs1, vfloat64m8_t vs2, size_t vl) {
  return vfmacc_vf_f64m8_mu(mask, vd, rs1, vs2, vl);
}

