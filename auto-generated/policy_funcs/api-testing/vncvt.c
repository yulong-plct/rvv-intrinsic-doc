#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8_t test_vncvt_x_x_w_i8mf8_tu(vint8mf8_t maskedoff, vint16mf4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf8_tu(maskedoff, src, vl);
}

vint8mf4_t test_vncvt_x_x_w_i8mf4_tu(vint8mf4_t maskedoff, vint16mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf4_tu(maskedoff, src, vl);
}

vint8mf2_t test_vncvt_x_x_w_i8mf2_tu(vint8mf2_t maskedoff, vint16m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf2_tu(maskedoff, src, vl);
}

vint8m1_t test_vncvt_x_x_w_i8m1_tu(vint8m1_t maskedoff, vint16m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m1_tu(maskedoff, src, vl);
}

vint8m2_t test_vncvt_x_x_w_i8m2_tu(vint8m2_t maskedoff, vint16m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m2_tu(maskedoff, src, vl);
}

vint8m4_t test_vncvt_x_x_w_i8m4_tu(vint8m4_t maskedoff, vint16m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m4_tu(maskedoff, src, vl);
}

vuint8mf8_t test_vncvt_x_x_w_u8mf8_tu(vuint8mf8_t maskedoff, vuint16mf4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf8_tu(maskedoff, src, vl);
}

vuint8mf4_t test_vncvt_x_x_w_u8mf4_tu(vuint8mf4_t maskedoff, vuint16mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf4_tu(maskedoff, src, vl);
}

vuint8mf2_t test_vncvt_x_x_w_u8mf2_tu(vuint8mf2_t maskedoff, vuint16m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf2_tu(maskedoff, src, vl);
}

vuint8m1_t test_vncvt_x_x_w_u8m1_tu(vuint8m1_t maskedoff, vuint16m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m1_tu(maskedoff, src, vl);
}

vuint8m2_t test_vncvt_x_x_w_u8m2_tu(vuint8m2_t maskedoff, vuint16m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m2_tu(maskedoff, src, vl);
}

vuint8m4_t test_vncvt_x_x_w_u8m4_tu(vuint8m4_t maskedoff, vuint16m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m4_tu(maskedoff, src, vl);
}

vint16mf4_t test_vncvt_x_x_w_i16mf4_tu(vint16mf4_t maskedoff, vint32mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16mf4_tu(maskedoff, src, vl);
}

vint16mf2_t test_vncvt_x_x_w_i16mf2_tu(vint16mf2_t maskedoff, vint32m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16mf2_tu(maskedoff, src, vl);
}

vint16m1_t test_vncvt_x_x_w_i16m1_tu(vint16m1_t maskedoff, vint32m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m1_tu(maskedoff, src, vl);
}

vint16m2_t test_vncvt_x_x_w_i16m2_tu(vint16m2_t maskedoff, vint32m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m2_tu(maskedoff, src, vl);
}

vint16m4_t test_vncvt_x_x_w_i16m4_tu(vint16m4_t maskedoff, vint32m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m4_tu(maskedoff, src, vl);
}

vuint16mf4_t test_vncvt_x_x_w_u16mf4_tu(vuint16mf4_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16mf4_tu(maskedoff, src, vl);
}

vuint16mf2_t test_vncvt_x_x_w_u16mf2_tu(vuint16mf2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16mf2_tu(maskedoff, src, vl);
}

vuint16m1_t test_vncvt_x_x_w_u16m1_tu(vuint16m1_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m1_tu(maskedoff, src, vl);
}

vuint16m2_t test_vncvt_x_x_w_u16m2_tu(vuint16m2_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m2_tu(maskedoff, src, vl);
}

vuint16m4_t test_vncvt_x_x_w_u16m4_tu(vuint16m4_t maskedoff, vuint32m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m4_tu(maskedoff, src, vl);
}

vint32mf2_t test_vncvt_x_x_w_i32mf2_tu(vint32mf2_t maskedoff, vint64m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32mf2_tu(maskedoff, src, vl);
}

vint32m1_t test_vncvt_x_x_w_i32m1_tu(vint32m1_t maskedoff, vint64m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m1_tu(maskedoff, src, vl);
}

vint32m2_t test_vncvt_x_x_w_i32m2_tu(vint32m2_t maskedoff, vint64m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m2_tu(maskedoff, src, vl);
}

vint32m4_t test_vncvt_x_x_w_i32m4_tu(vint32m4_t maskedoff, vint64m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m4_tu(maskedoff, src, vl);
}

