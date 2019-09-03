#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("16. 3Sum Closest") {
    Solution s;
    vector<int> v{ -1, 2, 1, -4 };
    REQUIRE(s.threeSumClosest(v, 1) == 2);
}