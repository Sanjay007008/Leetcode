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
    bool hasCycle(ListNode *head) {
        map<ListNode* , bool > mp ; 
        ListNode* curr = head ; 
        while(curr != nullptr)
        {
            if(mp.find(curr) != mp.end())
            {
                return true ; 
            }
            mp[curr] = true  ; 
            curr = curr->next ; 
        }


        return false ;
    }
};