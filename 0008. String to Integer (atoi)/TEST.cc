#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("String to Integer (atoi)") {
    Solution s;
    REQUIRE(s.myAtoi("42") == 42);
    REQUIRE(s.myAtoi("") == 0);
    REQUIRE(s.myAtoi(" ") == 0);
    REQUIRE(s.myAtoi("   -42") == -42);
    REQUIRE(s.myAtoi("4193 with words") == 4193);
    REQUIRE(s.myAtoi("-91283472332") == INT_MIN);
    REQUIRE(s.myAtoi("-2147483648") == INT_MIN);
    REQUIRE(s.myAtoi("2147483647") == INT_MAX);
    REQUIRE(s.myAtoi("2147483648") == INT_MAX);
    REQUIRE(s.myAtoi("3.14159") == 3);
    REQUIRE(s.myAtoi("+1") == 1);
}