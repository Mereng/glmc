#ifndef GLMC_MATRIX_H
#define GLMC_MATRIX_H

#include "vector.h"

typedef struct _glm_mat3 {
    GlmVec3 vectors[3];
} GlmMat3;

typedef struct _glm_mat4 {
    GlmVec4 vectors[4];
} GlmMat4;

GlmMat3 glm_mat3(float value);
GlmMat4 glm_mat4(float value);

#endif