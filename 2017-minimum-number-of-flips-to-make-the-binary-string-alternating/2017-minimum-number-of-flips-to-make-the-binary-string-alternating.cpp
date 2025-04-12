class Solution {
public:
    int minFlips(string s) {
        int len = s.length() ;
        string alt0 = "" ; 
        string alt1 = "" ; 

        for(int i=0 ; i<2*s.length() ; i++)
        {
            if(i%2 == 0)
            {
                alt0 += '0' ; 
            }
            else{
                alt0 += '1' ; 
            }

            if(i%2 == 0)
            {
                alt1 += '1' ; 
            }
            else{
                alt1 += '0' ; 
            }
        }




        string temp  = s + s ;
        int l=0 ; 
        int d1 = 0 ;
        int d0 = 0 ; 
        int res = len ;


        for(int r=0 ; r<temp.size() ; r++)
        {
            if(alt1[r] != temp[r]) d1++;
            if(alt0[r] != temp[r]) d0++;

            if(r-l+1  > len)
            {
                if(temp[l] != alt1[l]) d1--;
                if(temp[l] != alt0[l]) d0--;

                l++;
            }
            if(r-l+1 == len)
            {
                res = min(res , min(d0 , d1) )  ; 
            }

        }

        return res  ; 
    }
};