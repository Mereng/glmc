#include <unity.h>

#include "test_vectors.c"
#include "test_matrix.c"

void setUp(void) {}

void tearDown(void) {}

int main() {
    UNITY_BEGIN();
    RUN_TEST(test_glm_vec3);
    RUN_TEST(test_glm_vec4);

    RUN_TEST(test_glm_mat3);
    RUN_TEST(test_glm_mat4);

    return UNITY_END();
}