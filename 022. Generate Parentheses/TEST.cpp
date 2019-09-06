#define CATCH_CONFIG_MAIN
#include <iostream>
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("022. Generate Parentheses") {
    Solution s;
    REQUIRE(s.generateParenthesis(3) == vector<string>{"((()))",
        "(()())",
        "(())()",
        "()(())",
        "()()()"});
}