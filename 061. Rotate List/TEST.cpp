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

TEST_CASE("061. Rotate List") {
    Solution s;
    ListNode* head = vectorToLinkedList(vector<int>{1, 2});
    REQUIRE(linkedListToVector(s.rotateRight(head, 2)) == vector<int>{1, 2});

    ListNode* head2 = vectorToLinkedList(vector<int>{1, 2, 3, 4, 5});
    REQUIRE(linkedListToVector(s.rotateRight(head2, 2)) == vector<int>{4, 5, 1, 2, 3});
}