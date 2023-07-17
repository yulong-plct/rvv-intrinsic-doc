#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint16mf4_t test_vwcvtu_x_x_v_u16mf4_tu(vuint16mf4_t maskedoff, vuint8mf8_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16mf4_tu(maskedoff, src, vl);
}

vuint16mf2_t test_vwcvtu_x_x_v_u16mf2_tu(vuint16mf2_t maskedoff, vuint8mf4_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16mf2_tu(maskedoff, src, vl);
}

vuint16m1_t test_vwcvtu_x_x_v_u16m1_tu(vuint16m1_t maskedoff, vuint8mf2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16m1_tu(maskedoff, src, vl);
}

vuint16m2_t test_vwcvtu_x_x_v_u16m2_tu(vuint16m2_t maskedoff, vuint8m1_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16m2_tu(maskedoff, src, vl);
}

vuint16m4_t test_vwcvtu_x_x_v_u16m4_tu(vuint16m4_t maskedoff, vuint8m2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16m4_tu(maskedoff, src, vl);
}

vuint16m8_t test_vwcvtu_x_x_v_u16m8_tu(vuint16m8_t maskedoff, vuint8m4_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16m8_tu(maskedoff, src, vl);
}

vuint32mf2_t test_vwcvtu_x_x_v_u32mf2_tu(vuint32mf2_t maskedoff, vuint16mf4_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u32mf2_tu(maskedoff, src, vl);
}

vuint32m1_t test_vwcvtu_x_x_v_u32m1_tu(vuint32m1_t maskedoff, vuint16mf2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u32m1_tu(maskedoff, src, vl);
}

vuint32m2_t test_vwcvtu_x_x_v_u32m2_tu(vuint32m2_t maskedoff, vuint16m1_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u32m2_tu(maskedoff, src, vl);
}

vuint32m4_t test_vwcvtu_x_x_v_u32m4_tu(vuint32m4_t maskedoff, vuint16m2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u32m4_tu(maskedoff, src, vl);
}

vuint32m8_t test_vwcvtu_x_x_v_u32m8_tu(vuint32m8_t maskedoff, vuint16m4_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u32m8_tu(maskedoff, src, vl);
}

vuint64m1_t test_vwcvtu_x_x_v_u64m1_tu(vuint64m1_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u64m1_tu(maskedoff, src, vl);
}

vuint64m2_t test_vwcvtu_x_x_v_u64m2_tu(vuint64m2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u64m2_tu(maskedoff, src, vl);
}

vuint64m4_t test_vwcvtu_x_x_v_u64m4_tu(vuint64m4_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u64m4_tu(maskedoff, src, vl);
}

vuint64m8_t test_vwcvtu_x_x_v_u64m8_tu(vuint64m8_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u64m8_tu(maskedoff, src, vl);
}

