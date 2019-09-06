#include <vector>
#include <queue>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        return mergeKLists(lists.cbegin(), lists.cend());
    }
private:
    ListNode* mergeKLists(vector<ListNode*>::const_iterator beg, vector<ListNode*>::const_iterator end) {
        if (beg == end) return NULL;
        else if (distance(beg, end) == 1) return *beg;
        else if (distance(beg, end) == 2) return mergeTwoLists(*beg, *next(beg));
        else return mergeTwoLists(mergeKLists(beg, beg + std::distance(beg, end) / 2), 
                                  mergeKLists(beg + std::distance(beg, end) / 2, end));
    }

    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL, ** lastPtrRef = &head;
        for (; l1 && l2; lastPtrRef = &((*lastPtrRef)->next)) {
            if (l1->val <= l2->val) { *lastPtrRef = l1; l1 = l1->next; }
            else { *lastPtrRef = l2; l2 = l2->next; }
        }
        *lastPtrRef = l1 ? l1 : l2;
        return head;
    }
};