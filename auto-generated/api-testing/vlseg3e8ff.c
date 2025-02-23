#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8x3_t test_vlseg3e8ff_v_i8mf8x3(const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf8x3(base, new_vl, vl);
}

vint8mf4x3_t test_vlseg3e8ff_v_i8mf4x3(const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf4x3(base, new_vl, vl);
}

vint8mf2x3_t test_vlseg3e8ff_v_i8mf2x3(const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf2x3(base, new_vl, vl);
}

vint8m1x3_t test_vlseg3e8ff_v_i8m1x3(const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8m1x3(base, new_vl, vl);
}

vint8m2x3_t test_vlseg3e8ff_v_i8m2x3(const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8m2x3(base, new_vl, vl);
}

vuint8mf8x3_t test_vlseg3e8ff_v_u8mf8x3(const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf8x3(base, new_vl, vl);
}

vuint8mf4x3_t test_vlseg3e8ff_v_u8mf4x3(const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf4x3(base, new_vl, vl);
}

vuint8mf2x3_t test_vlseg3e8ff_v_u8mf2x3(const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf2x3(base, new_vl, vl);
}

vuint8m1x3_t test_vlseg3e8ff_v_u8m1x3(const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8m1x3(base, new_vl, vl);
}

vuint8m2x3_t test_vlseg3e8ff_v_u8m2x3(const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8m2x3(base, new_vl, vl);
}

vint8mf8x3_t test_vlseg3e8ff_v_i8mf8x3_m(vbool64_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf8x3_m(mask, base, new_vl, vl);
}

vint8mf4x3_t test_vlseg3e8ff_v_i8mf4x3_m(vbool32_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf4x3_m(mask, base, new_vl, vl);
}

vint8mf2x3_t test_vlseg3e8ff_v_i8mf2x3_m(vbool16_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf2x3_m(mask, base, new_vl, vl);
}

vint8m1x3_t test_vlseg3e8ff_v_i8m1x3_m(vbool8_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8m1x3_m(mask, base, new_vl, vl);
}

vint8m2x3_t test_vlseg3e8ff_v_i8m2x3_m(vbool4_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8m2x3_m(mask, base, new_vl, vl);
}

vuint8mf8x3_t test_vlseg3e8ff_v_u8mf8x3_m(vbool64_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf8x3_m(mask, base, new_vl, vl);
}

vuint8mf4x3_t test_vlseg3e8ff_v_u8mf4x3_m(vbool32_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf4x3_m(mask, base, new_vl, vl);
}

vuint8mf2x3_t test_vlseg3e8ff_v_u8mf2x3_m(vbool16_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf2x3_m(mask, base, new_vl, vl);
}

vuint8m1x3_t test_vlseg3e8ff_v_u8m1x3_m(vbool8_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8m1x3_m(mask, base, new_vl, vl);
}

vuint8m2x3_t test_vlseg3e8ff_v_u8m2x3_m(vbool4_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8m2x3_m(mask, base, new_vl, vl);
}

