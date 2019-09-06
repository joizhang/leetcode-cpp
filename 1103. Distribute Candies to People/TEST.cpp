#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("1103. Distribute Candies to People") {
    Solution s;
    REQUIRE(s.distributeCandies(7, 4) == vector<int>{1, 2, 3, 1});
    REQUIRE(s.distributeCandies(10, 3) == vector<int>{5, 2, 3});
}