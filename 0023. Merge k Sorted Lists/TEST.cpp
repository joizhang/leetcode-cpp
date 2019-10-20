#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

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

TEST_CASE("23. Merge k Sorted Lists") {
    Solution s;
    vector<ListNode*> v;
    v.push_back(vectorToLinkedList(vector<int>{1, 4, 5}));
    v.push_back(vectorToLinkedList(vector<int>{1, 3, 4}));
    v.push_back(vectorToLinkedList(vector<int>{2, 6}));

    REQUIRE(linkedListToVector(s.mergeKLists(v)) == vector<int>{1, 1, 2, 3, 4, 4, 5, 6});
}