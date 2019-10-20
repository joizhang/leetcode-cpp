#define CATCH_CONFIG_MAIN
#include <iostream>
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

using namespace std;

ListNode* vectorToLinkedList(vector<int> v) {
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

TEST_CASE("021. Merge Two Sorted Lists") {
    Solution s;
    ListNode* l1 = vectorToLinkedList(vector<int>{1, 2, 4});
    ListNode* l2 = vectorToLinkedList(vector<int>{1, 3, 4});
    REQUIRE(linkedListToVector(s.mergeTwoLists(l1, l2)) == vector<int>{1, 1, 2, 3, 4, 4});
}