#include <gtest/gtest.h>
#include "FactorialCalculator.h"

TEST(FactorialCalculatorTests, Factorial) {
    EXPECT_EQ(FactorialCalculator::factorial(0), 1);
    EXPECT_EQ(FactorialCalculator::factorial(1), 1);
    EXPECT_EQ(FactorialCalculator::factorial(5), 120);
    EXPECT_THROW(FactorialCalculator::factorial(-1), std::invalid_argument);
}

TEST(FactorialCalculatorTests, FirstNFactorials) {
    EXPECT_EQ(FactorialCalculator::first_n_factorials(1), (std::vector<unsigned long long>{1}));
    EXPECT_EQ(FactorialCalculator::first_n_factorials(5), (std::vector<unsigned long long>{1, 2, 6, 24, 120}));
    EXPECT_THROW(FactorialCalculator::first_n_factorials(0), std::invalid_argument);
    EXPECT_THROW(FactorialCalculator::first_n_factorials(-3), std::invalid_argument);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
