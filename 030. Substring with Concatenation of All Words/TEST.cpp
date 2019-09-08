#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("030. Substring with Concatenation of All Words") {
    Solution s;
    
    /*vector<string> words1{ "foo","bar" };
    REQUIRE(s.findSubstring("barfoothefoobarman", words1) == vector<int>{0, 9});

    vector<string> words2{ "word","good","best","word" };
    REQUIRE(s.findSubstring("wordgoodgoodgoodbestword", words2) == vector<int>{});

    vector<string> words3{};
    REQUIRE(s.findSubstring("", words3) == vector<int>{});

    vector<string> words4{ "bar","foo","the" };
    REQUIRE(s.findSubstring("barfoofoobarthefoobarman", words4) == vector<int>{6, 9, 12});

    vector<string> words5{ "fooo","barr","wing","ding","wing" };
    REQUIRE(s.findSubstring("lingmindraboofooowingdingbarrwingmonkeypoundcake", words5) == vector<int>{13});*/

    vector<string> words6{ "aaa","aaa" };
    REQUIRE(s.findSubstring("aaaaaa", words6) == vector<int>{0});
}