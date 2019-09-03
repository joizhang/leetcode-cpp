#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("14. Longest Common Prefix") {
    Solution s;
    vector<string> v1{ "flower", "flow", "flight" };
    REQUIRE(s.longestCommonPrefix(v1) == "fl");
    vector<string> v2{ "dog","racecar","car" };
    REQUIRE(s.longestCommonPrefix(v2) == "");
}