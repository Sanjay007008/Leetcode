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
    bool isPalindrome(ListNode* head) {
        stack<int> st ; 

        ListNode* curr = head ; 
        ListNode* res = head  ; 


        while(curr)
        {
            st.push(curr->val) ; 
            curr = curr->next ; 
        }


        while(res)
        {

            if(st.top() != res->val)
            {
                return false ; 
            }

            st.pop()  ; 
            res =  res->next ; 
        }

        return true ; 
    }
};