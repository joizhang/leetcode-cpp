#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("040. Combination Sum II") {
    Solution s;

    vector<int> candidates{ 10,1,2,7,6,1,5 };
    vector<vector<int>> expect{
        {1, 7},
        {1, 2, 5},
        {2, 6},
        {1, 1, 6}
    };
    REQUIRE(s.combinationSum2(candidates, 8) == expect);

    vector<int> candidates2{ 2, 5, 2, 1, 2 };
    vector<vector<int>> expect2{
        {1, 2, 2},
        {5}
    };
    REQUIRE(s.combinationSum2(candidates2, 8) == expect2);
}