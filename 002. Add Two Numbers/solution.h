struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0), * tail = &dummy;
        int extra = 0;
        while (l1 || l2 || extra) {
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + extra;
            extra = sum / 10;
            tail->next = new ListNode(sum % 10);
            tail = tail->next;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        return dummy.next;
    }

    ListNode* addTwoNumbers2(ListNode* l1, ListNode* l2) {
        ListNode dummy(0), * tail = &dummy;
        for (div_t sum{ 0, 0 }; sum.quot || l1 || l2; tail = tail->next) {
            if (l1) {
                sum.quot += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum.quot += l2->val;
                l2 = l2->next;
            }
            sum = div(sum.quot, 10);
            tail->next = new ListNode(sum.rem);
        }
        return dummy.next;
    }
};