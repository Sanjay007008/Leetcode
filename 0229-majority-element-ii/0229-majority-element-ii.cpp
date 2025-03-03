class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mp ; 
        vector<int> ans  ; 

        for(auto & i : nums) mp[i]++ ; 

        int n = nums.size() ; 
        for(auto itr : mp)
        {
            if(itr.second > n/3)
            {
                ans.push_back(itr.first) ;  
            }
        }

        return ans  ; 
    }
};