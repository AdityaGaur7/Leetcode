/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode *,int> mp;

        ListNode *p = head;
        int cnt =0;
        while(p!=nullptr){
       if(mp.find(p)!=mp.end()){
        int ok = mp[p];
        return p;
       }
          
        mp[p]=cnt;
        cnt++;
        p=p->next;
        }
        return nullptr;
    }
};