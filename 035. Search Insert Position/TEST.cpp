#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("035. Search Insert Position") {
    Solution s;

    vector<int> v{ 1,3,5,6 };
    REQUIRE(s.searchInsert(v, 5) == 2);
    REQUIRE(s.searchInsert(v, 2) == 1);
    REQUIRE(s.searchInsert(v, 7) == 4);
}