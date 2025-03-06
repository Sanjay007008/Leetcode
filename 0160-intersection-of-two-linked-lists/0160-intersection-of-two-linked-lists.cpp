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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode* ,  int> mp ; 

        ListNode* temp1 = headA ; 
        ListNode* temp2 = headB ; 


        while(temp1 != nullptr  )
        {
            mp[temp1] = 1 ;
            temp1 = temp1->next ;  
        }


        while(temp2 != nullptr)
        {
            if(mp.find(temp2) != mp.end())
            {
                return temp2 ; 
            }    

            mp[temp2] = 1  ;
            temp2 = temp2->next;         
        }


        return nullptr ; 
    }
};