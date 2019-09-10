#include <matrix.h>

void test_glm_mat3() {
    GlmMat3 mat = glm_mat3(1.0f);
    TEST_ASSERT_EQUAL_FLOAT(1.0f, mat.vectors[0].x);
    TEST_ASSERT_EQUAL_FLOAT(0.0f, mat.vectors[0].y);
    TEST_ASSERT_EQUAL_FLOAT(0.0f, mat.vectors[0].z);

    TEST_ASSERT_EQUAL_FLOAT(0.0f, mat.vectors[1].x);
    TEST_ASSERT_EQUAL_FLOAT(1.0f, mat.vectors[1].y);
    TEST_ASSERT_EQUAL_FLOAT(0.0f, mat.vectors[1].z);

    TEST_ASSERT_EQUAL_FLOAT(0.0f, mat.vectors[2].x);
    TEST_ASSERT_EQUAL_FLOAT(0.0f, mat.vectors[2].y);
    TEST_ASSERT_EQUAL_FLOAT(1.0f, mat.vectors[2].z);
}
void test_glm_mat4() {
    GlmMat4 mat = glm_mat4(1.0f);
    TEST_ASSERT_EQUAL_FLOAT(1.0f, mat.vectors[0].x);
    TEST_ASSERT_EQUAL_FLOAT(0.0f, mat.vectors[0].y);
    TEST_ASSERT_EQUAL_FLOAT(0.0f, mat.vectors[0].z);
    TEST_ASSERT_EQUAL_FLOAT(0.0f, mat.vectors[0].w);

    TEST_ASSERT_EQUAL_FLOAT(0.0f, mat.vectors[1].x);
    TEST_ASSERT_EQUAL_FLOAT(1.0f, mat.vectors[1].y);
    TEST_ASSERT_EQUAL_FLOAT(0.0f, mat.vectors[1].z);
    TEST_ASSERT_EQUAL_FLOAT(0.0f, mat.vectors[1].w);

    TEST_ASSERT_EQUAL_FLOAT(0.0f, mat.vectors[2].x);
    TEST_ASSERT_EQUAL_FLOAT(0.0f, mat.vectors[2].y);
    TEST_ASSERT_EQUAL_FLOAT(1.0f, mat.vectors[2].z);
    TEST_ASSERT_EQUAL_FLOAT(0.0f, mat.vectors[2].w);

    TEST_ASSERT_EQUAL_FLOAT(0.0f, mat.vectors[3].x);
    TEST_ASSERT_EQUAL_FLOAT(0.0f, mat.vectors[3].y);
    TEST_ASSERT_EQUAL_FLOAT(0.0f, mat.vectors[3].z);
    TEST_ASSERT_EQUAL_FLOAT(1.0f, mat.vectors[3].w);
}