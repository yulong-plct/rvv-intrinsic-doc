#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg4e16_v_f16mf4x4(float16_t *base, vfloat16mf4x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(base, v_tuple, vl);
}

void test_vsseg4e16_v_f16mf2x4(float16_t *base, vfloat16mf2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(base, v_tuple, vl);
}

void test_vsseg4e16_v_f16m1x4(float16_t *base, vfloat16m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(base, v_tuple, vl);
}

void test_vsseg4e16_v_f16m2x4(float16_t *base, vfloat16m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(base, v_tuple, vl);
}

void test_vsseg4e16_v_i16mf4x4(int16_t *base, vint16mf4x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(base, v_tuple, vl);
}

void test_vsseg4e16_v_i16mf2x4(int16_t *base, vint16mf2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(base, v_tuple, vl);
}

void test_vsseg4e16_v_i16m1x4(int16_t *base, vint16m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(base, v_tuple, vl);
}

void test_vsseg4e16_v_i16m2x4(int16_t *base, vint16m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(base, v_tuple, vl);
}

void test_vsseg4e16_v_u16mf4x4(uint16_t *base, vuint16mf4x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(base, v_tuple, vl);
}

void test_vsseg4e16_v_u16mf2x4(uint16_t *base, vuint16mf2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(base, v_tuple, vl);
}

void test_vsseg4e16_v_u16m1x4(uint16_t *base, vuint16m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(base, v_tuple, vl);
}

void test_vsseg4e16_v_u16m2x4(uint16_t *base, vuint16m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(base, v_tuple, vl);
}

void test_vsseg4e16_v_f16mf4x4_m(vbool64_t mask, float16_t *base, vfloat16mf4x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(mask, base, v_tuple, vl);
}

void test_vsseg4e16_v_f16mf2x4_m(vbool32_t mask, float16_t *base, vfloat16mf2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(mask, base, v_tuple, vl);
}

void test_vsseg4e16_v_f16m1x4_m(vbool16_t mask, float16_t *base, vfloat16m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(mask, base, v_tuple, vl);
}

void test_vsseg4e16_v_f16m2x4_m(vbool8_t mask, float16_t *base, vfloat16m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(mask, base, v_tuple, vl);
}

void test_vsseg4e16_v_i16mf4x4_m(vbool64_t mask, int16_t *base, vint16mf4x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(mask, base, v_tuple, vl);
}

void test_vsseg4e16_v_i16mf2x4_m(vbool32_t mask, int16_t *base, vint16mf2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(mask, base, v_tuple, vl);
}

void test_vsseg4e16_v_i16m1x4_m(vbool16_t mask, int16_t *base, vint16m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(mask, base, v_tuple, vl);
}

void test_vsseg4e16_v_i16m2x4_m(vbool8_t mask, int16_t *base, vint16m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(mask, base, v_tuple, vl);
}

void test_vsseg4e16_v_u16mf4x4_m(vbool64_t mask, uint16_t *base, vuint16mf4x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(mask, base, v_tuple, vl);
}

void test_vsseg4e16_v_u16mf2x4_m(vbool32_t mask, uint16_t *base, vuint16mf2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(mask, base, v_tuple, vl);
}

void test_vsseg4e16_v_u16m1x4_m(vbool16_t mask, uint16_t *base, vuint16m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(mask, base, v_tuple, vl);
}

void test_vsseg4e16_v_u16m2x4_m(vbool8_t mask, uint16_t *base, vuint16m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(mask, base, v_tuple, vl);
}

