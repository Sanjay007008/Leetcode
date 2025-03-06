class Solution {
public:
    int fun(vector<int>& nums , int ind , vector<int> & dp)
    {
        if(ind <  0)
        {
            return 0 ; 
        }

        if(dp[ind] != -1) return dp[ind];

        int pick = nums[ind] + fun(nums , ind - 2 , dp) ; 
        int non_pick = 0 + fun(nums,ind-1 , dp) ; 

        return dp[ind] = max(pick , non_pick) ; 
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size() , -1) ; 
        vector<int> temp1 , temp2 ;


        if(nums.size() == 1) return nums[0] ;  


        for(int i=0;  i<nums.size() ; i++)
        {
            if(i != 0)
            {
                temp1.push_back(nums[i]) ; 
            }
            if(i != nums.size()-1)
            {
                temp2.push_back(nums[i]) ; 
            }
        }
        vector<int> dp1(nums.size() , -1) ; 
        vector<int> dp2(nums.size() , -1) ; 
        //int ans  = fun(nums,nums.size()-1 , dp) ; 

        return max(fun(temp1 , temp1.size()-1 , dp1) , fun(temp2 ,temp2.size()-1 , dp2))  ; 
    }
};