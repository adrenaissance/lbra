#include "include/matrix.h"
#include <string.h>

I32Matrix create_i32m(const int32_t values[4]) {
  I32Matrix matrix;
  memcpy(matrix.values, values, sizeof(matrix.values));
  return matrix;
}

I32Matrix i32scale(const int scaling_factor, const I32Matrix matrix) {
  int32_t new_values[4] = { 0, 0, 0, 0 };
  for (int32_t i = 0; i < 4; i++) {
    const int32_t value = matrix.values[i];
    const int32_t scaled_value = value * scaling_factor;
    new_values[i] = scaled_value;
  }
  return create_i32m(new_values);
}
