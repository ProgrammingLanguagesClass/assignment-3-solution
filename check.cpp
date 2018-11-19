#include <gtest/gtest.h>

#include "problem-1/main.h"
#include "problem-2/main.h"
#include "problem-3/main.h"
#include "problem-4/main.h"
#include "problem-5/main.h"


TEST(Problem1_Test, AddOddNumbers_Test) {
    EXPECT_EQ(addOddNumbers(-1), 0);
    EXPECT_EQ(addOddNumbers(0), 0);
    EXPECT_EQ(addOddNumbers(1), 1);
    EXPECT_EQ(addOddNumbers(2), 1);
    EXPECT_EQ(addOddNumbers(3), 4);
}

TEST(Problem2_Test, AverageGrade_Test) {
    int grades[] = {1, 2, 3, 4, 5};
    EXPECT_FLOAT_EQ(averageGrade(grades, 5), 3);
}

TEST(Problem3_Test, Multiply_Test) {
    int x[] = {1, 2, 3};
    int y[] = {1, 1, 1};
    EXPECT_EQ(multiply(x, y, 3), 6);
}

TEST(Problem4_Test, Search_Test) {
    int x[] = {5, 1, 2, 3};
    int n = 4;
    for(int i = 0; i < n; i++) {
        EXPECT_EQ(search(x, n, x[i]), i);
    }
    EXPECT_EQ(search(x, n, 4), -1);
}

TEST(Problem5_Test, BinarySearch_Test) {
    int x[] = {1, 2, 3, 4, 5};
    int n = 5;
    for(int i = 0; i < n; i++) {
        EXPECT_EQ(binarySearch(x, n, x[i]), i);
    }
    EXPECT_EQ(binarySearch(x, n, 6), -1);
    EXPECT_EQ(binarySearch(x, n, 0), -1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}