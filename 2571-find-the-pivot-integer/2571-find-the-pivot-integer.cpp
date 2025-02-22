class Solution {
public:
    int pivotInteger(int n) {
        
        if( n ==1) return 1 ;


        int s1 = 0 ;
        int s2 = 0 ;
        int i=1 ; 
        int j=n ;

        while(i<=j)
        {
            if(s1 <= s2)
            {
                s1 += i ; 
                i++ ; 
            }
            else if(s2 <= s1)
            {
                s2 += j ; 
                j-- ; 
            } 
            

            if(s1 == s2 && i == j )
            {
                return i ; 
            }
        }

        return -1 ; 
    }
};