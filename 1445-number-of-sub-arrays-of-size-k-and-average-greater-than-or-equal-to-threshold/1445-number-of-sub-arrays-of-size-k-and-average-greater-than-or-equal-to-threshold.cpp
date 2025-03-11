class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int th) {
        
        int sum = 0 ;
        int c = 0 ; 
       

        for(auto i=0 ; i<k ; i++)
        {
            sum += arr[i] ; 
        }
         int prev = sum ;  

        int avg = sum/k ; 
        if(avg >= th)
        {
            c++ ; 

        }
        int l = 0 ;  


        for(auto r = k ; r < arr.size() ; r++ )
        {
            sum -= arr[l]  ;
            l++ ; 

            sum += arr[r] ; 

            if(sum/k >= th)
            {
                c++ ; 
            }

        }

        return c; 



    }
};