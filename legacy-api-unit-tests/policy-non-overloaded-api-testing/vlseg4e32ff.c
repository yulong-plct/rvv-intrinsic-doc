#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg4e32ff_v_f32mf2_tu(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, vfloat32mf2_t maskedoff3, const float32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_f32mf2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_f32m1_tu(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, vfloat32m1_t maskedoff3, const float32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_f32m1_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_f32m2_tu(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vfloat32m2_t *v3, vfloat32m2_t maskedoff0, vfloat32m2_t maskedoff1, vfloat32m2_t maskedoff2, vfloat32m2_t maskedoff3, const float32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_f32m2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_i32mf2_tu(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, vint32mf2_t maskedoff3, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_i32mf2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_i32m1_tu(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, vint32m1_t maskedoff3, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_i32m1_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_i32m2_tu(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vint32m2_t maskedoff0, vint32m2_t maskedoff1, vint32m2_t maskedoff2, vint32m2_t maskedoff3, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_i32m2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_u32mf2_tu(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, vuint32mf2_t maskedoff3, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_u32mf2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_u32m1_tu(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, vuint32m1_t maskedoff3, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_u32m1_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_u32m2_tu(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vuint32m2_t maskedoff0, vuint32m2_t maskedoff1, vuint32m2_t maskedoff2, vuint32m2_t maskedoff3, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_u32m2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_f32mf2_ta(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, const float32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_f32mf2_ta(v0, v1, v2, v3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_f32m1_ta(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, const float32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_f32m1_ta(v0, v1, v2, v3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_f32m2_ta(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vfloat32m2_t *v3, const float32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_f32m2_ta(v0, v1, v2, v3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_i32mf2_ta(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_i32mf2_ta(v0, v1, v2, v3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_i32m1_ta(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_i32m1_ta(v0, v1, v2, v3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_i32m2_ta(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_i32m2_ta(v0, v1, v2, v3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_u32mf2_ta(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_u32mf2_ta(v0, v1, v2, v3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_u32m1_ta(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_u32m1_ta(v0, v1, v2, v3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_u32m2_ta(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_u32m2_ta(v0, v1, v2, v3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_f32mf2_tuma(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, vfloat32mf2_t maskedoff3, const float32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_f32mf2_tuma(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_f32m1_tuma(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, vfloat32m1_t maskedoff3, const float32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_f32m1_tuma(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_f32m2_tuma(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vfloat32m2_t *v3, vbool16_t mask, vfloat32m2_t maskedoff0, vfloat32m2_t maskedoff1, vfloat32m2_t maskedoff2, vfloat32m2_t maskedoff3, const float32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_f32m2_tuma(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_i32mf2_tuma(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, vint32mf2_t maskedoff3, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_i32mf2_tuma(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_i32m1_tuma(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, vint32m1_t maskedoff3, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_i32m1_tuma(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_i32m2_tuma(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vbool16_t mask, vint32m2_t maskedoff0, vint32m2_t maskedoff1, vint32m2_t maskedoff2, vint32m2_t maskedoff3, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_i32m2_tuma(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_u32mf2_tuma(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, vuint32mf2_t maskedoff3, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_u32mf2_tuma(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_u32m1_tuma(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, vuint32m1_t maskedoff3, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_u32m1_tuma(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_u32m2_tuma(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vbool16_t mask, vuint32m2_t maskedoff0, vuint32m2_t maskedoff1, vuint32m2_t maskedoff2, vuint32m2_t maskedoff3, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_u32m2_tuma(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_f32mf2_tumu(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, vfloat32mf2_t maskedoff3, const float32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_f32mf2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_f32m1_tumu(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, vfloat32m1_t maskedoff3, const float32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_f32m1_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_f32m2_tumu(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vfloat32m2_t *v3, vbool16_t mask, vfloat32m2_t maskedoff0, vfloat32m2_t maskedoff1, vfloat32m2_t maskedoff2, vfloat32m2_t maskedoff3, const float32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_f32m2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_i32mf2_tumu(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, vint32mf2_t maskedoff3, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_i32mf2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_i32m1_tumu(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, vint32m1_t maskedoff3, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_i32m1_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_i32m2_tumu(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vbool16_t mask, vint32m2_t maskedoff0, vint32m2_t maskedoff1, vint32m2_t maskedoff2, vint32m2_t maskedoff3, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_i32m2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_u32mf2_tumu(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, vuint32mf2_t maskedoff3, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_u32mf2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_u32m1_tumu(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, vuint32m1_t maskedoff3, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_u32m1_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_u32m2_tumu(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vbool16_t mask, vuint32m2_t maskedoff0, vuint32m2_t maskedoff1, vuint32m2_t maskedoff2, vuint32m2_t maskedoff3, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_u32m2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_f32mf2_tama(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vbool64_t mask, const float32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_f32mf2_tama(v0, v1, v2, v3, mask, base, new_vl, vl);
}

