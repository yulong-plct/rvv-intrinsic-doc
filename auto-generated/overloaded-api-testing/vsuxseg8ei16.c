#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsuxseg8ei16_v_f16mf4(float16_t *base, vuint16mf4_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, vfloat16mf4_t v6, vfloat16mf4_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_f16mf2(float16_t *base, vuint16mf2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, vfloat16mf2_t v6, vfloat16mf2_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_f16m1(float16_t *base, vuint16m1_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, vfloat16m1_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_f32mf2(float32_t *base, vuint16mf4_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, vfloat32mf2_t v6, vfloat32mf2_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_f32m1(float32_t *base, vuint16mf2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, vfloat32m1_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_f64m1(float64_t *base, vuint16mf4_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, vfloat64m1_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_i8mf8(int8_t *base, vuint16mf4_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3, vint8mf8_t v4, vint8mf8_t v5, vint8mf8_t v6, vint8mf8_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_i8mf4(int8_t *base, vuint16mf2_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3, vint8mf4_t v4, vint8mf4_t v5, vint8mf4_t v6, vint8mf4_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_i8mf2(int8_t *base, vuint16m1_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3, vint8mf2_t v4, vint8mf2_t v5, vint8mf2_t v6, vint8mf2_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_i8m1(int8_t *base, vuint16m2_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, vint8m1_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_i16mf4(int16_t *base, vuint16mf4_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3, vint16mf4_t v4, vint16mf4_t v5, vint16mf4_t v6, vint16mf4_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_i16mf2(int16_t *base, vuint16mf2_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3, vint16mf2_t v4, vint16mf2_t v5, vint16mf2_t v6, vint16mf2_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_i16m1(int16_t *base, vuint16m1_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_i32mf2(int32_t *base, vuint16mf4_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4, vint32mf2_t v5, vint32mf2_t v6, vint32mf2_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_i32m1(int32_t *base, vuint16mf2_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_i64m1(int64_t *base, vuint16mf4_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_u8mf8(uint8_t *base, vuint16mf4_t bindex, vuint8mf8_t v0, vuint8mf8_t v1, vuint8mf8_t v2, vuint8mf8_t v3, vuint8mf8_t v4, vuint8mf8_t v5, vuint8mf8_t v6, vuint8mf8_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_u8mf4(uint8_t *base, vuint16mf2_t bindex, vuint8mf4_t v0, vuint8mf4_t v1, vuint8mf4_t v2, vuint8mf4_t v3, vuint8mf4_t v4, vuint8mf4_t v5, vuint8mf4_t v6, vuint8mf4_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_u8mf2(uint8_t *base, vuint16m1_t bindex, vuint8mf2_t v0, vuint8mf2_t v1, vuint8mf2_t v2, vuint8mf2_t v3, vuint8mf2_t v4, vuint8mf2_t v5, vuint8mf2_t v6, vuint8mf2_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_u8m1(uint8_t *base, vuint16m2_t bindex, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, vuint8m1_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_u16mf4(uint16_t *base, vuint16mf4_t bindex, vuint16mf4_t v0, vuint16mf4_t v1, vuint16mf4_t v2, vuint16mf4_t v3, vuint16mf4_t v4, vuint16mf4_t v5, vuint16mf4_t v6, vuint16mf4_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_u16mf2(uint16_t *base, vuint16mf2_t bindex, vuint16mf2_t v0, vuint16mf2_t v1, vuint16mf2_t v2, vuint16mf2_t v3, vuint16mf2_t v4, vuint16mf2_t v5, vuint16mf2_t v6, vuint16mf2_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_u16m1(uint16_t *base, vuint16m1_t bindex, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, vuint16m1_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_u32mf2(uint32_t *base, vuint16mf4_t bindex, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, vuint32mf2_t v3, vuint32mf2_t v4, vuint32mf2_t v5, vuint32mf2_t v6, vuint32mf2_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_u32m1(uint32_t *base, vuint16mf2_t bindex, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_u64m1(uint64_t *base, vuint16mf4_t bindex, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_f16mf4_m(vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, vfloat16mf4_t v6, vfloat16mf4_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_f16mf2_m(vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, vfloat16mf2_t v6, vfloat16mf2_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_f16m1_m(vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, vfloat16m1_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_f32mf2_m(vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, vfloat32mf2_t v6, vfloat32mf2_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_f32m1_m(vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, vfloat32m1_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_f64m1_m(vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, vfloat64m1_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_i8mf8_m(vbool64_t mask, int8_t *base, vuint16mf4_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3, vint8mf8_t v4, vint8mf8_t v5, vint8mf8_t v6, vint8mf8_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_i8mf4_m(vbool32_t mask, int8_t *base, vuint16mf2_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3, vint8mf4_t v4, vint8mf4_t v5, vint8mf4_t v6, vint8mf4_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_i8mf2_m(vbool16_t mask, int8_t *base, vuint16m1_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3, vint8mf2_t v4, vint8mf2_t v5, vint8mf2_t v6, vint8mf2_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_i8m1_m(vbool8_t mask, int8_t *base, vuint16m2_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, vint8m1_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_i16mf4_m(vbool64_t mask, int16_t *base, vuint16mf4_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3, vint16mf4_t v4, vint16mf4_t v5, vint16mf4_t v6, vint16mf4_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_i16mf2_m(vbool32_t mask, int16_t *base, vuint16mf2_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3, vint16mf2_t v4, vint16mf2_t v5, vint16mf2_t v6, vint16mf2_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_i16m1_m(vbool16_t mask, int16_t *base, vuint16m1_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_i32mf2_m(vbool64_t mask, int32_t *base, vuint16mf4_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4, vint32mf2_t v5, vint32mf2_t v6, vint32mf2_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_i32m1_m(vbool32_t mask, int32_t *base, vuint16mf2_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_i64m1_m(vbool64_t mask, int64_t *base, vuint16mf4_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_u8mf8_m(vbool64_t mask, uint8_t *base, vuint16mf4_t bindex, vuint8mf8_t v0, vuint8mf8_t v1, vuint8mf8_t v2, vuint8mf8_t v3, vuint8mf8_t v4, vuint8mf8_t v5, vuint8mf8_t v6, vuint8mf8_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_u8mf4_m(vbool32_t mask, uint8_t *base, vuint16mf2_t bindex, vuint8mf4_t v0, vuint8mf4_t v1, vuint8mf4_t v2, vuint8mf4_t v3, vuint8mf4_t v4, vuint8mf4_t v5, vuint8mf4_t v6, vuint8mf4_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_u8mf2_m(vbool16_t mask, uint8_t *base, vuint16m1_t bindex, vuint8mf2_t v0, vuint8mf2_t v1, vuint8mf2_t v2, vuint8mf2_t v3, vuint8mf2_t v4, vuint8mf2_t v5, vuint8mf2_t v6, vuint8mf2_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_u8m1_m(vbool8_t mask, uint8_t *base, vuint16m2_t bindex, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, vuint8m1_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_u16mf4_m(vbool64_t mask, uint16_t *base, vuint16mf4_t bindex, vuint16mf4_t v0, vuint16mf4_t v1, vuint16mf4_t v2, vuint16mf4_t v3, vuint16mf4_t v4, vuint16mf4_t v5, vuint16mf4_t v6, vuint16mf4_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_u16mf2_m(vbool32_t mask, uint16_t *base, vuint16mf2_t bindex, vuint16mf2_t v0, vuint16mf2_t v1, vuint16mf2_t v2, vuint16mf2_t v3, vuint16mf2_t v4, vuint16mf2_t v5, vuint16mf2_t v6, vuint16mf2_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_u16m1_m(vbool16_t mask, uint16_t *base, vuint16m1_t bindex, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, vuint16m1_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_u32mf2_m(vbool64_t mask, uint32_t *base, vuint16mf4_t bindex, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, vuint32mf2_t v3, vuint32mf2_t v4, vuint32mf2_t v5, vuint32mf2_t v6, vuint32mf2_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_u32m1_m(vbool32_t mask, uint32_t *base, vuint16mf2_t bindex, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsuxseg8ei16_v_u64m1_m(vbool64_t mask, uint64_t *base, vuint16mf4_t bindex, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, size_t vl) {
  return __riscv_vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

