#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("455. Assign Cookies") {
    Solution solution;

    vector<int> g{ 1,2,3 };
    vector<int> s{ 1,1 };
    REQUIRE(solution.findContentChildren(g, s) == 1);
}