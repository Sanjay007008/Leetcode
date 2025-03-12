class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int maxi = 1 ; 




        for(int i=0 ; i<s.length() ; i++)
        {
            int p=0 ; 
            for(int j=i + 1; j<s.length() ; j++)
            {

                if(s[j-1] == s[j])
                {
                    p++ ; 
                }

                if(p>1) break ; 


                maxi = max(maxi , j-i+1) ; 

            }
        }


        return maxi ; 
    }
};