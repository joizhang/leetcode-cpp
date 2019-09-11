#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("204. Count Primes") {
    Solution s;

    REQUIRE(s.countPrimes(10) == 4);
}