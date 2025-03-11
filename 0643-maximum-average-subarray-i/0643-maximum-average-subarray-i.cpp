class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        

        int l=0 ; 
        int r=0 ; 
        double sum = 0 ;
        double prev = 0 ; 
          

        for(int i=0 ; i<k ; i++ )
        {
            sum += nums[i] ; 
        }
        double maxi = sum / k ;
        // int l = 0 ; 
         


        for(int i=k ; i<nums.size() ; i++)
        {
            

        
                //prev = sum ; 
                
                
    

            sum +=  nums[i] - nums[l] ;
            maxi = max(maxi , sum/k ) ; 
            l++ ;  


        }

        return maxi ; 
    }
};