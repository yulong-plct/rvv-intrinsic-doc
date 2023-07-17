/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4x6_t test_vlsseg6e16_v_f16mf4x6(const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e16_v_f16mf4x6(base, bstride, vl);
}

vfloat16mf2x6_t test_vlsseg6e16_v_f16mf2x6(const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e16_v_f16mf2x6(base, bstride, vl);
}

vfloat16m1x6_t test_vlsseg6e16_v_f16m1x6(const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e16_v_f16m1x6(base, bstride, vl);
}

vint16mf4x6_t test_vlsseg6e16_v_i16mf4x6(const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e16_v_i16mf4x6(base, bstride, vl);
}

vint16mf2x6_t test_vlsseg6e16_v_i16mf2x6(const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e16_v_i16mf2x6(base, bstride, vl);
}

vint16m1x6_t test_vlsseg6e16_v_i16m1x6(const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e16_v_i16m1x6(base, bstride, vl);
}

vuint16mf4x6_t test_vlsseg6e16_v_u16mf4x6(const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e16_v_u16mf4x6(base, bstride, vl);
}

vuint16mf2x6_t test_vlsseg6e16_v_u16mf2x6(const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e16_v_u16mf2x6(base, bstride, vl);
}

vuint16m1x6_t test_vlsseg6e16_v_u16m1x6(const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e16_v_u16m1x6(base, bstride, vl);
}

vfloat16mf4x6_t test_vlsseg6e16_v_f16mf4x6_m(vbool64_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e16_v_f16mf4x6_m(mask, base, bstride, vl);
}

vfloat16mf2x6_t test_vlsseg6e16_v_f16mf2x6_m(vbool32_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e16_v_f16mf2x6_m(mask, base, bstride, vl);
}

vfloat16m1x6_t test_vlsseg6e16_v_f16m1x6_m(vbool16_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e16_v_f16m1x6_m(mask, base, bstride, vl);
}

vint16mf4x6_t test_vlsseg6e16_v_i16mf4x6_m(vbool64_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e16_v_i16mf4x6_m(mask, base, bstride, vl);
}

vint16mf2x6_t test_vlsseg6e16_v_i16mf2x6_m(vbool32_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e16_v_i16mf2x6_m(mask, base, bstride, vl);
}

vint16m1x6_t test_vlsseg6e16_v_i16m1x6_m(vbool16_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e16_v_i16m1x6_m(mask, base, bstride, vl);
}

vuint16mf4x6_t test_vlsseg6e16_v_u16mf4x6_m(vbool64_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e16_v_u16mf4x6_m(mask, base, bstride, vl);
}

vuint16mf2x6_t test_vlsseg6e16_v_u16mf2x6_m(vbool32_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e16_v_u16mf2x6_m(mask, base, bstride, vl);
}

vuint16m1x6_t test_vlsseg6e16_v_u16m1x6_m(vbool16_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e16_v_u16m1x6_m(mask, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlsseg6e16\.[ivxfswum.]+\s+} 18 } } */
