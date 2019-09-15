#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("041. First Missing Positive") {
    Solution s;

    vector<int> v{ 1,2,0 };
    REQUIRE(s.firstMissingPositive(v) == 3);

    vector<int> v2{ 3,4,-1,1 };
    REQUIRE(s.firstMissingPositive(v2) == 2);

    vector<int> v3{ 7,8,9,11,12 };
    REQUIRE(s.firstMissingPositive(v3) == 1);
}