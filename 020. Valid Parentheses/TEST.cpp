#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("020. Valid Parentheses") {
    Solution s;
    REQUIRE(s.isValid("()") == true);
    REQUIRE(s.isValid("") == true);
    REQUIRE(s.isValid("()[]{}") == true);
    REQUIRE(s.isValid("(]") == false);
    REQUIRE(s.isValid("([)]") == false);
    REQUIRE(s.isValid("{[]}") == true);
    REQUIRE(s.isValid("(])") == false);
}