struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* fast = &dummy;
        while (n > 0) {
            fast = fast->next;
            n--;
        }
        ListNode* p = &dummy;
        while (fast->next != nullptr) {
            p = p->next;
            fast = fast->next;
        }
        if (p->next) 
            p->next = p->next->next;
        return dummy.next;
    }
};