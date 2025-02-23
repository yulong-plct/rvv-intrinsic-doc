#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1x3_t test_vlsseg3e64_v_f64m1x3_tu(vfloat64m1x3_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_tu(maskedoff_tuple, base, bstride, vl);
}

vfloat64m2x3_t test_vlsseg3e64_v_f64m2x3_tu(vfloat64m2x3_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_tu(maskedoff_tuple, base, bstride, vl);
}

vint64m1x3_t test_vlsseg3e64_v_i64m1x3_tu(vint64m1x3_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_tu(maskedoff_tuple, base, bstride, vl);
}

vint64m2x3_t test_vlsseg3e64_v_i64m2x3_tu(vint64m2x3_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_tu(maskedoff_tuple, base, bstride, vl);
}

vuint64m1x3_t test_vlsseg3e64_v_u64m1x3_tu(vuint64m1x3_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_tu(maskedoff_tuple, base, bstride, vl);
}

vuint64m2x3_t test_vlsseg3e64_v_u64m2x3_tu(vuint64m2x3_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_tu(maskedoff_tuple, base, bstride, vl);
}

vfloat64m1x3_t test_vlsseg3e64_v_f64m1x3_tum(vbool64_t mask, vfloat64m1x3_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat64m2x3_t test_vlsseg3e64_v_f64m2x3_tum(vbool32_t mask, vfloat64m2x3_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint64m1x3_t test_vlsseg3e64_v_i64m1x3_tum(vbool64_t mask, vint64m1x3_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint64m2x3_t test_vlsseg3e64_v_i64m2x3_tum(vbool32_t mask, vint64m2x3_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint64m1x3_t test_vlsseg3e64_v_u64m1x3_tum(vbool64_t mask, vuint64m1x3_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint64m2x3_t test_vlsseg3e64_v_u64m2x3_tum(vbool32_t mask, vuint64m2x3_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat64m1x3_t test_vlsseg3e64_v_f64m1x3_tumu(vbool64_t mask, vfloat64m1x3_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat64m2x3_t test_vlsseg3e64_v_f64m2x3_tumu(vbool32_t mask, vfloat64m2x3_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint64m1x3_t test_vlsseg3e64_v_i64m1x3_tumu(vbool64_t mask, vint64m1x3_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint64m2x3_t test_vlsseg3e64_v_i64m2x3_tumu(vbool32_t mask, vint64m2x3_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint64m1x3_t test_vlsseg3e64_v_u64m1x3_tumu(vbool64_t mask, vuint64m1x3_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint64m2x3_t test_vlsseg3e64_v_u64m2x3_tumu(vbool32_t mask, vuint64m2x3_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat64m1x3_t test_vlsseg3e64_v_f64m1x3_mu(vbool64_t mask, vfloat64m1x3_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat64m2x3_t test_vlsseg3e64_v_f64m2x3_mu(vbool32_t mask, vfloat64m2x3_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint64m1x3_t test_vlsseg3e64_v_i64m1x3_mu(vbool64_t mask, vint64m1x3_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint64m2x3_t test_vlsseg3e64_v_i64m2x3_mu(vbool32_t mask, vint64m2x3_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint64m1x3_t test_vlsseg3e64_v_u64m1x3_mu(vbool64_t mask, vuint64m1x3_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint64m2x3_t test_vlsseg3e64_v_u64m2x3_mu(vbool32_t mask, vuint64m2x3_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_mu(mask, maskedoff_tuple, base, bstride, vl);
}

