#ifndef ADRENAISSANCE_MATRIX_H
#define ADRENAISSANCE_MATRIX_H
#include <stdint.h>

typedef struct I32Matrix {
  int32_t values[4];
} I32Matrix;

I32Matrix i32scale(const int scale_factor, const I32Matrix matrix);

#endif


