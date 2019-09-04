#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("12. Integer to Roman") {
    Solution s;
    REQUIRE(s.intToRoman(3) == "III");
    REQUIRE(s.intToRoman(4) == "IV");
    REQUIRE(s.intToRoman(9) == "IX");
    REQUIRE(s.intToRoman(58) == "LVIII");
    REQUIRE(s.intToRoman(1994) == "MCMXCIV");
}