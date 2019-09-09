#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("034. Find First and Last Position of Element in Sorted Array") {
    Solution s;

    vector<int> v{ 5,7,7,8,8,10 };
    REQUIRE(s.searchRange(v, 8) == vector<int>{3, 4});

    REQUIRE(s.searchRange(v, 6) == vector<int>{-1, -1});

    vector<int> v1{ 1 };
    REQUIRE(s.searchRange(v1, 0) == vector<int>{-1, -1});
}