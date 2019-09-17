#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("1191. K-Concatenation Maximum Sum") {
    Solution s;

    vector<int> v1{ 1, 2 };
    REQUIRE(s.kConcatenationMaxSum(v1, 57011) == 9);
}