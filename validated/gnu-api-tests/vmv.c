/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8_t test_vmv_v_v_i8mf8(vint8mf8_t src, size_t vl) {
  return __riscv_vmv_v_v_i8mf8(src, vl);
}

vint8mf8_t test_vmv_v_x_i8mf8(int8_t src, size_t vl) {
  return __riscv_vmv_v_x_i8mf8(src, vl);
}

vint8mf4_t test_vmv_v_v_i8mf4(vint8mf4_t src, size_t vl) {
  return __riscv_vmv_v_v_i8mf4(src, vl);
}

vint8mf4_t test_vmv_v_x_i8mf4(int8_t src, size_t vl) {
  return __riscv_vmv_v_x_i8mf4(src, vl);
}

vint8mf2_t test_vmv_v_v_i8mf2(vint8mf2_t src, size_t vl) {
  return __riscv_vmv_v_v_i8mf2(src, vl);
}

vint8mf2_t test_vmv_v_x_i8mf2(int8_t src, size_t vl) {
  return __riscv_vmv_v_x_i8mf2(src, vl);
}

vint8m1_t test_vmv_v_v_i8m1(vint8m1_t src, size_t vl) {
  return __riscv_vmv_v_v_i8m1(src, vl);
}

vint8m1_t test_vmv_v_x_i8m1(int8_t src, size_t vl) {
  return __riscv_vmv_v_x_i8m1(src, vl);
}

vint8m2_t test_vmv_v_v_i8m2(vint8m2_t src, size_t vl) {
  return __riscv_vmv_v_v_i8m2(src, vl);
}

vint8m2_t test_vmv_v_x_i8m2(int8_t src, size_t vl) {
  return __riscv_vmv_v_x_i8m2(src, vl);
}

vint8m4_t test_vmv_v_v_i8m4(vint8m4_t src, size_t vl) {
  return __riscv_vmv_v_v_i8m4(src, vl);
}

vint8m4_t test_vmv_v_x_i8m4(int8_t src, size_t vl) {
  return __riscv_vmv_v_x_i8m4(src, vl);
}

vint8m8_t test_vmv_v_v_i8m8(vint8m8_t src, size_t vl) {
  return __riscv_vmv_v_v_i8m8(src, vl);
}

vint8m8_t test_vmv_v_x_i8m8(int8_t src, size_t vl) {
  return __riscv_vmv_v_x_i8m8(src, vl);
}

vint16mf4_t test_vmv_v_v_i16mf4(vint16mf4_t src, size_t vl) {
  return __riscv_vmv_v_v_i16mf4(src, vl);
}

vint16mf4_t test_vmv_v_x_i16mf4(int16_t src, size_t vl) {
  return __riscv_vmv_v_x_i16mf4(src, vl);
}

vint16mf2_t test_vmv_v_v_i16mf2(vint16mf2_t src, size_t vl) {
  return __riscv_vmv_v_v_i16mf2(src, vl);
}

vint16mf2_t test_vmv_v_x_i16mf2(int16_t src, size_t vl) {
  return __riscv_vmv_v_x_i16mf2(src, vl);
}

vint16m1_t test_vmv_v_v_i16m1(vint16m1_t src, size_t vl) {
  return __riscv_vmv_v_v_i16m1(src, vl);
}

vint16m1_t test_vmv_v_x_i16m1(int16_t src, size_t vl) {
  return __riscv_vmv_v_x_i16m1(src, vl);
}

vint16m2_t test_vmv_v_v_i16m2(vint16m2_t src, size_t vl) {
  return __riscv_vmv_v_v_i16m2(src, vl);
}

vint16m2_t test_vmv_v_x_i16m2(int16_t src, size_t vl) {
  return __riscv_vmv_v_x_i16m2(src, vl);
}

vint16m4_t test_vmv_v_v_i16m4(vint16m4_t src, size_t vl) {
  return __riscv_vmv_v_v_i16m4(src, vl);
}

vint16m4_t test_vmv_v_x_i16m4(int16_t src, size_t vl) {
  return __riscv_vmv_v_x_i16m4(src, vl);
}

vint16m8_t test_vmv_v_v_i16m8(vint16m8_t src, size_t vl) {
  return __riscv_vmv_v_v_i16m8(src, vl);
}

vint16m8_t test_vmv_v_x_i16m8(int16_t src, size_t vl) {
  return __riscv_vmv_v_x_i16m8(src, vl);
}

vint32mf2_t test_vmv_v_v_i32mf2(vint32mf2_t src, size_t vl) {
  return __riscv_vmv_v_v_i32mf2(src, vl);
}

vint32mf2_t test_vmv_v_x_i32mf2(int32_t src, size_t vl) {
  return __riscv_vmv_v_x_i32mf2(src, vl);
}

vint32m1_t test_vmv_v_v_i32m1(vint32m1_t src, size_t vl) {
  return __riscv_vmv_v_v_i32m1(src, vl);
}

vint32m1_t test_vmv_v_x_i32m1(int32_t src, size_t vl) {
  return __riscv_vmv_v_x_i32m1(src, vl);
}

