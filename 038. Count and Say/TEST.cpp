#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("038. Count and Say") {
    Solution s;

    REQUIRE(s.countAndSay(1) == "1");
    REQUIRE(s.countAndSay(2) == "11");
    REQUIRE(s.countAndSay(3) == "21");
    REQUIRE(s.countAndSay(4) == "1211");
    REQUIRE(s.countAndSay(5) == "111221");
}