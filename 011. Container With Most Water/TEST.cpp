#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("11. Container With Most Water") {
    Solution s;
    vector<int> v{ 1, 8, 6, 2, 5, 4, 8, 3, 7 };
    REQUIRE(s.maxArea(v) == 49);
}