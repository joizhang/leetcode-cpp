#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("047. Permutations II") {
    Solution s;

    vector<int> v{ 1,1,1 };
    vector<vector<int>> expect{
        {1,1,1}
    };
    REQUIRE(s.permuteUnique(v) == expect);
}