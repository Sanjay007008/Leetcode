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
    ListNode* middleNode(ListNode* head) {
        


        int c = 0  ;
        ListNode* curr = head ; 

        while(curr != nullptr)
        {
            c++ ; 
            curr = curr->next ; 
        }

        int mid  ; 
        if(c %2 ==0 )
        {
            mid = c/2 ; 
        }
        else{
            mid = c/2 ;
        }

        ListNode* ans = head ; 
        while(mid--)
        {
            ans = ans ->next ; 
        }

        return ans  ; 
    }
};