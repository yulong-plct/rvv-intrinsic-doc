#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg7e16_v_f16mf4x7(float16_t *base, vfloat16mf4x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e16(base, v_tuple, vl);
}

void test_vsseg7e16_v_f16mf2x7(float16_t *base, vfloat16mf2x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e16(base, v_tuple, vl);
}

void test_vsseg7e16_v_f16m1x7(float16_t *base, vfloat16m1x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e16(base, v_tuple, vl);
}

void test_vsseg7e16_v_i16mf4x7(int16_t *base, vint16mf4x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e16(base, v_tuple, vl);
}

void test_vsseg7e16_v_i16mf2x7(int16_t *base, vint16mf2x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e16(base, v_tuple, vl);
}

void test_vsseg7e16_v_i16m1x7(int16_t *base, vint16m1x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e16(base, v_tuple, vl);
}

void test_vsseg7e16_v_u16mf4x7(uint16_t *base, vuint16mf4x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e16(base, v_tuple, vl);
}

void test_vsseg7e16_v_u16mf2x7(uint16_t *base, vuint16mf2x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e16(base, v_tuple, vl);
}

void test_vsseg7e16_v_u16m1x7(uint16_t *base, vuint16m1x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e16(base, v_tuple, vl);
}

void test_vsseg7e16_v_f16mf4x7_m(vbool64_t mask, float16_t *base, vfloat16mf4x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e16(mask, base, v_tuple, vl);
}

void test_vsseg7e16_v_f16mf2x7_m(vbool32_t mask, float16_t *base, vfloat16mf2x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e16(mask, base, v_tuple, vl);
}

void test_vsseg7e16_v_f16m1x7_m(vbool16_t mask, float16_t *base, vfloat16m1x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e16(mask, base, v_tuple, vl);
}

void test_vsseg7e16_v_i16mf4x7_m(vbool64_t mask, int16_t *base, vint16mf4x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e16(mask, base, v_tuple, vl);
}

void test_vsseg7e16_v_i16mf2x7_m(vbool32_t mask, int16_t *base, vint16mf2x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e16(mask, base, v_tuple, vl);
}

void test_vsseg7e16_v_i16m1x7_m(vbool16_t mask, int16_t *base, vint16m1x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e16(mask, base, v_tuple, vl);
}

void test_vsseg7e16_v_u16mf4x7_m(vbool64_t mask, uint16_t *base, vuint16mf4x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e16(mask, base, v_tuple, vl);
}

void test_vsseg7e16_v_u16mf2x7_m(vbool32_t mask, uint16_t *base, vuint16mf2x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e16(mask, base, v_tuple, vl);
}

void test_vsseg7e16_v_u16m1x7_m(vbool16_t mask, uint16_t *base, vuint16m1x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e16(mask, base, v_tuple, vl);
}

