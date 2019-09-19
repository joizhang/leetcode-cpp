#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("054. Spiral Matrix") {
    Solution s;

    vector<vector<int>> matrix{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    REQUIRE(s.spiralOrder(matrix) == vector<int>{1, 2, 3, 6, 9, 8, 7, 4, 5});
}