#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("ZigZag Conversion", "convert") {
    Solution s;
    REQUIRE(s.convert("PAYPALISHIRING", 3) == "PAHNAPLSIIGYIR");
    REQUIRE(s.convert("PAYPALISHIRING", 4) == "PINALSIGYAHRPI");
}