vuint16mf4_t test_vwcvtu_x_x_v_u16mf4_tum(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16mf4_tum(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vwcvtu_x_x_v_u16mf2_tum(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16mf2_tum(mask, maskedoff, src, vl);
}

vuint16m1_t test_vwcvtu_x_x_v_u16m1_tum(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16m1_tum(mask, maskedoff, src, vl);
}

vuint16m2_t test_vwcvtu_x_x_v_u16m2_tum(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16m2_tum(mask, maskedoff, src, vl);
}

vuint16m4_t test_vwcvtu_x_x_v_u16m4_tum(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16m4_tum(mask, maskedoff, src, vl);
}

vuint16m8_t test_vwcvtu_x_x_v_u16m8_tum(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16m8_tum(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vwcvtu_x_x_v_u32mf2_tum(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u32mf2_tum(mask, maskedoff, src, vl);
}

vuint32m1_t test_vwcvtu_x_x_v_u32m1_tum(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u32m1_tum(mask, maskedoff, src, vl);
}

vuint32m2_t test_vwcvtu_x_x_v_u32m2_tum(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u32m2_tum(mask, maskedoff, src, vl);
}

vuint32m4_t test_vwcvtu_x_x_v_u32m4_tum(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u32m4_tum(mask, maskedoff, src, vl);
}

vuint32m8_t test_vwcvtu_x_x_v_u32m8_tum(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u32m8_tum(mask, maskedoff, src, vl);
}

vuint64m1_t test_vwcvtu_x_x_v_u64m1_tum(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u64m1_tum(mask, maskedoff, src, vl);
}

vuint64m2_t test_vwcvtu_x_x_v_u64m2_tum(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u64m2_tum(mask, maskedoff, src, vl);
}

vuint64m4_t test_vwcvtu_x_x_v_u64m4_tum(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u64m4_tum(mask, maskedoff, src, vl);
}

vuint64m8_t test_vwcvtu_x_x_v_u64m8_tum(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u64m8_tum(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vwcvtu_x_x_v_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16mf4_tumu(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vwcvtu_x_x_v_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16mf2_tumu(mask, maskedoff, src, vl);
}

vuint16m1_t test_vwcvtu_x_x_v_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16m1_tumu(mask, maskedoff, src, vl);
}

vuint16m2_t test_vwcvtu_x_x_v_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16m2_tumu(mask, maskedoff, src, vl);
}

vuint16m4_t test_vwcvtu_x_x_v_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16m4_tumu(mask, maskedoff, src, vl);
}

vuint16m8_t test_vwcvtu_x_x_v_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16m8_tumu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vwcvtu_x_x_v_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u32mf2_tumu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vwcvtu_x_x_v_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u32m1_tumu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vwcvtu_x_x_v_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u32m2_tumu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vwcvtu_x_x_v_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u32m4_tumu(mask, maskedoff, src, vl);
}

vuint32m8_t test_vwcvtu_x_x_v_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u32m8_tumu(mask, maskedoff, src, vl);
}

vuint64m1_t test_vwcvtu_x_x_v_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u64m1_tumu(mask, maskedoff, src, vl);
}

vuint64m2_t test_vwcvtu_x_x_v_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u64m2_tumu(mask, maskedoff, src, vl);
}

vuint64m4_t test_vwcvtu_x_x_v_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u64m4_tumu(mask, maskedoff, src, vl);
}

vuint64m8_t test_vwcvtu_x_x_v_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u64m8_tumu(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vwcvtu_x_x_v_u16mf4_mu(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16mf4_mu(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vwcvtu_x_x_v_u16mf2_mu(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16mf2_mu(mask, maskedoff, src, vl);
}

vuint16m1_t test_vwcvtu_x_x_v_u16m1_mu(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16m1_mu(mask, maskedoff, src, vl);
}

vuint16m2_t test_vwcvtu_x_x_v_u16m2_mu(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16m2_mu(mask, maskedoff, src, vl);
}

vuint16m4_t test_vwcvtu_x_x_v_u16m4_mu(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16m4_mu(mask, maskedoff, src, vl);
}

vuint16m8_t test_vwcvtu_x_x_v_u16m8_mu(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u16m8_mu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vwcvtu_x_x_v_u32mf2_mu(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u32mf2_mu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vwcvtu_x_x_v_u32m1_mu(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u32m1_mu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vwcvtu_x_x_v_u32m2_mu(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u32m2_mu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vwcvtu_x_x_v_u32m4_mu(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u32m4_mu(mask, maskedoff, src, vl);
}

vuint32m8_t test_vwcvtu_x_x_v_u32m8_mu(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u32m8_mu(mask, maskedoff, src, vl);
}

vuint64m1_t test_vwcvtu_x_x_v_u64m1_mu(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u64m1_mu(mask, maskedoff, src, vl);
}

vuint64m2_t test_vwcvtu_x_x_v_u64m2_mu(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u64m2_mu(mask, maskedoff, src, vl);
}

vuint64m4_t test_vwcvtu_x_x_v_u64m4_mu(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u64m4_mu(mask, maskedoff, src, vl);
}

vuint64m8_t test_vwcvtu_x_x_v_u64m8_mu(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vwcvtu_x_x_v_u64m8_mu(mask, maskedoff, src, vl);
}

