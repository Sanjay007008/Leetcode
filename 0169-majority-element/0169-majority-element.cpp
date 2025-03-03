class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp ; 
        for(auto & i : nums) mp[i]++ ; 

        int n = nums.size() ; 

        for(auto itr : mp)
        {
            if(itr.second > n/2)
            {
                return itr.first ;
            }
        }

        return -1 ; 
    }

};