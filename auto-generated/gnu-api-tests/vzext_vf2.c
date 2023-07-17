/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint16mf4_t test_vzext_vf2_u16mf4(vuint8mf8_t op1, size_t vl) {
  return __riscv_vzext_vf2_u16mf4(op1, vl);
}

vuint16mf2_t test_vzext_vf2_u16mf2(vuint8mf4_t op1, size_t vl) {
  return __riscv_vzext_vf2_u16mf2(op1, vl);
}

vuint16m1_t test_vzext_vf2_u16m1(vuint8mf2_t op1, size_t vl) {
  return __riscv_vzext_vf2_u16m1(op1, vl);
}

vuint16m2_t test_vzext_vf2_u16m2(vuint8m1_t op1, size_t vl) {
  return __riscv_vzext_vf2_u16m2(op1, vl);
}

vuint16m4_t test_vzext_vf2_u16m4(vuint8m2_t op1, size_t vl) {
  return __riscv_vzext_vf2_u16m4(op1, vl);
}

vuint16m8_t test_vzext_vf2_u16m8(vuint8m4_t op1, size_t vl) {
  return __riscv_vzext_vf2_u16m8(op1, vl);
}

vuint32mf2_t test_vzext_vf2_u32mf2(vuint16mf4_t op1, size_t vl) {
  return __riscv_vzext_vf2_u32mf2(op1, vl);
}

vuint32m1_t test_vzext_vf2_u32m1(vuint16mf2_t op1, size_t vl) {
  return __riscv_vzext_vf2_u32m1(op1, vl);
}

vuint32m2_t test_vzext_vf2_u32m2(vuint16m1_t op1, size_t vl) {
  return __riscv_vzext_vf2_u32m2(op1, vl);
}

vuint32m4_t test_vzext_vf2_u32m4(vuint16m2_t op1, size_t vl) {
  return __riscv_vzext_vf2_u32m4(op1, vl);
}

vuint32m8_t test_vzext_vf2_u32m8(vuint16m4_t op1, size_t vl) {
  return __riscv_vzext_vf2_u32m8(op1, vl);
}

vuint64m1_t test_vzext_vf2_u64m1(vuint32mf2_t op1, size_t vl) {
  return __riscv_vzext_vf2_u64m1(op1, vl);
}

vuint64m2_t test_vzext_vf2_u64m2(vuint32m1_t op1, size_t vl) {
  return __riscv_vzext_vf2_u64m2(op1, vl);
}

vuint64m4_t test_vzext_vf2_u64m4(vuint32m2_t op1, size_t vl) {
  return __riscv_vzext_vf2_u64m4(op1, vl);
}

vuint64m8_t test_vzext_vf2_u64m8(vuint32m4_t op1, size_t vl) {
  return __riscv_vzext_vf2_u64m8(op1, vl);
}

vuint16mf4_t test_vzext_vf2_u16mf4_m(vbool64_t mask, vuint8mf8_t op1, size_t vl) {
  return __riscv_vzext_vf2_u16mf4_m(mask, op1, vl);
}

vuint16mf2_t test_vzext_vf2_u16mf2_m(vbool32_t mask, vuint8mf4_t op1, size_t vl) {
  return __riscv_vzext_vf2_u16mf2_m(mask, op1, vl);
}

vuint16m1_t test_vzext_vf2_u16m1_m(vbool16_t mask, vuint8mf2_t op1, size_t vl) {
  return __riscv_vzext_vf2_u16m1_m(mask, op1, vl);
}

vuint16m2_t test_vzext_vf2_u16m2_m(vbool8_t mask, vuint8m1_t op1, size_t vl) {
  return __riscv_vzext_vf2_u16m2_m(mask, op1, vl);
}

vuint16m4_t test_vzext_vf2_u16m4_m(vbool4_t mask, vuint8m2_t op1, size_t vl) {
  return __riscv_vzext_vf2_u16m4_m(mask, op1, vl);
}

vuint16m8_t test_vzext_vf2_u16m8_m(vbool2_t mask, vuint8m4_t op1, size_t vl) {
  return __riscv_vzext_vf2_u16m8_m(mask, op1, vl);
}

vuint32mf2_t test_vzext_vf2_u32mf2_m(vbool64_t mask, vuint16mf4_t op1, size_t vl) {
  return __riscv_vzext_vf2_u32mf2_m(mask, op1, vl);
}

vuint32m1_t test_vzext_vf2_u32m1_m(vbool32_t mask, vuint16mf2_t op1, size_t vl) {
  return __riscv_vzext_vf2_u32m1_m(mask, op1, vl);
}

vuint32m2_t test_vzext_vf2_u32m2_m(vbool16_t mask, vuint16m1_t op1, size_t vl) {
  return __riscv_vzext_vf2_u32m2_m(mask, op1, vl);
}

vuint32m4_t test_vzext_vf2_u32m4_m(vbool8_t mask, vuint16m2_t op1, size_t vl) {
  return __riscv_vzext_vf2_u32m4_m(mask, op1, vl);
}

vuint32m8_t test_vzext_vf2_u32m8_m(vbool4_t mask, vuint16m4_t op1, size_t vl) {
  return __riscv_vzext_vf2_u32m8_m(mask, op1, vl);
}

vuint64m1_t test_vzext_vf2_u64m1_m(vbool64_t mask, vuint32mf2_t op1, size_t vl) {
  return __riscv_vzext_vf2_u64m1_m(mask, op1, vl);
}

vuint64m2_t test_vzext_vf2_u64m2_m(vbool32_t mask, vuint32m1_t op1, size_t vl) {
  return __riscv_vzext_vf2_u64m2_m(mask, op1, vl);
}

vuint64m4_t test_vzext_vf2_u64m4_m(vbool16_t mask, vuint32m2_t op1, size_t vl) {
  return __riscv_vzext_vf2_u64m4_m(mask, op1, vl);
}

vuint64m8_t test_vzext_vf2_u64m8_m(vbool8_t mask, vuint32m4_t op1, size_t vl) {
  return __riscv_vzext_vf2_u64m8_m(mask, op1, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vzext\.vf2[ivxfswum.]*\s+} 30 } } */
