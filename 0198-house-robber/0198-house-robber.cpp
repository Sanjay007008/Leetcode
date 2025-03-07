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
        int ans  = fun(nums,nums.size()-1 , dp) ; 

        return ans  ; 
    }
};