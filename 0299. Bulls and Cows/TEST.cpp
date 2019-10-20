#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("299. Bulls and Cows") {
    Solution s;
    REQUIRE(s.getHint("11", "10") == "1A0B");
}