#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1x8_t test_vlseg8e64_v_f64m1x8_tu(vfloat64m1x8_t maskedoff_tuple, const float64_t *base, size_t vl) {
  return __riscv_vlseg8e64_tu(maskedoff_tuple, base, vl);
}

vint64m1x8_t test_vlseg8e64_v_i64m1x8_tu(vint64m1x8_t maskedoff_tuple, const int64_t *base, size_t vl) {
  return __riscv_vlseg8e64_tu(maskedoff_tuple, base, vl);
}

vuint64m1x8_t test_vlseg8e64_v_u64m1x8_tu(vuint64m1x8_t maskedoff_tuple, const uint64_t *base, size_t vl) {
  return __riscv_vlseg8e64_tu(maskedoff_tuple, base, vl);
}

vfloat64m1x8_t test_vlseg8e64_v_f64m1x8_tum(vbool64_t mask, vfloat64m1x8_t maskedoff_tuple, const float64_t *base, size_t vl) {
  return __riscv_vlseg8e64_tum(mask, maskedoff_tuple, base, vl);
}

vint64m1x8_t test_vlseg8e64_v_i64m1x8_tum(vbool64_t mask, vint64m1x8_t maskedoff_tuple, const int64_t *base, size_t vl) {
  return __riscv_vlseg8e64_tum(mask, maskedoff_tuple, base, vl);
}

vuint64m1x8_t test_vlseg8e64_v_u64m1x8_tum(vbool64_t mask, vuint64m1x8_t maskedoff_tuple, const uint64_t *base, size_t vl) {
  return __riscv_vlseg8e64_tum(mask, maskedoff_tuple, base, vl);
}

vfloat64m1x8_t test_vlseg8e64_v_f64m1x8_tumu(vbool64_t mask, vfloat64m1x8_t maskedoff_tuple, const float64_t *base, size_t vl) {
  return __riscv_vlseg8e64_tumu(mask, maskedoff_tuple, base, vl);
}

vint64m1x8_t test_vlseg8e64_v_i64m1x8_tumu(vbool64_t mask, vint64m1x8_t maskedoff_tuple, const int64_t *base, size_t vl) {
  return __riscv_vlseg8e64_tumu(mask, maskedoff_tuple, base, vl);
}

vuint64m1x8_t test_vlseg8e64_v_u64m1x8_tumu(vbool64_t mask, vuint64m1x8_t maskedoff_tuple, const uint64_t *base, size_t vl) {
  return __riscv_vlseg8e64_tumu(mask, maskedoff_tuple, base, vl);
}

vfloat64m1x8_t test_vlseg8e64_v_f64m1x8_mu(vbool64_t mask, vfloat64m1x8_t maskedoff_tuple, const float64_t *base, size_t vl) {
  return __riscv_vlseg8e64_mu(mask, maskedoff_tuple, base, vl);
}

vint64m1x8_t test_vlseg8e64_v_i64m1x8_mu(vbool64_t mask, vint64m1x8_t maskedoff_tuple, const int64_t *base, size_t vl) {
  return __riscv_vlseg8e64_mu(mask, maskedoff_tuple, base, vl);
}

vuint64m1x8_t test_vlseg8e64_v_u64m1x8_mu(vbool64_t mask, vuint64m1x8_t maskedoff_tuple, const uint64_t *base, size_t vl) {
  return __riscv_vlseg8e64_mu(mask, maskedoff_tuple, base, vl);
}