vuint32mf2_t test_vncvt_x_x_w_u32mf2_tu(vuint32mf2_t maskedoff, vuint64m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32mf2_tu(maskedoff, src, vl);
}

vuint32m1_t test_vncvt_x_x_w_u32m1_tu(vuint32m1_t maskedoff, vuint64m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m1_tu(maskedoff, src, vl);
}

vuint32m2_t test_vncvt_x_x_w_u32m2_tu(vuint32m2_t maskedoff, vuint64m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m2_tu(maskedoff, src, vl);
}

vuint32m4_t test_vncvt_x_x_w_u32m4_tu(vuint32m4_t maskedoff, vuint64m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m4_tu(maskedoff, src, vl);
}

vint8mf8_t test_vncvt_x_x_w_i8mf8_tum(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf8_tum(mask, maskedoff, src, vl);
}

vint8mf4_t test_vncvt_x_x_w_i8mf4_tum(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf4_tum(mask, maskedoff, src, vl);
}

vint8mf2_t test_vncvt_x_x_w_i8mf2_tum(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf2_tum(mask, maskedoff, src, vl);
}

vint8m1_t test_vncvt_x_x_w_i8m1_tum(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m1_tum(mask, maskedoff, src, vl);
}

vint8m2_t test_vncvt_x_x_w_i8m2_tum(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m2_tum(mask, maskedoff, src, vl);
}

vint8m4_t test_vncvt_x_x_w_i8m4_tum(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m4_tum(mask, maskedoff, src, vl);
}

vuint8mf8_t test_vncvt_x_x_w_u8mf8_tum(vbool64_t mask, vuint8mf8_t maskedoff, vuint16mf4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf8_tum(mask, maskedoff, src, vl);
}

vuint8mf4_t test_vncvt_x_x_w_u8mf4_tum(vbool32_t mask, vuint8mf4_t maskedoff, vuint16mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf4_tum(mask, maskedoff, src, vl);
}

vuint8mf2_t test_vncvt_x_x_w_u8mf2_tum(vbool16_t mask, vuint8mf2_t maskedoff, vuint16m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf2_tum(mask, maskedoff, src, vl);
}

vuint8m1_t test_vncvt_x_x_w_u8m1_tum(vbool8_t mask, vuint8m1_t maskedoff, vuint16m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m1_tum(mask, maskedoff, src, vl);
}

vuint8m2_t test_vncvt_x_x_w_u8m2_tum(vbool4_t mask, vuint8m2_t maskedoff, vuint16m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m2_tum(mask, maskedoff, src, vl);
}

vuint8m4_t test_vncvt_x_x_w_u8m4_tum(vbool2_t mask, vuint8m4_t maskedoff, vuint16m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m4_tum(mask, maskedoff, src, vl);
}

vint16mf4_t test_vncvt_x_x_w_i16mf4_tum(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16mf4_tum(mask, maskedoff, src, vl);
}

vint16mf2_t test_vncvt_x_x_w_i16mf2_tum(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16mf2_tum(mask, maskedoff, src, vl);
}

vint16m1_t test_vncvt_x_x_w_i16m1_tum(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m1_tum(mask, maskedoff, src, vl);
}

vint16m2_t test_vncvt_x_x_w_i16m2_tum(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m2_tum(mask, maskedoff, src, vl);
}

