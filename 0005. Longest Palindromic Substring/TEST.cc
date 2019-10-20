#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Longest Palindromic Substring", "longestPalindrome") {
    Solution s;
    REQUIRE(s.longestPalindrome("babad") == "bab");
    REQUIRE(s.longestPalindrome("cbbd") == "bb");
    REQUIRE(s.longestPalindrome("ac") == "a");
}

TEST_CASE("Longest Palindromic Substring 2", "longestPalindrome2") {
    Solution s;
    REQUIRE(s.longestPalindrome2("babad") == "bab");
    REQUIRE(s.longestPalindrome2("cbbd") == "bb");
    REQUIRE(s.longestPalindrome2("ac") == "a");
}