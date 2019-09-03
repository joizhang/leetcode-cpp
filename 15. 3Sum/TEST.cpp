#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("15. 3Sum") {
    Solution s;
    vector<int> v1{ -1, 0, 1, 2, -1, -4 };
    REQUIRE(s.threeSum(v1) == vector<vector<int>>{vector<int>{-1, 0, 1}, vector<int>{-1, -1, 2}});
    vector<int> v2{ -2,0,1,1,2 };
    REQUIRE(s.threeSum(v1) == vector<vector<int>>{vector<int>{-2, 0, 2}, vector<int>{-2, 1, 1}});
}