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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* odd = new ListNode(-1);
        ListNode* even = new ListNode(-1);
        ListNode* oddhead = odd;
        ListNode* evenhead = even;
        ListNode* curr = head;
        ListNode* temp;
        int cnt=0;
        while(curr){
            temp = curr;
            curr = curr->next;
            temp->next=nullptr;

            if(cnt%2!=0){
                oddhead->next=temp;
                oddhead=temp;

            }else{
                evenhead->next=temp;
                evenhead=temp;
            }
            cnt++;
        }
            evenhead->next=odd->next;
return even->next;
    }
};