vint16m4_t test_vncvt_x_x_w_i16m4_tum(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m4_tum(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vncvt_x_x_w_u16mf4_tum(vbool64_t mask, vuint16mf4_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16mf4_tum(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vncvt_x_x_w_u16mf2_tum(vbool32_t mask, vuint16mf2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16mf2_tum(mask, maskedoff, src, vl);
}

vuint16m1_t test_vncvt_x_x_w_u16m1_tum(vbool16_t mask, vuint16m1_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m1_tum(mask, maskedoff, src, vl);
}

vuint16m2_t test_vncvt_x_x_w_u16m2_tum(vbool8_t mask, vuint16m2_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m2_tum(mask, maskedoff, src, vl);
}

vuint16m4_t test_vncvt_x_x_w_u16m4_tum(vbool4_t mask, vuint16m4_t maskedoff, vuint32m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m4_tum(mask, maskedoff, src, vl);
}

vint32mf2_t test_vncvt_x_x_w_i32mf2_tum(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32mf2_tum(mask, maskedoff, src, vl);
}

vint32m1_t test_vncvt_x_x_w_i32m1_tum(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m1_tum(mask, maskedoff, src, vl);
}

vint32m2_t test_vncvt_x_x_w_i32m2_tum(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m2_tum(mask, maskedoff, src, vl);
}

vint32m4_t test_vncvt_x_x_w_i32m4_tum(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m4_tum(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vncvt_x_x_w_u32mf2_tum(vbool64_t mask, vuint32mf2_t maskedoff, vuint64m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32mf2_tum(mask, maskedoff, src, vl);
}

vuint32m1_t test_vncvt_x_x_w_u32m1_tum(vbool32_t mask, vuint32m1_t maskedoff, vuint64m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m1_tum(mask, maskedoff, src, vl);
}

vuint32m2_t test_vncvt_x_x_w_u32m2_tum(vbool16_t mask, vuint32m2_t maskedoff, vuint64m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m2_tum(mask, maskedoff, src, vl);
}

vuint32m4_t test_vncvt_x_x_w_u32m4_tum(vbool8_t mask, vuint32m4_t maskedoff, vuint64m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m4_tum(mask, maskedoff, src, vl);
}

vint8mf8_t test_vncvt_x_x_w_i8mf8_tumu(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf8_tumu(mask, maskedoff, src, vl);
}

vint8mf4_t test_vncvt_x_x_w_i8mf4_tumu(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf4_tumu(mask, maskedoff, src, vl);
}

vint8mf2_t test_vncvt_x_x_w_i8mf2_tumu(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf2_tumu(mask, maskedoff, src, vl);
}

vint8m1_t test_vncvt_x_x_w_i8m1_tumu(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m1_tumu(mask, maskedoff, src, vl);
}

vint8m2_t test_vncvt_x_x_w_i8m2_tumu(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m2_tumu(mask, maskedoff, src, vl);
}

vint8m4_t test_vncvt_x_x_w_i8m4_tumu(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m4_tumu(mask, maskedoff, src, vl);
}

vuint8mf8_t test_vncvt_x_x_w_u8mf8_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vuint16mf4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf8_tumu(mask, maskedoff, src, vl);
}

vuint8mf4_t test_vncvt_x_x_w_u8mf4_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vuint16mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf4_tumu(mask, maskedoff, src, vl);
}

vuint8mf2_t test_vncvt_x_x_w_u8mf2_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vuint16m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf2_tumu(mask, maskedoff, src, vl);
}

vuint8m1_t test_vncvt_x_x_w_u8m1_tumu(vbool8_t mask, vuint8m1_t maskedoff, vuint16m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m1_tumu(mask, maskedoff, src, vl);
}

vuint8m2_t test_vncvt_x_x_w_u8m2_tumu(vbool4_t mask, vuint8m2_t maskedoff, vuint16m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m2_tumu(mask, maskedoff, src, vl);
}

vuint8m4_t test_vncvt_x_x_w_u8m4_tumu(vbool2_t mask, vuint8m4_t maskedoff, vuint16m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m4_tumu(mask, maskedoff, src, vl);
}

vint16mf4_t test_vncvt_x_x_w_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16mf4_tumu(mask, maskedoff, src, vl);
}

vint16mf2_t test_vncvt_x_x_w_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16mf2_tumu(mask, maskedoff, src, vl);
}

vint16m1_t test_vncvt_x_x_w_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m1_tumu(mask, maskedoff, src, vl);
}

vint16m2_t test_vncvt_x_x_w_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m2_tumu(mask, maskedoff, src, vl);
}

vint16m4_t test_vncvt_x_x_w_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m4_tumu(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vncvt_x_x_w_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16mf4_tumu(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vncvt_x_x_w_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16mf2_tumu(mask, maskedoff, src, vl);
}

vuint16m1_t test_vncvt_x_x_w_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m1_tumu(mask, maskedoff, src, vl);
}

vuint16m2_t test_vncvt_x_x_w_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m2_tumu(mask, maskedoff, src, vl);
}

vuint16m4_t test_vncvt_x_x_w_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint32m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m4_tumu(mask, maskedoff, src, vl);
}

vint32mf2_t test_vncvt_x_x_w_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32mf2_tumu(mask, maskedoff, src, vl);
}

vint32m1_t test_vncvt_x_x_w_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m1_tumu(mask, maskedoff, src, vl);
}

vint32m2_t test_vncvt_x_x_w_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m2_tumu(mask, maskedoff, src, vl);
}

vint32m4_t test_vncvt_x_x_w_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m4_tumu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vncvt_x_x_w_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint64m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32mf2_tumu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vncvt_x_x_w_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint64m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m1_tumu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vncvt_x_x_w_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint64m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m2_tumu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vncvt_x_x_w_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint64m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m4_tumu(mask, maskedoff, src, vl);
}

