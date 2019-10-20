#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("18. 4Sum") {
    Solution s;
    vector<int> v{ 1, 0, -1, 0, -2, 2 };
    REQUIRE(s.fourSum(v, 0) == vector<vector<int>>{
            vector<int>{-1, 0, 0, 1},
            vector<int>{-2, -1, 1, 2},
            vector<int>{-2, 0, 0, 2}
    });
}