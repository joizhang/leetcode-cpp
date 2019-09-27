#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("063. Unique Paths II") {
    Solution s;
    vector<vector<int>> obstacleGrid{
        {0,0,0},
        {0,1,0},
        {0,0,0}
    };
    REQUIRE(s.uniquePathsWithObstacles(obstacleGrid) == 2);
}