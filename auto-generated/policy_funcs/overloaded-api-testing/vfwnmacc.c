#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2_t test_vfwnmacc_vv_f32mf2_tu(vfloat32mf2_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfwnmacc_vf_f32mf2_tu(vfloat32mf2_t vd, float16_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfwnmacc_vv_f32m1_tu(vfloat32m1_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfwnmacc_vf_f32m1_tu(vfloat32m1_t vd, float16_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfwnmacc_vv_f32m2_tu(vfloat32m2_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfwnmacc_vf_f32m2_tu(vfloat32m2_t vd, float16_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfwnmacc_vv_f32m4_tu(vfloat32m4_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfwnmacc_vf_f32m4_tu(vfloat32m4_t vd, float16_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfwnmacc_vv_f32m8_tu(vfloat32m8_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfwnmacc_vf_f32m8_tu(vfloat32m8_t vd, float16_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmacc_vv_f64m1_tu(vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmacc_vf_f64m1_tu(vfloat64m1_t vd, float32_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmacc_vv_f64m2_tu(vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmacc_vf_f64m2_tu(vfloat64m2_t vd, float32_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmacc_vv_f64m4_tu(vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmacc_vf_f64m4_tu(vfloat64m4_t vd, float32_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmacc_vv_f64m8_tu(vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmacc_vf_f64m8_tu(vfloat64m8_t vd, float32_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfwnmacc_vv_f32mf2_tum(vbool64_t mask, vfloat32mf2_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfwnmacc_vf_f32mf2_tum(vbool64_t mask, vfloat32mf2_t vd, float16_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfwnmacc_vv_f32m1_tum(vbool32_t mask, vfloat32m1_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfwnmacc_vf_f32m1_tum(vbool32_t mask, vfloat32m1_t vd, float16_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfwnmacc_vv_f32m2_tum(vbool16_t mask, vfloat32m2_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfwnmacc_vf_f32m2_tum(vbool16_t mask, vfloat32m2_t vd, float16_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfwnmacc_vv_f32m4_tum(vbool8_t mask, vfloat32m4_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfwnmacc_vf_f32m4_tum(vbool8_t mask, vfloat32m4_t vd, float16_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfwnmacc_vv_f32m8_tum(vbool4_t mask, vfloat32m8_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfwnmacc_vf_f32m8_tum(vbool4_t mask, vfloat32m8_t vd, float16_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmacc_vv_f64m1_tum(vbool64_t mask, vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmacc_vf_f64m1_tum(vbool64_t mask, vfloat64m1_t vd, float32_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmacc_vv_f64m2_tum(vbool32_t mask, vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmacc_vf_f64m2_tum(vbool32_t mask, vfloat64m2_t vd, float32_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmacc_vv_f64m4_tum(vbool16_t mask, vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmacc_vf_f64m4_tum(vbool16_t mask, vfloat64m4_t vd, float32_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmacc_vv_f64m8_tum(vbool8_t mask, vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmacc_vf_f64m8_tum(vbool8_t mask, vfloat64m8_t vd, float32_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfwnmacc_vv_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfwnmacc_vf_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t vd, float16_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfwnmacc_vv_f32m1_tumu(vbool32_t mask, vfloat32m1_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfwnmacc_vf_f32m1_tumu(vbool32_t mask, vfloat32m1_t vd, float16_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfwnmacc_vv_f32m2_tumu(vbool16_t mask, vfloat32m2_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfwnmacc_vf_f32m2_tumu(vbool16_t mask, vfloat32m2_t vd, float16_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfwnmacc_vv_f32m4_tumu(vbool8_t mask, vfloat32m4_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfwnmacc_vf_f32m4_tumu(vbool8_t mask, vfloat32m4_t vd, float16_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfwnmacc_vv_f32m8_tumu(vbool4_t mask, vfloat32m8_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfwnmacc_vf_f32m8_tumu(vbool4_t mask, vfloat32m8_t vd, float16_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmacc_vv_f64m1_tumu(vbool64_t mask, vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmacc_vf_f64m1_tumu(vbool64_t mask, vfloat64m1_t vd, float32_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmacc_vv_f64m2_tumu(vbool32_t mask, vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmacc_vf_f64m2_tumu(vbool32_t mask, vfloat64m2_t vd, float32_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmacc_vv_f64m4_tumu(vbool16_t mask, vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmacc_vf_f64m4_tumu(vbool16_t mask, vfloat64m4_t vd, float32_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmacc_vv_f64m8_tumu(vbool8_t mask, vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmacc_vf_f64m8_tumu(vbool8_t mask, vfloat64m8_t vd, float32_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfwnmacc_vv_f32mf2_mu(vbool64_t mask, vfloat32mf2_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfwnmacc_vf_f32mf2_mu(vbool64_t mask, vfloat32mf2_t vd, float16_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfwnmacc_vv_f32m1_mu(vbool32_t mask, vfloat32m1_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfwnmacc_vf_f32m1_mu(vbool32_t mask, vfloat32m1_t vd, float16_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfwnmacc_vv_f32m2_mu(vbool16_t mask, vfloat32m2_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfwnmacc_vf_f32m2_mu(vbool16_t mask, vfloat32m2_t vd, float16_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfwnmacc_vv_f32m4_mu(vbool8_t mask, vfloat32m4_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfwnmacc_vf_f32m4_mu(vbool8_t mask, vfloat32m4_t vd, float16_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfwnmacc_vv_f32m8_mu(vbool4_t mask, vfloat32m8_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfwnmacc_vf_f32m8_mu(vbool4_t mask, vfloat32m8_t vd, float16_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmacc_vv_f64m1_mu(vbool64_t mask, vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmacc_vf_f64m1_mu(vbool64_t mask, vfloat64m1_t vd, float32_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmacc_vv_f64m2_mu(vbool32_t mask, vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmacc_vf_f64m2_mu(vbool32_t mask, vfloat64m2_t vd, float32_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmacc_vv_f64m4_mu(vbool16_t mask, vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmacc_vf_f64m4_mu(vbool16_t mask, vfloat64m4_t vd, float32_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmacc_vv_f64m8_mu(vbool8_t mask, vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmacc_vf_f64m8_mu(vbool8_t mask, vfloat64m8_t vd, float32_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfwnmacc_vv_f32mf2_rm_tu(vfloat32mf2_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwnmacc_vf_f32mf2_rm_tu(vfloat32mf2_t vd, float16_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwnmacc_vv_f32m1_rm_tu(vfloat32m1_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwnmacc_vf_f32m1_rm_tu(vfloat32m1_t vd, float16_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwnmacc_vv_f32m2_rm_tu(vfloat32m2_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwnmacc_vf_f32m2_rm_tu(vfloat32m2_t vd, float16_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwnmacc_vv_f32m4_rm_tu(vfloat32m4_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwnmacc_vf_f32m4_rm_tu(vfloat32m4_t vd, float16_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwnmacc_vv_f32m8_rm_tu(vfloat32m8_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwnmacc_vf_f32m8_rm_tu(vfloat32m8_t vd, float16_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwnmacc_vv_f64m1_rm_tu(vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwnmacc_vf_f64m1_rm_tu(vfloat64m1_t vd, float32_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwnmacc_vv_f64m2_rm_tu(vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwnmacc_vf_f64m2_rm_tu(vfloat64m2_t vd, float32_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwnmacc_vv_f64m4_rm_tu(vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwnmacc_vf_f64m4_rm_tu(vfloat64m4_t vd, float32_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwnmacc_vv_f64m8_rm_tu(vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwnmacc_vf_f64m8_rm_tu(vfloat64m8_t vd, float32_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwnmacc_vv_f32mf2_rm_tum(vbool64_t mask, vfloat32mf2_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwnmacc_vf_f32mf2_rm_tum(vbool64_t mask, vfloat32mf2_t vd, float16_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwnmacc_vv_f32m1_rm_tum(vbool32_t mask, vfloat32m1_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwnmacc_vf_f32m1_rm_tum(vbool32_t mask, vfloat32m1_t vd, float16_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwnmacc_vv_f32m2_rm_tum(vbool16_t mask, vfloat32m2_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwnmacc_vf_f32m2_rm_tum(vbool16_t mask, vfloat32m2_t vd, float16_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwnmacc_vv_f32m4_rm_tum(vbool8_t mask, vfloat32m4_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwnmacc_vf_f32m4_rm_tum(vbool8_t mask, vfloat32m4_t vd, float16_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwnmacc_vv_f32m8_rm_tum(vbool4_t mask, vfloat32m8_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwnmacc_vf_f32m8_rm_tum(vbool4_t mask, vfloat32m8_t vd, float16_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwnmacc_vv_f64m1_rm_tum(vbool64_t mask, vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwnmacc_vf_f64m1_rm_tum(vbool64_t mask, vfloat64m1_t vd, float32_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwnmacc_vv_f64m2_rm_tum(vbool32_t mask, vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwnmacc_vf_f64m2_rm_tum(vbool32_t mask, vfloat64m2_t vd, float32_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwnmacc_vv_f64m4_rm_tum(vbool16_t mask, vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwnmacc_vf_f64m4_rm_tum(vbool16_t mask, vfloat64m4_t vd, float32_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwnmacc_vv_f64m8_rm_tum(vbool8_t mask, vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwnmacc_vf_f64m8_rm_tum(vbool8_t mask, vfloat64m8_t vd, float32_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tum(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwnmacc_vv_f32mf2_rm_tumu(vbool64_t mask, vfloat32mf2_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwnmacc_vf_f32mf2_rm_tumu(vbool64_t mask, vfloat32mf2_t vd, float16_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwnmacc_vv_f32m1_rm_tumu(vbool32_t mask, vfloat32m1_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwnmacc_vf_f32m1_rm_tumu(vbool32_t mask, vfloat32m1_t vd, float16_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwnmacc_vv_f32m2_rm_tumu(vbool16_t mask, vfloat32m2_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwnmacc_vf_f32m2_rm_tumu(vbool16_t mask, vfloat32m2_t vd, float16_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwnmacc_vv_f32m4_rm_tumu(vbool8_t mask, vfloat32m4_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwnmacc_vf_f32m4_rm_tumu(vbool8_t mask, vfloat32m4_t vd, float16_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwnmacc_vv_f32m8_rm_tumu(vbool4_t mask, vfloat32m8_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwnmacc_vf_f32m8_rm_tumu(vbool4_t mask, vfloat32m8_t vd, float16_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwnmacc_vv_f64m1_rm_tumu(vbool64_t mask, vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwnmacc_vf_f64m1_rm_tumu(vbool64_t mask, vfloat64m1_t vd, float32_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwnmacc_vv_f64m2_rm_tumu(vbool32_t mask, vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwnmacc_vf_f64m2_rm_tumu(vbool32_t mask, vfloat64m2_t vd, float32_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwnmacc_vv_f64m4_rm_tumu(vbool16_t mask, vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwnmacc_vf_f64m4_rm_tumu(vbool16_t mask, vfloat64m4_t vd, float32_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwnmacc_vv_f64m8_rm_tumu(vbool8_t mask, vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwnmacc_vf_f64m8_rm_tumu(vbool8_t mask, vfloat64m8_t vd, float32_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_tumu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwnmacc_vv_f32mf2_rm_mu(vbool64_t mask, vfloat32mf2_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwnmacc_vf_f32mf2_rm_mu(vbool64_t mask, vfloat32mf2_t vd, float16_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwnmacc_vv_f32m1_rm_mu(vbool32_t mask, vfloat32m1_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwnmacc_vf_f32m1_rm_mu(vbool32_t mask, vfloat32m1_t vd, float16_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwnmacc_vv_f32m2_rm_mu(vbool16_t mask, vfloat32m2_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwnmacc_vf_f32m2_rm_mu(vbool16_t mask, vfloat32m2_t vd, float16_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwnmacc_vv_f32m4_rm_mu(vbool8_t mask, vfloat32m4_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwnmacc_vf_f32m4_rm_mu(vbool8_t mask, vfloat32m4_t vd, float16_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwnmacc_vv_f32m8_rm_mu(vbool4_t mask, vfloat32m8_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwnmacc_vf_f32m8_rm_mu(vbool4_t mask, vfloat32m8_t vd, float16_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwnmacc_vv_f64m1_rm_mu(vbool64_t mask, vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwnmacc_vf_f64m1_rm_mu(vbool64_t mask, vfloat64m1_t vd, float32_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwnmacc_vv_f64m2_rm_mu(vbool32_t mask, vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwnmacc_vf_f64m2_rm_mu(vbool32_t mask, vfloat64m2_t vd, float32_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwnmacc_vv_f64m4_rm_mu(vbool16_t mask, vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwnmacc_vf_f64m4_rm_mu(vbool16_t mask, vfloat64m4_t vd, float32_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwnmacc_vv_f64m8_rm_mu(vbool8_t mask, vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwnmacc_vf_f64m8_rm_mu(vbool8_t mask, vfloat64m8_t vd, float32_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_mu(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

