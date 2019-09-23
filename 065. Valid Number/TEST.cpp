#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("065. Valid Number") {
    Solution s;
    REQUIRE(s.isNumber("1 4") == false);
}