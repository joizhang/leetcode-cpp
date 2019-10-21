struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* p = dummy, * p1 = p->next, * p2 = p1->next;
        while (p2) {
            if (p2->val == p1->val) {
                while (p2 && p2->val == p1->val) {
                    p2 = p2->next;
                    p1 = p1->next;
                }
                p->next = p2;
            }
            else
                p = p->next;
            if (!p2) break;
            p2 = p2->next;
            p1 = p1->next;
        }
        return dummy->next;
    }
};