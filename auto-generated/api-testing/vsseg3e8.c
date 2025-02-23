#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg3e8_v_i8mf8x3(int8_t *base, vint8mf8x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e8_v_i8mf8x3(base, v_tuple, vl);
}

void test_vsseg3e8_v_i8mf4x3(int8_t *base, vint8mf4x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e8_v_i8mf4x3(base, v_tuple, vl);
}

void test_vsseg3e8_v_i8mf2x3(int8_t *base, vint8mf2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e8_v_i8mf2x3(base, v_tuple, vl);
}

void test_vsseg3e8_v_i8m1x3(int8_t *base, vint8m1x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e8_v_i8m1x3(base, v_tuple, vl);
}

void test_vsseg3e8_v_i8m2x3(int8_t *base, vint8m2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e8_v_i8m2x3(base, v_tuple, vl);
}

void test_vsseg3e8_v_u8mf8x3(uint8_t *base, vuint8mf8x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e8_v_u8mf8x3(base, v_tuple, vl);
}

void test_vsseg3e8_v_u8mf4x3(uint8_t *base, vuint8mf4x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e8_v_u8mf4x3(base, v_tuple, vl);
}

void test_vsseg3e8_v_u8mf2x3(uint8_t *base, vuint8mf2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e8_v_u8mf2x3(base, v_tuple, vl);
}

void test_vsseg3e8_v_u8m1x3(uint8_t *base, vuint8m1x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e8_v_u8m1x3(base, v_tuple, vl);
}

void test_vsseg3e8_v_u8m2x3(uint8_t *base, vuint8m2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e8_v_u8m2x3(base, v_tuple, vl);
}

void test_vsseg3e8_v_i8mf8x3_m(vbool64_t mask, int8_t *base, vint8mf8x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e8_v_i8mf8x3_m(mask, base, v_tuple, vl);
}

void test_vsseg3e8_v_i8mf4x3_m(vbool32_t mask, int8_t *base, vint8mf4x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e8_v_i8mf4x3_m(mask, base, v_tuple, vl);
}

void test_vsseg3e8_v_i8mf2x3_m(vbool16_t mask, int8_t *base, vint8mf2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e8_v_i8mf2x3_m(mask, base, v_tuple, vl);
}

void test_vsseg3e8_v_i8m1x3_m(vbool8_t mask, int8_t *base, vint8m1x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e8_v_i8m1x3_m(mask, base, v_tuple, vl);
}

void test_vsseg3e8_v_i8m2x3_m(vbool4_t mask, int8_t *base, vint8m2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e8_v_i8m2x3_m(mask, base, v_tuple, vl);
}

void test_vsseg3e8_v_u8mf8x3_m(vbool64_t mask, uint8_t *base, vuint8mf8x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e8_v_u8mf8x3_m(mask, base, v_tuple, vl);
}

void test_vsseg3e8_v_u8mf4x3_m(vbool32_t mask, uint8_t *base, vuint8mf4x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e8_v_u8mf4x3_m(mask, base, v_tuple, vl);
}

void test_vsseg3e8_v_u8mf2x3_m(vbool16_t mask, uint8_t *base, vuint8mf2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e8_v_u8mf2x3_m(mask, base, v_tuple, vl);
}

void test_vsseg3e8_v_u8m1x3_m(vbool8_t mask, uint8_t *base, vuint8m1x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e8_v_u8m1x3_m(mask, base, v_tuple, vl);
}

void test_vsseg3e8_v_u8m2x3_m(vbool4_t mask, uint8_t *base, vuint8m2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e8_v_u8m2x3_m(mask, base, v_tuple, vl);
}

