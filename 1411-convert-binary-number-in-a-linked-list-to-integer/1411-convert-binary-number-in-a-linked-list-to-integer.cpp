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
    int btod(string str)
    {
        int ans = 0  ; 
        int len = str.size() ; 

        for(int i=0 ; i<len ; i++)
        {
            if(str[len-1-i] == '1')
            {
                ans += pow(2,i) ; 
            }
        }

        return ans  ; 
    }
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head ; 
        string str= "" ; 
        while(temp)
        {   
            if(temp->val == 1)
            {
                str += '1' ; 
            }
            else{
                str += '0' ; 
            }


            temp = temp->next ; 
        }


        int val = btod(str);

        return val ;
    }
};