class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        int x = INT_MIN ;  
        for(auto i : nums) x=max(x,i);
        map<int , int> mp ; 

        int l=0 ;  
        int r = 0 ; 
        long long sum = 0 ; 
        long long  maxi = 0 ;  

        while( r < nums.size())
        {

            mp[nums[r]]++  ;
            sum += nums[r] ; 

            if(k == r-l+1)
            {
                if(mp.size() == k){
                maxi = max(maxi , sum) ;}

                mp[nums[l]]-- ; 
                if(mp[nums[l]] == 0) mp.erase(nums[l]) ; 

                sum -= nums[l] ; 
                l++ ; 

            }

            

            

            // if(r-l+1 > k)
            // {
            //     sum -= nums[l] ; 
            //     freq[nums[l]] = 0 ; 
            //     l++ ; 
            //     continue ; 
            // }
            // if(freq[nums[r]] == 0)
            // {
            //     freq[nums[r]] = 1 ; 
            //     sum += nums[r] ; 
            // }
            // else{
            //     sum -= nums[l] ; 
            //     freq[nums[l]] = 0 ; 
            //     l++ ; 
            // }



            // if((r-l+1) == k){
            // maxi = max(maxi , sum)  ; 
            // }

            r++ ; 
            
        }


        return maxi ; 


    }
};