class Solution {
public:
    void solve( vector<int> & temp  , vector<vector<int>> & ans  , vector<int> & nums , vector<bool> & vis ) 
    {
        if(temp.size() == nums.size())
        {
            ans.push_back(temp) ; 
            return  ; 
        }

        for(auto i =0   ; i < nums.size() ; i++)
        {
            if(vis[i] == false){
            temp.push_back(nums[i])   ; 
            vis[i] = 1 ;
            //ind++  ; 
            solve( temp , ans , nums , vis  )  ;
            //ind-- ; 
            vis[i] = 0 ; 
            temp.pop_back() ; 

            } 
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int ind = 0  ; 
        int n = nums.size() ; 
        vector<int> temp; 
        vector<vector<int>> ans  ; 
        vector<bool> vis(n , 0) ;  

        solve( temp , ans , nums  , vis) ; 

        return ans  ; 
    }
};