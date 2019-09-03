#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <iostream>

using namespace std;

TEST_CASE("Reverse Integer", "reverse") {
    cout << INT_MAX << INT_MIN << endl;
    Solution s;
    REQUIRE(s.reverse(123) == 321);
    REQUIRE(s.reverse(-123) == -321);
    REQUIRE(s.reverse(120) == 21);
    REQUIRE(s.reverse(1463847412) == 2147483641);
}