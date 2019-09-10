#include "../headers/vector.h"

GlmVec3 glm_vec3(float x, float y, float z) {
    GlmVec3 vec = {.x = x, .y = y, .z = z};
    return vec;
}
GlmVec3 glm_vec3_zero() {
    return glm_vec3(0, 0, 0);
}

GlmVec4 glm_vec4(float x, float y, float z, float w) {
    GlmVec4 vec = {.x = x, .y = y, .z = z, .w = w};
    return vec;
}
GlmVec4 glm_vec4_zero() {
    return glm_vec4(0, 0, 0, 0);
}