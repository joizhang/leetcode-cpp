#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("028. Implement strStr()") {
    Solution s;
    REQUIRE(s.strStr("hello", "ll") == 2);
    REQUIRE(s.strStr("aaaaa", "bba") == -1);
    REQUIRE(s.strStr("aaaaa", "") == 0);
    REQUIRE(s.strStr("", "a") == -1);
}