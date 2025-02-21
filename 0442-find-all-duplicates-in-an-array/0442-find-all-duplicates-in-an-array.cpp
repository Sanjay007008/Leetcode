class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans ; 

        map<int,int> mp ; 
        for(auto & i : nums)
        {
            mp[i]++ ; 
        }


        for(auto itr : mp)
        {
            if(itr.second  == 2)
            {
                ans.push_back(itr.first) ; 
            }
        }

        return ans ; 
    }
};