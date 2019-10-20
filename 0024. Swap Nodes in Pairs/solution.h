struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head) return head;
        ListNode dummy(0);
        dummy.next = head;
        ListNode* first = &dummy, * second = &dummy;
        while (first->next && first->next->next) {
            first = first->next->next;
            second->next = first;
            head->next = first->next;
            first->next = head;
            first = head;
            head = head->next;
            second = first;
        }
        return dummy.next;
    }
};