#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <iostream>

using namespace std;

TEST_CASE("029. Divide Two Integers") {
    Solution s;
    REQUIRE(s.divide(10, 3) == 3);
    REQUIRE(s.divide(7, -2) == -3);
    REQUIRE(s.divide(INT_MIN, -1) == INT_MAX);
}