#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("033. Search in Rotated Sorted Array") {
    Solution s;

    vector<int> v{ 4,5,6,7,0,1,2 };
    REQUIRE(s.search(v, 0) == 4);
    REQUIRE(s.search(v, 3) == -1);

    vector<int> v1{ 3, 1 };
    REQUIRE(s.search(v1, 1) == 1);
}