vint8mf8_t test_vncvt_x_x_w_i8mf8_mu(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf8_mu(mask, maskedoff, src, vl);
}

vint8mf4_t test_vncvt_x_x_w_i8mf4_mu(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf4_mu(mask, maskedoff, src, vl);
}

vint8mf2_t test_vncvt_x_x_w_i8mf2_mu(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf2_mu(mask, maskedoff, src, vl);
}

vint8m1_t test_vncvt_x_x_w_i8m1_mu(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m1_mu(mask, maskedoff, src, vl);
}

vint8m2_t test_vncvt_x_x_w_i8m2_mu(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m2_mu(mask, maskedoff, src, vl);
}

vint8m4_t test_vncvt_x_x_w_i8m4_mu(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m4_mu(mask, maskedoff, src, vl);
}

vuint8mf8_t test_vncvt_x_x_w_u8mf8_mu(vbool64_t mask, vuint8mf8_t maskedoff, vuint16mf4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf8_mu(mask, maskedoff, src, vl);
}

vuint8mf4_t test_vncvt_x_x_w_u8mf4_mu(vbool32_t mask, vuint8mf4_t maskedoff, vuint16mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf4_mu(mask, maskedoff, src, vl);
}

vuint8mf2_t test_vncvt_x_x_w_u8mf2_mu(vbool16_t mask, vuint8mf2_t maskedoff, vuint16m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf2_mu(mask, maskedoff, src, vl);
}

vuint8m1_t test_vncvt_x_x_w_u8m1_mu(vbool8_t mask, vuint8m1_t maskedoff, vuint16m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m1_mu(mask, maskedoff, src, vl);
}

vuint8m2_t test_vncvt_x_x_w_u8m2_mu(vbool4_t mask, vuint8m2_t maskedoff, vuint16m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m2_mu(mask, maskedoff, src, vl);
}

vuint8m4_t test_vncvt_x_x_w_u8m4_mu(vbool2_t mask, vuint8m4_t maskedoff, vuint16m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m4_mu(mask, maskedoff, src, vl);
}

vint16mf4_t test_vncvt_x_x_w_i16mf4_mu(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16mf4_mu(mask, maskedoff, src, vl);
}

vint16mf2_t test_vncvt_x_x_w_i16mf2_mu(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16mf2_mu(mask, maskedoff, src, vl);
}

vint16m1_t test_vncvt_x_x_w_i16m1_mu(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m1_mu(mask, maskedoff, src, vl);
}

vint16m2_t test_vncvt_x_x_w_i16m2_mu(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m2_mu(mask, maskedoff, src, vl);
}

vint16m4_t test_vncvt_x_x_w_i16m4_mu(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m4_mu(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vncvt_x_x_w_u16mf4_mu(vbool64_t mask, vuint16mf4_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16mf4_mu(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vncvt_x_x_w_u16mf2_mu(vbool32_t mask, vuint16mf2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16mf2_mu(mask, maskedoff, src, vl);
}

vuint16m1_t test_vncvt_x_x_w_u16m1_mu(vbool16_t mask, vuint16m1_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m1_mu(mask, maskedoff, src, vl);
}

vuint16m2_t test_vncvt_x_x_w_u16m2_mu(vbool8_t mask, vuint16m2_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m2_mu(mask, maskedoff, src, vl);
}

vuint16m4_t test_vncvt_x_x_w_u16m4_mu(vbool4_t mask, vuint16m4_t maskedoff, vuint32m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m4_mu(mask, maskedoff, src, vl);
}

vint32mf2_t test_vncvt_x_x_w_i32mf2_mu(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32mf2_mu(mask, maskedoff, src, vl);
}

vint32m1_t test_vncvt_x_x_w_i32m1_mu(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m1_mu(mask, maskedoff, src, vl);
}

vint32m2_t test_vncvt_x_x_w_i32m2_mu(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m2_mu(mask, maskedoff, src, vl);
}

vint32m4_t test_vncvt_x_x_w_i32m4_mu(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m4_mu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vncvt_x_x_w_u32mf2_mu(vbool64_t mask, vuint32mf2_t maskedoff, vuint64m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32mf2_mu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vncvt_x_x_w_u32m1_mu(vbool32_t mask, vuint32m1_t maskedoff, vuint64m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m1_mu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vncvt_x_x_w_u32m2_mu(vbool16_t mask, vuint32m2_t maskedoff, vuint64m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m2_mu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vncvt_x_x_w_u32m4_mu(vbool8_t mask, vuint32m4_t maskedoff, vuint64m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m4_mu(mask, maskedoff, src, vl);
}

