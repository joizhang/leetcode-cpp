#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("046. Permutations") {
    Solution s;

    vector<int> v{ 1,2,3 };
    vector<vector<int>> expect{
        {1,2,3},{2,1,3},{2,3,1},{1,3,2},{3,1,2},{3,2,1}
    };
    REQUIRE(s.permute(v) == expect);
}