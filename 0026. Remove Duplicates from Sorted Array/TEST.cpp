#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("026. Remove Duplicates from Sorted Array") {
    Solution s;
    
    vector<int> nums{ 1, 1, 2 };
    REQUIRE(s.removeDuplicates(nums) == 2);

    vector<int> nums1{ 0,0,1,1,1,2,2,3,3,4 };
    REQUIRE(s.removeDuplicates(nums1) == 5);

    vector<int> nums2{};
    REQUIRE(s.removeDuplicates(nums2) == 0);

    vector<int> nums3{1};
    REQUIRE(s.removeDuplicates(nums3) == 1);
}