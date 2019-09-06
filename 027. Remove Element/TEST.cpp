#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("027. Remove Element") {
    Solution s;

    vector<int> nums{ 3,2,2,3 };
    REQUIRE(s.removeElement(nums, 3) == 2);
    REQUIRE(nums == vector<int>{2, 2, 2, 3});

    vector<int> nums2{ 0, 1, 2, 2, 3, 0, 4, 2 };
    REQUIRE(s.removeElement(nums2, 2) == 5);
    REQUIRE(nums2 == vector<int>{0, 1, 3, 0, 4, 0, 4, 2});
}