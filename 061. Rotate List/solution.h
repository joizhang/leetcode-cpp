struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* cur = head;
        int len = 0;
        while (cur != nullptr) {
            len++;
            cur = cur->next;
        }
        if (k % len == 0) return head;
        k = k % len;
        ListNode* pre = head;
        while (k > 0) {
            pre = pre->next;
            k--;
        }
        cur = head;
        while (pre->next != nullptr) {
            pre = pre->next;
            cur = cur->next;
        }
        ListNode* newHead = cur->next;
        cur->next = nullptr;
        ListNode* p = newHead;
        while (p->next != nullptr) {
            p = p->next;
        }
        p->next = head;
        return newHead;
    }
};