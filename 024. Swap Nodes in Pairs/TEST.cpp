#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>

using namespace std;

ListNode* vectorToLinkedList(vector<int> v) {
    if (v.empty()) return nullptr;
    auto iter = v.begin();
    ListNode* head = new ListNode(*iter++);
    for (ListNode* cur = head; iter != v.end(); cur = cur->next) {
        cur->next = new ListNode(*iter++);
    }
    return head;
}

vector<int> linkedListToVector(ListNode* l) {
    vector<int> v;
    ListNode* p = l;
    while (p) {
        v.push_back(p->val);
        p = p->next;
    }
    return v;
}

TEST_CASE("024. Swap Nodes in Pairs") {
    Solution s;
    ListNode* l = vectorToLinkedList(vector<int>{});
    REQUIRE(linkedListToVector(s.swapPairs(l)) == vector<int>{});
    
    l = vectorToLinkedList(vector<int>{1});
    REQUIRE(linkedListToVector(s.swapPairs(l)) == vector<int>{1});

    l = vectorToLinkedList(vector<int>{1, 2});
    REQUIRE(linkedListToVector(s.swapPairs(l)) == vector<int>{2, 1});

    l = vectorToLinkedList(vector<int>{1, 2, 3});
    REQUIRE(linkedListToVector(s.swapPairs(l)) == vector<int>{2, 1, 3});

    l = vectorToLinkedList(vector<int>{1, 2, 3, 4});
    REQUIRE(linkedListToVector(s.swapPairs(l)) == vector<int>{2, 1, 4, 3});
}