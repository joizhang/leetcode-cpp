#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("069. Sqrt(x)") {
    Solution s;
    REQUIRE(s.mySqrt(8) == 2);
}