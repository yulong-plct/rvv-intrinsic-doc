#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vbool64_t test_vmfeq_vv_f16mf4_b64_mu(vbool64_t mask, vbool64_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vmfeq_vv_f16mf4_b64_mu(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmfeq_vf_f16mf4_b64_mu(vbool64_t mask, vbool64_t maskedoff, vfloat16mf4_t op1, float16_t op2, size_t vl) {
  return __riscv_vmfeq_vf_f16mf4_b64_mu(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmfeq_vv_f16mf2_b32_mu(vbool32_t mask, vbool32_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vmfeq_vv_f16mf2_b32_mu(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmfeq_vf_f16mf2_b32_mu(vbool32_t mask, vbool32_t maskedoff, vfloat16mf2_t op1, float16_t op2, size_t vl) {
  return __riscv_vmfeq_vf_f16mf2_b32_mu(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmfeq_vv_f16m1_b16_mu(vbool16_t mask, vbool16_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vmfeq_vv_f16m1_b16_mu(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmfeq_vf_f16m1_b16_mu(vbool16_t mask, vbool16_t maskedoff, vfloat16m1_t op1, float16_t op2, size_t vl) {
  return __riscv_vmfeq_vf_f16m1_b16_mu(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmfeq_vv_f16m2_b8_mu(vbool8_t mask, vbool8_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vmfeq_vv_f16m2_b8_mu(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmfeq_vf_f16m2_b8_mu(vbool8_t mask, vbool8_t maskedoff, vfloat16m2_t op1, float16_t op2, size_t vl) {
  return __riscv_vmfeq_vf_f16m2_b8_mu(mask, maskedoff, op1, op2, vl);
}

vbool4_t test_vmfeq_vv_f16m4_b4_mu(vbool4_t mask, vbool4_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vmfeq_vv_f16m4_b4_mu(mask, maskedoff, op1, op2, vl);
}

vbool4_t test_vmfeq_vf_f16m4_b4_mu(vbool4_t mask, vbool4_t maskedoff, vfloat16m4_t op1, float16_t op2, size_t vl) {
  return __riscv_vmfeq_vf_f16m4_b4_mu(mask, maskedoff, op1, op2, vl);
}

vbool2_t test_vmfeq_vv_f16m8_b2_mu(vbool2_t mask, vbool2_t maskedoff, vfloat16m8_t op1, vfloat16m8_t op2, size_t vl) {
  return __riscv_vmfeq_vv_f16m8_b2_mu(mask, maskedoff, op1, op2, vl);
}

vbool2_t test_vmfeq_vf_f16m8_b2_mu(vbool2_t mask, vbool2_t maskedoff, vfloat16m8_t op1, float16_t op2, size_t vl) {
  return __riscv_vmfeq_vf_f16m8_b2_mu(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmfeq_vv_f32mf2_b64_mu(vbool64_t mask, vbool64_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vmfeq_vv_f32mf2_b64_mu(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmfeq_vf_f32mf2_b64_mu(vbool64_t mask, vbool64_t maskedoff, vfloat32mf2_t op1, float32_t op2, size_t vl) {
  return __riscv_vmfeq_vf_f32mf2_b64_mu(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmfeq_vv_f32m1_b32_mu(vbool32_t mask, vbool32_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vmfeq_vv_f32m1_b32_mu(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmfeq_vf_f32m1_b32_mu(vbool32_t mask, vbool32_t maskedoff, vfloat32m1_t op1, float32_t op2, size_t vl) {
  return __riscv_vmfeq_vf_f32m1_b32_mu(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmfeq_vv_f32m2_b16_mu(vbool16_t mask, vbool16_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vmfeq_vv_f32m2_b16_mu(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmfeq_vf_f32m2_b16_mu(vbool16_t mask, vbool16_t maskedoff, vfloat32m2_t op1, float32_t op2, size_t vl) {
  return __riscv_vmfeq_vf_f32m2_b16_mu(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmfeq_vv_f32m4_b8_mu(vbool8_t mask, vbool8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vmfeq_vv_f32m4_b8_mu(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmfeq_vf_f32m4_b8_mu(vbool8_t mask, vbool8_t maskedoff, vfloat32m4_t op1, float32_t op2, size_t vl) {
  return __riscv_vmfeq_vf_f32m4_b8_mu(mask, maskedoff, op1, op2, vl);
}

vbool4_t test_vmfeq_vv_f32m8_b4_mu(vbool4_t mask, vbool4_t maskedoff, vfloat32m8_t op1, vfloat32m8_t op2, size_t vl) {
  return __riscv_vmfeq_vv_f32m8_b4_mu(mask, maskedoff, op1, op2, vl);
}

vbool4_t test_vmfeq_vf_f32m8_b4_mu(vbool4_t mask, vbool4_t maskedoff, vfloat32m8_t op1, float32_t op2, size_t vl) {
  return __riscv_vmfeq_vf_f32m8_b4_mu(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmfeq_vv_f64m1_b64_mu(vbool64_t mask, vbool64_t maskedoff, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl) {
  return __riscv_vmfeq_vv_f64m1_b64_mu(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmfeq_vf_f64m1_b64_mu(vbool64_t mask, vbool64_t maskedoff, vfloat64m1_t op1, float64_t op2, size_t vl) {
  return __riscv_vmfeq_vf_f64m1_b64_mu(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmfeq_vv_f64m2_b32_mu(vbool32_t mask, vbool32_t maskedoff, vfloat64m2_t op1, vfloat64m2_t op2, size_t vl) {
  return __riscv_vmfeq_vv_f64m2_b32_mu(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmfeq_vf_f64m2_b32_mu(vbool32_t mask, vbool32_t maskedoff, vfloat64m2_t op1, float64_t op2, size_t vl) {
  return __riscv_vmfeq_vf_f64m2_b32_mu(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmfeq_vv_f64m4_b16_mu(vbool16_t mask, vbool16_t maskedoff, vfloat64m4_t op1, vfloat64m4_t op2, size_t vl) {
  return __riscv_vmfeq_vv_f64m4_b16_mu(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmfeq_vf_f64m4_b16_mu(vbool16_t mask, vbool16_t maskedoff, vfloat64m4_t op1, float64_t op2, size_t vl) {
  return __riscv_vmfeq_vf_f64m4_b16_mu(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmfeq_vv_f64m8_b8_mu(vbool8_t mask, vbool8_t maskedoff, vfloat64m8_t op1, vfloat64m8_t op2, size_t vl) {
  return __riscv_vmfeq_vv_f64m8_b8_mu(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmfeq_vf_f64m8_b8_mu(vbool8_t mask, vbool8_t maskedoff, vfloat64m8_t op1, float64_t op2, size_t vl) {
  return __riscv_vmfeq_vf_f64m8_b8_mu(mask, maskedoff, op1, op2, vl);
}

