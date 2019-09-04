#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("13. Roman to Integer") {
    Solution s;
    REQUIRE(s.romanToInt("III") == 3);
    REQUIRE(s.romanToInt("IV") == 4);
    REQUIRE(s.romanToInt("IX") == 9);
    REQUIRE(s.romanToInt("LVIII") == 58);
    REQUIRE(s.romanToInt("MCMXCIV") == 1994);
}

TEST_CASE("13. Roman to Integer2") {
    Solution s;
    REQUIRE(s.romanToInt2("III") == 3);
    REQUIRE(s.romanToInt2("IV") == 4);
    REQUIRE(s.romanToInt2("IX") == 9);
    REQUIRE(s.romanToInt2("LVIII") == 58);
    REQUIRE(s.romanToInt2("MCMXCIV") == 1994);
}