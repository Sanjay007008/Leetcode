class Solution {
public:
    int countArrays(vector<int>& original, vector<vector<int>>& bounds) {
        
        int n  = original.size() ; 
        int diff = 0   ;
        int upper =  bounds[0][1]  ; 
        int low = bounds[0][0] ;



        for(int i=1 ; i< n  ; i++ )
        {
            int curr = original[i] - original[i-1] ;
            curr += diff ;  
            low  = max(low , bounds[i][0] - curr) ;
            upper = min(upper , bounds[i][1] - curr) ;
            diff = curr ; 
        }

        int ans = upper - low + 1 ;




        return ans < 0 ? 0 : ans ; 
    }
};