#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("739. Daily Temperatures") {
    Solution s;

    vector<int> v{ 73,74,75,71,69,72,76,73 };
    REQUIRE(s.dailyTemperatures(v) == vector<int>{1, 1, 4, 2, 1, 1, 0, 0});
}