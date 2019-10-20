#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("264. Ugly Number II") {
    Solution s;
    REQUIRE(s.nthUglyNumber(10) == 12);
}