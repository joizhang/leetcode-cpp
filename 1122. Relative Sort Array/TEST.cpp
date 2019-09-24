#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("1122. Relative Sort Array") {
    Solution s;
    vector<int> arr1{ 2,3,1,3,2,4,6,7,9,2,19 }, arr2{ 2,1,4,3,9,6 };
    REQUIRE(s.relativeSortArray(arr1, arr2) == vector<int>{2, 2, 2, 1, 4, 3, 3, 9, 6, 7, 19});
}