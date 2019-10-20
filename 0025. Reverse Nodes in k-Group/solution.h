struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* pre = &dummy, * end = &dummy;
        while (end->next != nullptr) {
            for (int i = 0; i < k && end != nullptr; i++) end = end->next;
            if (end == nullptr) break;

            ListNode* start = pre->next;
            ListNode* next = end->next;

            end->next = nullptr;
            pre->next = reverse(start);
            start->next = next;

            pre = start;
            end = start;
        }
        return dummy.next;
    }
private:
    ListNode* reverse(ListNode* head) {
        ListNode* cur = head;
        ListNode* pre = nullptr;
        while (cur != nullptr) {
            ListNode* next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        return pre;
    }
};