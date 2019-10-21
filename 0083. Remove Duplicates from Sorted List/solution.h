struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return head;
        ListNode* p1 = head, * p2 = head->next;
        while (p2) {
            if (p2->val == p1->val)
                p1->next = p2->next;
            else
                p1 = p1->next;
            p2 = p2->next;
        }
        return head;
    }
};