class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        map<int,int> mp ; 
        int sum= 0  ;
        mp[0] = -1 ; 

        for(int i=0 ; i<nums.size() ; i++)
        {
            sum  =  (sum + nums[i])%k ; 

            if(mp.find(sum) != mp.end())
            {
                if(i - mp[sum] >= 2)
                {
                    return true ; 
                }
                
            }
            else{
                    mp[sum] = i ; 
                }
        }


        return 0 ; 
    }
};