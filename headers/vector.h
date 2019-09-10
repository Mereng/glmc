#ifndef GLMC_VECTOR_H
#define GLMC_VECTOR_H

typedef struct _GlmVec3 {
    float x, y, z;
} GlmVec3;

typedef struct _GlmVec4 {
    float x, y, z, w;
} GlmVec4;

GlmVec3 glm_vec3(float x, float y, float z);
GlmVec3 glm_vec3_zero();

GlmVec4 glm_vec4(float x, float y, float z, float w);
GlmVec4 glm_vec4_zero();

#endif