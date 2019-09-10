#include "../headers/matrix.h"

GlmMat3 glm_mat3(float value) {
    GlmMat3 mat;
    mat.vectors[0] = glm_vec3(value, 0, 0);
    mat.vectors[1] = glm_vec3(0, value, 0);
    mat.vectors[2] = glm_vec3(0, 0, value);
    return mat;
}

GlmMat4 glm_mat4(float value) {
    GlmMat4 mat;
    mat.vectors[0] = glm_vec4(value, 0, 0, 0);
    mat.vectors[1] = glm_vec4(0, value, 0, 0);
    mat.vectors[2] = glm_vec4(0, 0, value, 0);
    mat.vectors[3] = glm_vec4(0, 0, 0, value);
    return mat;
}