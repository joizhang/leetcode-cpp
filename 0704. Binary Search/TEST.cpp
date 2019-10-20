#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("704. Binary Search") {
    Solution s;

    vector<int> vec{ -1,0,3,5,9,12 };
    REQUIRE(s.search(vec, 9) == 4);

    REQUIRE(s.search(vec, 2) == -1);
}