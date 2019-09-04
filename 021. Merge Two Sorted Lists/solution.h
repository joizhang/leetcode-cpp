struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* p = &dummy;
        while (l1 && l2) {
            ListNode* temp;
            if (l1->val <= l2->val) {
                temp = l1;
                l1 = l1->next;
            }
            else {
                temp = l2;
                l2 = l2->next;
            }
            p->next = temp;
            p = p->next;
            p->next = nullptr;
        }
        p->next = l1 ? l1 : l2;
        return dummy.next;
    }
};