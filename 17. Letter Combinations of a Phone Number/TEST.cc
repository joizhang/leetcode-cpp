#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("17. Letter Combinations of a Phone Number") {
    Solution s;
    vector<string> v{ "ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf" };
    REQUIRE(s.letterCombinations("23") == v);
}