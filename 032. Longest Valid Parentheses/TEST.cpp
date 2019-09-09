#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("032. Longest Valid Parentheses") {
    Solution s;
    REQUIRE(s.longestValidParentheses("(()") == 2);
    REQUIRE(s.longestValidParentheses(")()())") == 4);
}