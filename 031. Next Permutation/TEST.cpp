#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("031. Next Permutation") {
    Solution s;

    vector<int> v1{ 1, 2, 3 };
    s.nextPermutation(v1);
    REQUIRE(v1 == vector<int>{1, 3, 2});

    vector<int> v2{ 2, 3, 1 };
    s.nextPermutation(v2);
    REQUIRE(v2 == vector<int>{3, 1, 2});

    vector<int> v3{ 0, 5, 4, 3, 2, 1 };
    s.nextPermutation(v3);
    REQUIRE(v3 == vector<int>{1, 0, 2, 3, 4, 5});

    vector<int> v4{ 5, 4, 3, 2, 1, 0 };
    s.nextPermutation(v4);
    REQUIRE(v4 == vector<int>{0, 1, 2, 3, 4, 5});

    vector<int> v5{ 0 };
    s.nextPermutation(v5);
    REQUIRE(v5 == vector<int>{0});
}