#include <vector.h>

void test_glm_vec3() {
    GlmVec3 vec = glm_vec3(5, 7, 3.654f);
    TEST_ASSERT_EQUAL_FLOAT(5, vec.x);
    TEST_ASSERT_EQUAL_FLOAT(7, vec.y);
    TEST_ASSERT_EQUAL_FLOAT(3.654f, vec.z);
}

void test_glm_vec4() {
    GlmVec4 vec = glm_vec4(55.0f, 70.5f, 465.8f, 1.0f);
    TEST_ASSERT_EQUAL_FLOAT(55.0f, vec.x);
    TEST_ASSERT_EQUAL_FLOAT(70.5f, vec.y);
    TEST_ASSERT_EQUAL_FLOAT(465.8f, vec.z);
    TEST_ASSERT_EQUAL_FLOAT(1.0f, vec.w);
}