void test_vlseg4e32ff_v_f32m1_tama(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vbool32_t mask, const float32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_f32m1_tama(v0, v1, v2, v3, mask, base, new_vl, vl);
}

void test_vlseg4e32ff_v_f32m2_tama(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vfloat32m2_t *v3, vbool16_t mask, const float32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_f32m2_tama(v0, v1, v2, v3, mask, base, new_vl, vl);
}

void test_vlseg4e32ff_v_i32mf2_tama(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vbool64_t mask, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_i32mf2_tama(v0, v1, v2, v3, mask, base, new_vl, vl);
}

void test_vlseg4e32ff_v_i32m1_tama(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vbool32_t mask, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_i32m1_tama(v0, v1, v2, v3, mask, base, new_vl, vl);
}

void test_vlseg4e32ff_v_i32m2_tama(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vbool16_t mask, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_i32m2_tama(v0, v1, v2, v3, mask, base, new_vl, vl);
}

void test_vlseg4e32ff_v_u32mf2_tama(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vbool64_t mask, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_u32mf2_tama(v0, v1, v2, v3, mask, base, new_vl, vl);
}

void test_vlseg4e32ff_v_u32m1_tama(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vbool32_t mask, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_u32m1_tama(v0, v1, v2, v3, mask, base, new_vl, vl);
}

void test_vlseg4e32ff_v_u32m2_tama(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vbool16_t mask, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_u32m2_tama(v0, v1, v2, v3, mask, base, new_vl, vl);
}

void test_vlseg4e32ff_v_f32mf2_tamu(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, vfloat32mf2_t maskedoff3, const float32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_f32mf2_tamu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_f32m1_tamu(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, vfloat32m1_t maskedoff3, const float32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_f32m1_tamu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_f32m2_tamu(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vfloat32m2_t *v3, vbool16_t mask, vfloat32m2_t maskedoff0, vfloat32m2_t maskedoff1, vfloat32m2_t maskedoff2, vfloat32m2_t maskedoff3, const float32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_f32m2_tamu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_i32mf2_tamu(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, vint32mf2_t maskedoff3, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_i32mf2_tamu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_i32m1_tamu(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, vint32m1_t maskedoff3, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_i32m1_tamu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_i32m2_tamu(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vbool16_t mask, vint32m2_t maskedoff0, vint32m2_t maskedoff1, vint32m2_t maskedoff2, vint32m2_t maskedoff3, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_i32m2_tamu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_u32mf2_tamu(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, vuint32mf2_t maskedoff3, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_u32mf2_tamu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_u32m1_tamu(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, vuint32m1_t maskedoff3, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_u32m1_tamu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

void test_vlseg4e32ff_v_u32m2_tamu(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vbool16_t mask, vuint32m2_t maskedoff0, vuint32m2_t maskedoff1, vuint32m2_t maskedoff2, vuint32m2_t maskedoff3, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg4e32ff_v_u32m2_tamu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