vint32m2_t test_vmv_v_v_i32m2(vint32m2_t src, size_t vl) {
  return __riscv_vmv_v_v_i32m2(src, vl);
}

vint32m2_t test_vmv_v_x_i32m2(int32_t src, size_t vl) {
  return __riscv_vmv_v_x_i32m2(src, vl);
}

vint32m4_t test_vmv_v_v_i32m4(vint32m4_t src, size_t vl) {
  return __riscv_vmv_v_v_i32m4(src, vl);
}

vint32m4_t test_vmv_v_x_i32m4(int32_t src, size_t vl) {
  return __riscv_vmv_v_x_i32m4(src, vl);
}

vint32m8_t test_vmv_v_v_i32m8(vint32m8_t src, size_t vl) {
  return __riscv_vmv_v_v_i32m8(src, vl);
}

vint32m8_t test_vmv_v_x_i32m8(int32_t src, size_t vl) {
  return __riscv_vmv_v_x_i32m8(src, vl);
}

vint64m1_t test_vmv_v_v_i64m1(vint64m1_t src, size_t vl) {
  return __riscv_vmv_v_v_i64m1(src, vl);
}

vint64m1_t test_vmv_v_x_i64m1(int64_t src, size_t vl) {
  return __riscv_vmv_v_x_i64m1(src, vl);
}

vint64m2_t test_vmv_v_v_i64m2(vint64m2_t src, size_t vl) {
  return __riscv_vmv_v_v_i64m2(src, vl);
}

vint64m2_t test_vmv_v_x_i64m2(int64_t src, size_t vl) {
  return __riscv_vmv_v_x_i64m2(src, vl);
}

vint64m4_t test_vmv_v_v_i64m4(vint64m4_t src, size_t vl) {
  return __riscv_vmv_v_v_i64m4(src, vl);
}

vint64m4_t test_vmv_v_x_i64m4(int64_t src, size_t vl) {
  return __riscv_vmv_v_x_i64m4(src, vl);
}

vint64m8_t test_vmv_v_v_i64m8(vint64m8_t src, size_t vl) {
  return __riscv_vmv_v_v_i64m8(src, vl);
}

vint64m8_t test_vmv_v_x_i64m8(int64_t src, size_t vl) {
  return __riscv_vmv_v_x_i64m8(src, vl);
}

vuint8mf8_t test_vmv_v_v_u8mf8(vuint8mf8_t src, size_t vl) {
  return __riscv_vmv_v_v_u8mf8(src, vl);
}

vuint8mf8_t test_vmv_v_x_u8mf8(uint8_t src, size_t vl) {
  return __riscv_vmv_v_x_u8mf8(src, vl);
}

vuint8mf4_t test_vmv_v_v_u8mf4(vuint8mf4_t src, size_t vl) {
  return __riscv_vmv_v_v_u8mf4(src, vl);
}

vuint8mf4_t test_vmv_v_x_u8mf4(uint8_t src, size_t vl) {
  return __riscv_vmv_v_x_u8mf4(src, vl);
}

vuint8mf2_t test_vmv_v_v_u8mf2(vuint8mf2_t src, size_t vl) {
  return __riscv_vmv_v_v_u8mf2(src, vl);
}

vuint8mf2_t test_vmv_v_x_u8mf2(uint8_t src, size_t vl) {
  return __riscv_vmv_v_x_u8mf2(src, vl);
}

vuint8m1_t test_vmv_v_v_u8m1(vuint8m1_t src, size_t vl) {
  return __riscv_vmv_v_v_u8m1(src, vl);
}

vuint8m1_t test_vmv_v_x_u8m1(uint8_t src, size_t vl) {
  return __riscv_vmv_v_x_u8m1(src, vl);
}

vuint8m2_t test_vmv_v_v_u8m2(vuint8m2_t src, size_t vl) {
  return __riscv_vmv_v_v_u8m2(src, vl);
}

vuint8m2_t test_vmv_v_x_u8m2(uint8_t src, size_t vl) {
  return __riscv_vmv_v_x_u8m2(src, vl);
}

vuint8m4_t test_vmv_v_v_u8m4(vuint8m4_t src, size_t vl) {
  return __riscv_vmv_v_v_u8m4(src, vl);
}

vuint8m4_t test_vmv_v_x_u8m4(uint8_t src, size_t vl) {
  return __riscv_vmv_v_x_u8m4(src, vl);
}

vuint8m8_t test_vmv_v_v_u8m8(vuint8m8_t src, size_t vl) {
  return __riscv_vmv_v_v_u8m8(src, vl);
}

vuint8m8_t test_vmv_v_x_u8m8(uint8_t src, size_t vl) {
  return __riscv_vmv_v_x_u8m8(src, vl);
}

vuint16mf4_t test_vmv_v_v_u16mf4(vuint16mf4_t src, size_t vl) {
  return __riscv_vmv_v_v_u16mf4(src, vl);
}

