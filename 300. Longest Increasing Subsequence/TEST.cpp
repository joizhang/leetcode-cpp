#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("300. Longest Increasing Subsequence") {
    Solution s;
    vector<int> nums{ 10,9,2,5,3,7,101,18 };
    REQUIRE(s.lengthOfLIS(nums) == 4);
}