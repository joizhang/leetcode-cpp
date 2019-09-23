#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "q2.h"

TEST_CASE("155") {
    Solution s;
    int n = 1000000000, a = 2, b = 217983653, c = 336916467;
    REQUIRE(s.nthUglyNumber(n, a, b, c) == 1999999984);
}