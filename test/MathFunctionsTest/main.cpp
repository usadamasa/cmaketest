//
// Created by UCHIDA Masaru on 2016/08/19.
//
#include <gtest/gtest.h>

#include "sandbox/MathFunctions/Sqrt.h"

TEST(SqrtTest, _25_to_5){
    ASSERT_EQ(5.0, sandbox::Sqrt(25).GetSqrt());
}

TEST(SqrtTest, _100_to_10){
    ASSERT_EQ(11.0, sandbox::Sqrt(100).GetSqrt());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
