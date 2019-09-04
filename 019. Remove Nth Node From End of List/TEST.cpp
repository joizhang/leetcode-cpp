#define CATCH_CONFIG_MAIN
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

TEST_CASE("19. Remove Nth Node From End of List") {
    Solution s;
    ListNode* head = vectorToLinkedList(vector<int>{1, 2, 3, 4, 5});
    REQUIRE(linkedListToVector(s.removeNthFromEnd(head, 2)) == vector<int>{ 1,2,3,5 });

    head = vectorToLinkedList(vector<int>{1});
    REQUIRE(linkedListToVector(s.removeNthFromEnd(head, 1)) == vector<int>{});
}