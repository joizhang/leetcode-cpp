#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Longest Substring Without Repeating Characters", "lengthOfLongestSubstring") {
    Solution s;
    REQUIRE(s.lengthOfLongestSubstring("abcabcbb") == 3);
}