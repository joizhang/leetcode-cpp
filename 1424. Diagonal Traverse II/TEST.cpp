#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

#include <vector>

using namespace std;

TEST_CASE("1424. Diagonal Traverse II") {
	Solution s;
    vector<vector<int>> nums{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    REQUIRE(vector<int>{ 1,4,2,7,5,3,8,6,9 } == s.findDiagonalOrder(nums));
}