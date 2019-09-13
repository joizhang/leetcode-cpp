#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("039. Combination Sum") {
    Solution s;

    vector<int> candidates{ 2,3,6,7 };
    vector<vector<int>> except{
        { 2,2,3 },
        {7}
    };
    REQUIRE(s.combinationSum(candidates, 7) == except);


}