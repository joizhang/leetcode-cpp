#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("287. Find the Duplicate Number") {
    Solution s;
    vector<int> v{ 3,1,3,4,2 };
    REQUIRE(s.findDuplicate(v) == 3);
}