vuint16mf4_t test_vmv_v_x_u16mf4(uint16_t src, size_t vl) {
  return __riscv_vmv_v_x_u16mf4(src, vl);
}

vuint16mf2_t test_vmv_v_v_u16mf2(vuint16mf2_t src, size_t vl) {
  return __riscv_vmv_v_v_u16mf2(src, vl);
}

vuint16mf2_t test_vmv_v_x_u16mf2(uint16_t src, size_t vl) {
  return __riscv_vmv_v_x_u16mf2(src, vl);
}

vuint16m1_t test_vmv_v_v_u16m1(vuint16m1_t src, size_t vl) {
  return __riscv_vmv_v_v_u16m1(src, vl);
}

vuint16m1_t test_vmv_v_x_u16m1(uint16_t src, size_t vl) {
  return __riscv_vmv_v_x_u16m1(src, vl);
}

vuint16m2_t test_vmv_v_v_u16m2(vuint16m2_t src, size_t vl) {
  return __riscv_vmv_v_v_u16m2(src, vl);
}

vuint16m2_t test_vmv_v_x_u16m2(uint16_t src, size_t vl) {
  return __riscv_vmv_v_x_u16m2(src, vl);
}

vuint16m4_t test_vmv_v_v_u16m4(vuint16m4_t src, size_t vl) {
  return __riscv_vmv_v_v_u16m4(src, vl);
}

vuint16m4_t test_vmv_v_x_u16m4(uint16_t src, size_t vl) {
  return __riscv_vmv_v_x_u16m4(src, vl);
}

vuint16m8_t test_vmv_v_v_u16m8(vuint16m8_t src, size_t vl) {
  return __riscv_vmv_v_v_u16m8(src, vl);
}

vuint16m8_t test_vmv_v_x_u16m8(uint16_t src, size_t vl) {
  return __riscv_vmv_v_x_u16m8(src, vl);
}

vuint32mf2_t test_vmv_v_v_u32mf2(vuint32mf2_t src, size_t vl) {
  return __riscv_vmv_v_v_u32mf2(src, vl);
}

vuint32mf2_t test_vmv_v_x_u32mf2(uint32_t src, size_t vl) {
  return __riscv_vmv_v_x_u32mf2(src, vl);
}

vuint32m1_t test_vmv_v_v_u32m1(vuint32m1_t src, size_t vl) {
  return __riscv_vmv_v_v_u32m1(src, vl);
}

vuint32m1_t test_vmv_v_x_u32m1(uint32_t src, size_t vl) {
  return __riscv_vmv_v_x_u32m1(src, vl);
}

vuint32m2_t test_vmv_v_v_u32m2(vuint32m2_t src, size_t vl) {
  return __riscv_vmv_v_v_u32m2(src, vl);
}

vuint32m2_t test_vmv_v_x_u32m2(uint32_t src, size_t vl) {
  return __riscv_vmv_v_x_u32m2(src, vl);
}

vuint32m4_t test_vmv_v_v_u32m4(vuint32m4_t src, size_t vl) {
  return __riscv_vmv_v_v_u32m4(src, vl);
}

vuint32m4_t test_vmv_v_x_u32m4(uint32_t src, size_t vl) {
  return __riscv_vmv_v_x_u32m4(src, vl);
}

vuint32m8_t test_vmv_v_v_u32m8(vuint32m8_t src, size_t vl) {
  return __riscv_vmv_v_v_u32m8(src, vl);
}

vuint32m8_t test_vmv_v_x_u32m8(uint32_t src, size_t vl) {
  return __riscv_vmv_v_x_u32m8(src, vl);
}

vuint64m1_t test_vmv_v_v_u64m1(vuint64m1_t src, size_t vl) {
  return __riscv_vmv_v_v_u64m1(src, vl);
}

vuint64m1_t test_vmv_v_x_u64m1(uint64_t src, size_t vl) {
  return __riscv_vmv_v_x_u64m1(src, vl);
}

vuint64m2_t test_vmv_v_v_u64m2(vuint64m2_t src, size_t vl) {
  return __riscv_vmv_v_v_u64m2(src, vl);
}

vuint64m2_t test_vmv_v_x_u64m2(uint64_t src, size_t vl) {
  return __riscv_vmv_v_x_u64m2(src, vl);
}

vuint64m4_t test_vmv_v_v_u64m4(vuint64m4_t src, size_t vl) {
  return __riscv_vmv_v_v_u64m4(src, vl);
}

vuint64m4_t test_vmv_v_x_u64m4(uint64_t src, size_t vl) {
  return __riscv_vmv_v_x_u64m4(src, vl);
}

vuint64m8_t test_vmv_v_v_u64m8(vuint64m8_t src, size_t vl) {
  return __riscv_vmv_v_v_u64m8(src, vl);
}

vuint64m8_t test_vmv_v_x_u64m8(uint64_t src, size_t vl) {
  return __riscv_vmv_v_x_u64m8(src, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+v[ml][ve][0-9]*\.[,\sa-x0-9()]+} 88 } } */
