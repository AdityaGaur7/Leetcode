/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
   ListNode* rotateRight(ListNode* head, int k) {
    if (!head || !head->next || k == 0) return head;

   
    ListNode* f = head;
    int cnt = 1;
    while (f->next != nullptr) {
        f = f->next;
        cnt++;
    }

    
    k = k % cnt;
    if (k == 0) return head;

    int len = cnt - k;
    ListNode* temp = head;
    while (--len > 0) temp = temp->next;

   
    ListNode* r = temp->next;
    temp->next = nullptr;
    f->next = head;

    return r;
}
};