class Solution {
public:
    void solve(int ind  , vector<int> & temp  ,vector<vector<int>> & ans , vector<int> & arr ,  int tar)
    {
        if(ind == arr.size() )
        {
            if(tar == 0)
            {
                ans.push_back(temp) ; 
                
            } return  ;
        }


        if(arr[ind] <= tar)
        {
            temp.push_back(arr[ind]) ; 
            solve(ind  , temp  , ans  , arr  ,  tar - arr[ind]) ; 
            temp.pop_back()  ; 
        }

         solve(ind + 1  , temp  , ans  , arr  ,  tar) ;

    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        

        vector<vector<int>> ans  ; 
        vector<int> temp ; 

        solve(0 , temp , ans , arr , target)  ;

        return ans  ; 
    }
};