// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4x7_t test_vloxseg7ei32_v_f16mf4x7_tu(vfloat16mf4x7_t maskedoff_tuple, const _Float16 *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat16mf2x7_t test_vloxseg7ei32_v_f16mf2x7_tu(vfloat16mf2x7_t maskedoff_tuple, const _Float16 *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat16m1x7_t test_vloxseg7ei32_v_f16m1x7_tu(vfloat16m1x7_t maskedoff_tuple, const _Float16 *base, vuint32m2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat32mf2x7_t test_vloxseg7ei32_v_f32mf2x7_tu(vfloat32mf2x7_t maskedoff_tuple, const float *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat32m1x7_t test_vloxseg7ei32_v_f32m1x7_tu(vfloat32m1x7_t maskedoff_tuple, const float *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat64m1x7_t test_vloxseg7ei32_v_f64m1x7_tu(vfloat64m1x7_t maskedoff_tuple, const double *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vint8mf8x7_t test_vloxseg7ei32_v_i8mf8x7_tu(vint8mf8x7_t maskedoff_tuple, const int8_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vint8mf4x7_t test_vloxseg7ei32_v_i8mf4x7_tu(vint8mf4x7_t maskedoff_tuple, const int8_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vint8mf2x7_t test_vloxseg7ei32_v_i8mf2x7_tu(vint8mf2x7_t maskedoff_tuple, const int8_t *base, vuint32m2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vint8m1x7_t test_vloxseg7ei32_v_i8m1x7_tu(vint8m1x7_t maskedoff_tuple, const int8_t *base, vuint32m4_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vint16mf4x7_t test_vloxseg7ei32_v_i16mf4x7_tu(vint16mf4x7_t maskedoff_tuple, const int16_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vint16mf2x7_t test_vloxseg7ei32_v_i16mf2x7_tu(vint16mf2x7_t maskedoff_tuple, const int16_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vint16m1x7_t test_vloxseg7ei32_v_i16m1x7_tu(vint16m1x7_t maskedoff_tuple, const int16_t *base, vuint32m2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vint32mf2x7_t test_vloxseg7ei32_v_i32mf2x7_tu(vint32mf2x7_t maskedoff_tuple, const int32_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vint32m1x7_t test_vloxseg7ei32_v_i32m1x7_tu(vint32m1x7_t maskedoff_tuple, const int32_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vint64m1x7_t test_vloxseg7ei32_v_i64m1x7_tu(vint64m1x7_t maskedoff_tuple, const int64_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vuint8mf8x7_t test_vloxseg7ei32_v_u8mf8x7_tu(vuint8mf8x7_t maskedoff_tuple, const uint8_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vuint8mf4x7_t test_vloxseg7ei32_v_u8mf4x7_tu(vuint8mf4x7_t maskedoff_tuple, const uint8_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vuint8mf2x7_t test_vloxseg7ei32_v_u8mf2x7_tu(vuint8mf2x7_t maskedoff_tuple, const uint8_t *base, vuint32m2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vuint8m1x7_t test_vloxseg7ei32_v_u8m1x7_tu(vuint8m1x7_t maskedoff_tuple, const uint8_t *base, vuint32m4_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vuint16mf4x7_t test_vloxseg7ei32_v_u16mf4x7_tu(vuint16mf4x7_t maskedoff_tuple, const uint16_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vuint16mf2x7_t test_vloxseg7ei32_v_u16mf2x7_tu(vuint16mf2x7_t maskedoff_tuple, const uint16_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vuint16m1x7_t test_vloxseg7ei32_v_u16m1x7_tu(vuint16m1x7_t maskedoff_tuple, const uint16_t *base, vuint32m2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vuint32mf2x7_t test_vloxseg7ei32_v_u32mf2x7_tu(vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vuint32m1x7_t test_vloxseg7ei32_v_u32m1x7_tu(vuint32m1x7_t maskedoff_tuple, const uint32_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vuint64m1x7_t test_vloxseg7ei32_v_u64m1x7_tu(vuint64m1x7_t maskedoff_tuple, const uint64_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat16mf4x7_t test_vloxseg7ei32_v_f16mf4x7_tum(vbool64_t mask, vfloat16mf4x7_t maskedoff_tuple, const _Float16 *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat16mf2x7_t test_vloxseg7ei32_v_f16mf2x7_tum(vbool32_t mask, vfloat16mf2x7_t maskedoff_tuple, const _Float16 *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat16m1x7_t test_vloxseg7ei32_v_f16m1x7_tum(vbool16_t mask, vfloat16m1x7_t maskedoff_tuple, const _Float16 *base, vuint32m2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat32mf2x7_t test_vloxseg7ei32_v_f32mf2x7_tum(vbool64_t mask, vfloat32mf2x7_t maskedoff_tuple, const float *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat32m1x7_t test_vloxseg7ei32_v_f32m1x7_tum(vbool32_t mask, vfloat32m1x7_t maskedoff_tuple, const float *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat64m1x7_t test_vloxseg7ei32_v_f64m1x7_tum(vbool64_t mask, vfloat64m1x7_t maskedoff_tuple, const double *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint8mf8x7_t test_vloxseg7ei32_v_i8mf8x7_tum(vbool64_t mask, vint8mf8x7_t maskedoff_tuple, const int8_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint8mf4x7_t test_vloxseg7ei32_v_i8mf4x7_tum(vbool32_t mask, vint8mf4x7_t maskedoff_tuple, const int8_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint8mf2x7_t test_vloxseg7ei32_v_i8mf2x7_tum(vbool16_t mask, vint8mf2x7_t maskedoff_tuple, const int8_t *base, vuint32m2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint8m1x7_t test_vloxseg7ei32_v_i8m1x7_tum(vbool8_t mask, vint8m1x7_t maskedoff_tuple, const int8_t *base, vuint32m4_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint16mf4x7_t test_vloxseg7ei32_v_i16mf4x7_tum(vbool64_t mask, vint16mf4x7_t maskedoff_tuple, const int16_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint16mf2x7_t test_vloxseg7ei32_v_i16mf2x7_tum(vbool32_t mask, vint16mf2x7_t maskedoff_tuple, const int16_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint16m1x7_t test_vloxseg7ei32_v_i16m1x7_tum(vbool16_t mask, vint16m1x7_t maskedoff_tuple, const int16_t *base, vuint32m2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint32mf2x7_t test_vloxseg7ei32_v_i32mf2x7_tum(vbool64_t mask, vint32mf2x7_t maskedoff_tuple, const int32_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint32m1x7_t test_vloxseg7ei32_v_i32m1x7_tum(vbool32_t mask, vint32m1x7_t maskedoff_tuple, const int32_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint64m1x7_t test_vloxseg7ei32_v_i64m1x7_tum(vbool64_t mask, vint64m1x7_t maskedoff_tuple, const int64_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8mf8x7_t test_vloxseg7ei32_v_u8mf8x7_tum(vbool64_t mask, vuint8mf8x7_t maskedoff_tuple, const uint8_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8mf4x7_t test_vloxseg7ei32_v_u8mf4x7_tum(vbool32_t mask, vuint8mf4x7_t maskedoff_tuple, const uint8_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8mf2x7_t test_vloxseg7ei32_v_u8mf2x7_tum(vbool16_t mask, vuint8mf2x7_t maskedoff_tuple, const uint8_t *base, vuint32m2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8m1x7_t test_vloxseg7ei32_v_u8m1x7_tum(vbool8_t mask, vuint8m1x7_t maskedoff_tuple, const uint8_t *base, vuint32m4_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint16mf4x7_t test_vloxseg7ei32_v_u16mf4x7_tum(vbool64_t mask, vuint16mf4x7_t maskedoff_tuple, const uint16_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint16mf2x7_t test_vloxseg7ei32_v_u16mf2x7_tum(vbool32_t mask, vuint16mf2x7_t maskedoff_tuple, const uint16_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint16m1x7_t test_vloxseg7ei32_v_u16m1x7_tum(vbool16_t mask, vuint16m1x7_t maskedoff_tuple, const uint16_t *base, vuint32m2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint32mf2x7_t test_vloxseg7ei32_v_u32mf2x7_tum(vbool64_t mask, vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint32m1x7_t test_vloxseg7ei32_v_u32m1x7_tum(vbool32_t mask, vuint32m1x7_t maskedoff_tuple, const uint32_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint64m1x7_t test_vloxseg7ei32_v_u64m1x7_tum(vbool64_t mask, vuint64m1x7_t maskedoff_tuple, const uint64_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat16mf4x7_t test_vloxseg7ei32_v_f16mf4x7_tumu(vbool64_t mask, vfloat16mf4x7_t maskedoff_tuple, const _Float16 *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat16mf2x7_t test_vloxseg7ei32_v_f16mf2x7_tumu(vbool32_t mask, vfloat16mf2x7_t maskedoff_tuple, const _Float16 *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat16m1x7_t test_vloxseg7ei32_v_f16m1x7_tumu(vbool16_t mask, vfloat16m1x7_t maskedoff_tuple, const _Float16 *base, vuint32m2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat32mf2x7_t test_vloxseg7ei32_v_f32mf2x7_tumu(vbool64_t mask, vfloat32mf2x7_t maskedoff_tuple, const float *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat32m1x7_t test_vloxseg7ei32_v_f32m1x7_tumu(vbool32_t mask, vfloat32m1x7_t maskedoff_tuple, const float *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat64m1x7_t test_vloxseg7ei32_v_f64m1x7_tumu(vbool64_t mask, vfloat64m1x7_t maskedoff_tuple, const double *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint8mf8x7_t test_vloxseg7ei32_v_i8mf8x7_tumu(vbool64_t mask, vint8mf8x7_t maskedoff_tuple, const int8_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint8mf4x7_t test_vloxseg7ei32_v_i8mf4x7_tumu(vbool32_t mask, vint8mf4x7_t maskedoff_tuple, const int8_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint8mf2x7_t test_vloxseg7ei32_v_i8mf2x7_tumu(vbool16_t mask, vint8mf2x7_t maskedoff_tuple, const int8_t *base, vuint32m2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint8m1x7_t test_vloxseg7ei32_v_i8m1x7_tumu(vbool8_t mask, vint8m1x7_t maskedoff_tuple, const int8_t *base, vuint32m4_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint16mf4x7_t test_vloxseg7ei32_v_i16mf4x7_tumu(vbool64_t mask, vint16mf4x7_t maskedoff_tuple, const int16_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint16mf2x7_t test_vloxseg7ei32_v_i16mf2x7_tumu(vbool32_t mask, vint16mf2x7_t maskedoff_tuple, const int16_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint16m1x7_t test_vloxseg7ei32_v_i16m1x7_tumu(vbool16_t mask, vint16m1x7_t maskedoff_tuple, const int16_t *base, vuint32m2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint32mf2x7_t test_vloxseg7ei32_v_i32mf2x7_tumu(vbool64_t mask, vint32mf2x7_t maskedoff_tuple, const int32_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint32m1x7_t test_vloxseg7ei32_v_i32m1x7_tumu(vbool32_t mask, vint32m1x7_t maskedoff_tuple, const int32_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint64m1x7_t test_vloxseg7ei32_v_i64m1x7_tumu(vbool64_t mask, vint64m1x7_t maskedoff_tuple, const int64_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8mf8x7_t test_vloxseg7ei32_v_u8mf8x7_tumu(vbool64_t mask, vuint8mf8x7_t maskedoff_tuple, const uint8_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8mf4x7_t test_vloxseg7ei32_v_u8mf4x7_tumu(vbool32_t mask, vuint8mf4x7_t maskedoff_tuple, const uint8_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8mf2x7_t test_vloxseg7ei32_v_u8mf2x7_tumu(vbool16_t mask, vuint8mf2x7_t maskedoff_tuple, const uint8_t *base, vuint32m2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8m1x7_t test_vloxseg7ei32_v_u8m1x7_tumu(vbool8_t mask, vuint8m1x7_t maskedoff_tuple, const uint8_t *base, vuint32m4_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint16mf4x7_t test_vloxseg7ei32_v_u16mf4x7_tumu(vbool64_t mask, vuint16mf4x7_t maskedoff_tuple, const uint16_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint16mf2x7_t test_vloxseg7ei32_v_u16mf2x7_tumu(vbool32_t mask, vuint16mf2x7_t maskedoff_tuple, const uint16_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint16m1x7_t test_vloxseg7ei32_v_u16m1x7_tumu(vbool16_t mask, vuint16m1x7_t maskedoff_tuple, const uint16_t *base, vuint32m2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint32mf2x7_t test_vloxseg7ei32_v_u32mf2x7_tumu(vbool64_t mask, vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint32m1x7_t test_vloxseg7ei32_v_u32m1x7_tumu(vbool32_t mask, vuint32m1x7_t maskedoff_tuple, const uint32_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint64m1x7_t test_vloxseg7ei32_v_u64m1x7_tumu(vbool64_t mask, vuint64m1x7_t maskedoff_tuple, const uint64_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat16mf4x7_t test_vloxseg7ei32_v_f16mf4x7_mu(vbool64_t mask, vfloat16mf4x7_t maskedoff_tuple, const _Float16 *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat16mf2x7_t test_vloxseg7ei32_v_f16mf2x7_mu(vbool32_t mask, vfloat16mf2x7_t maskedoff_tuple, const _Float16 *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat16m1x7_t test_vloxseg7ei32_v_f16m1x7_mu(vbool16_t mask, vfloat16m1x7_t maskedoff_tuple, const _Float16 *base, vuint32m2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat32mf2x7_t test_vloxseg7ei32_v_f32mf2x7_mu(vbool64_t mask, vfloat32mf2x7_t maskedoff_tuple, const float *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat32m1x7_t test_vloxseg7ei32_v_f32m1x7_mu(vbool32_t mask, vfloat32m1x7_t maskedoff_tuple, const float *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat64m1x7_t test_vloxseg7ei32_v_f64m1x7_mu(vbool64_t mask, vfloat64m1x7_t maskedoff_tuple, const double *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint8mf8x7_t test_vloxseg7ei32_v_i8mf8x7_mu(vbool64_t mask, vint8mf8x7_t maskedoff_tuple, const int8_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint8mf4x7_t test_vloxseg7ei32_v_i8mf4x7_mu(vbool32_t mask, vint8mf4x7_t maskedoff_tuple, const int8_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint8mf2x7_t test_vloxseg7ei32_v_i8mf2x7_mu(vbool16_t mask, vint8mf2x7_t maskedoff_tuple, const int8_t *base, vuint32m2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint8m1x7_t test_vloxseg7ei32_v_i8m1x7_mu(vbool8_t mask, vint8m1x7_t maskedoff_tuple, const int8_t *base, vuint32m4_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint16mf4x7_t test_vloxseg7ei32_v_i16mf4x7_mu(vbool64_t mask, vint16mf4x7_t maskedoff_tuple, const int16_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint16mf2x7_t test_vloxseg7ei32_v_i16mf2x7_mu(vbool32_t mask, vint16mf2x7_t maskedoff_tuple, const int16_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint16m1x7_t test_vloxseg7ei32_v_i16m1x7_mu(vbool16_t mask, vint16m1x7_t maskedoff_tuple, const int16_t *base, vuint32m2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint32mf2x7_t test_vloxseg7ei32_v_i32mf2x7_mu(vbool64_t mask, vint32mf2x7_t maskedoff_tuple, const int32_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint32m1x7_t test_vloxseg7ei32_v_i32m1x7_mu(vbool32_t mask, vint32m1x7_t maskedoff_tuple, const int32_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint64m1x7_t test_vloxseg7ei32_v_i64m1x7_mu(vbool64_t mask, vint64m1x7_t maskedoff_tuple, const int64_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8mf8x7_t test_vloxseg7ei32_v_u8mf8x7_mu(vbool64_t mask, vuint8mf8x7_t maskedoff_tuple, const uint8_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8mf4x7_t test_vloxseg7ei32_v_u8mf4x7_mu(vbool32_t mask, vuint8mf4x7_t maskedoff_tuple, const uint8_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8mf2x7_t test_vloxseg7ei32_v_u8mf2x7_mu(vbool16_t mask, vuint8mf2x7_t maskedoff_tuple, const uint8_t *base, vuint32m2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8m1x7_t test_vloxseg7ei32_v_u8m1x7_mu(vbool8_t mask, vuint8m1x7_t maskedoff_tuple, const uint8_t *base, vuint32m4_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint16mf4x7_t test_vloxseg7ei32_v_u16mf4x7_mu(vbool64_t mask, vuint16mf4x7_t maskedoff_tuple, const uint16_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint16mf2x7_t test_vloxseg7ei32_v_u16mf2x7_mu(vbool32_t mask, vuint16mf2x7_t maskedoff_tuple, const uint16_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint16m1x7_t test_vloxseg7ei32_v_u16m1x7_mu(vbool16_t mask, vuint16m1x7_t maskedoff_tuple, const uint16_t *base, vuint32m2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint32mf2x7_t test_vloxseg7ei32_v_u32mf2x7_mu(vbool64_t mask, vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint32m1x7_t test_vloxseg7ei32_v_u32m1x7_mu(vbool32_t mask, vuint32m1x7_t maskedoff_tuple, const uint32_t *base, vuint32m1_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint64m1x7_t test_vloxseg7ei32_v_u64m1x7_mu(vbool64_t mask, vuint64m1x7_t maskedoff_tuple, const uint64_t *base, vuint32mf2_t bindex, size_t vl) {
  return __riscv_vloxseg7ei32_mu(mask, maskedoff_tuple, base, bindex, vl);
}

