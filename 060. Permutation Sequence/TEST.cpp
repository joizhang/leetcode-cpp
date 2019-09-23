#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("060. Permutation Sequence") {
    Solution s;
    REQUIRE(s.getPermutation(3, 3) == "213");
}