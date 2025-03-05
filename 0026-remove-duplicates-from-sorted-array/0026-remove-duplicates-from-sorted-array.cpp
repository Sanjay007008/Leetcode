class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s ;
        for(int i=0 ; i<nums.size() ; i++) s.insert(nums[i]);

        nums.resize(s.size());

        
        int i=0 ; 
        for(auto itr : s)
        {
            nums[i] = itr;
            i++ ;
        }

        return nums.size();
    }
};