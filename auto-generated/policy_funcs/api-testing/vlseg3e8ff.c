#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8x3_t test_vlseg3e8ff_v_i8mf8x3_tu(vint8mf8x3_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf8x3_tu(maskedoff_tuple, base, new_vl, vl);
}

vint8mf4x3_t test_vlseg3e8ff_v_i8mf4x3_tu(vint8mf4x3_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf4x3_tu(maskedoff_tuple, base, new_vl, vl);
}

vint8mf2x3_t test_vlseg3e8ff_v_i8mf2x3_tu(vint8mf2x3_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf2x3_tu(maskedoff_tuple, base, new_vl, vl);
}

vint8m1x3_t test_vlseg3e8ff_v_i8m1x3_tu(vint8m1x3_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8m1x3_tu(maskedoff_tuple, base, new_vl, vl);
}

vint8m2x3_t test_vlseg3e8ff_v_i8m2x3_tu(vint8m2x3_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8m2x3_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint8mf8x3_t test_vlseg3e8ff_v_u8mf8x3_tu(vuint8mf8x3_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf8x3_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint8mf4x3_t test_vlseg3e8ff_v_u8mf4x3_tu(vuint8mf4x3_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf4x3_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint8mf2x3_t test_vlseg3e8ff_v_u8mf2x3_tu(vuint8mf2x3_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf2x3_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint8m1x3_t test_vlseg3e8ff_v_u8m1x3_tu(vuint8m1x3_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8m1x3_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint8m2x3_t test_vlseg3e8ff_v_u8m2x3_tu(vuint8m2x3_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8m2x3_tu(maskedoff_tuple, base, new_vl, vl);
}

vint8mf8x3_t test_vlseg3e8ff_v_i8mf8x3_tum(vbool64_t mask, vint8mf8x3_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf8x3_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf4x3_t test_vlseg3e8ff_v_i8mf4x3_tum(vbool32_t mask, vint8mf4x3_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf4x3_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf2x3_t test_vlseg3e8ff_v_i8mf2x3_tum(vbool16_t mask, vint8mf2x3_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf2x3_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8m1x3_t test_vlseg3e8ff_v_i8m1x3_tum(vbool8_t mask, vint8m1x3_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8m1x3_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8m2x3_t test_vlseg3e8ff_v_i8m2x3_tum(vbool4_t mask, vint8m2x3_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8m2x3_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf8x3_t test_vlseg3e8ff_v_u8mf8x3_tum(vbool64_t mask, vuint8mf8x3_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf8x3_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf4x3_t test_vlseg3e8ff_v_u8mf4x3_tum(vbool32_t mask, vuint8mf4x3_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf4x3_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf2x3_t test_vlseg3e8ff_v_u8mf2x3_tum(vbool16_t mask, vuint8mf2x3_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf2x3_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8m1x3_t test_vlseg3e8ff_v_u8m1x3_tum(vbool8_t mask, vuint8m1x3_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8m1x3_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8m2x3_t test_vlseg3e8ff_v_u8m2x3_tum(vbool4_t mask, vuint8m2x3_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8m2x3_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf8x3_t test_vlseg3e8ff_v_i8mf8x3_tumu(vbool64_t mask, vint8mf8x3_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf8x3_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf4x3_t test_vlseg3e8ff_v_i8mf4x3_tumu(vbool32_t mask, vint8mf4x3_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf4x3_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf2x3_t test_vlseg3e8ff_v_i8mf2x3_tumu(vbool16_t mask, vint8mf2x3_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf2x3_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8m1x3_t test_vlseg3e8ff_v_i8m1x3_tumu(vbool8_t mask, vint8m1x3_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8m1x3_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8m2x3_t test_vlseg3e8ff_v_i8m2x3_tumu(vbool4_t mask, vint8m2x3_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8m2x3_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf8x3_t test_vlseg3e8ff_v_u8mf8x3_tumu(vbool64_t mask, vuint8mf8x3_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf8x3_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf4x3_t test_vlseg3e8ff_v_u8mf4x3_tumu(vbool32_t mask, vuint8mf4x3_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf4x3_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf2x3_t test_vlseg3e8ff_v_u8mf2x3_tumu(vbool16_t mask, vuint8mf2x3_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf2x3_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8m1x3_t test_vlseg3e8ff_v_u8m1x3_tumu(vbool8_t mask, vuint8m1x3_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8m1x3_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8m2x3_t test_vlseg3e8ff_v_u8m2x3_tumu(vbool4_t mask, vuint8m2x3_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8m2x3_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf8x3_t test_vlseg3e8ff_v_i8mf8x3_mu(vbool64_t mask, vint8mf8x3_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf8x3_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf4x3_t test_vlseg3e8ff_v_i8mf4x3_mu(vbool32_t mask, vint8mf4x3_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf4x3_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf2x3_t test_vlseg3e8ff_v_i8mf2x3_mu(vbool16_t mask, vint8mf2x3_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf2x3_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8m1x3_t test_vlseg3e8ff_v_i8m1x3_mu(vbool8_t mask, vint8m1x3_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8m1x3_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8m2x3_t test_vlseg3e8ff_v_i8m2x3_mu(vbool4_t mask, vint8m2x3_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8m2x3_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf8x3_t test_vlseg3e8ff_v_u8mf8x3_mu(vbool64_t mask, vuint8mf8x3_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf8x3_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf4x3_t test_vlseg3e8ff_v_u8mf4x3_mu(vbool32_t mask, vuint8mf4x3_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf4x3_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf2x3_t test_vlseg3e8ff_v_u8mf2x3_mu(vbool16_t mask, vuint8mf2x3_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf2x3_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8m1x3_t test_vlseg3e8ff_v_u8m1x3_mu(vbool8_t mask, vuint8m1x3_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8m1x3_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8m2x3_t test_vlseg3e8ff_v_u8m2x3_mu(vbool4_t mask, vuint8m2x3_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8m2x3_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

