#include "factorial.h"
#include <iostream>
#include <gtest/gtest.h>

TEST(comba,Factorial)
{
    ASSERT_TRUE(comba::Factorial(5) == 120);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
    return 0;
}