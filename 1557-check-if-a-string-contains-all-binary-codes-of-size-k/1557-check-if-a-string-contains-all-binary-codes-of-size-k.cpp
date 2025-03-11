class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int total = pow(2,k) ; 
        set<string> se ; 

        if (s.length() < k) return false;
        // for(auto i=0 ; i<k ; i++)
        // {
        //     string temp = s.substr(i , k)  ; 
        //     se.insert(temp) ; 
        // }
        int l = 0  ; 


        for(auto r=0 ; r <= s.length()-k ; r++)
        {
           
           
                 se.insert(s.substr(r , k));
            
            
            l++ ; 
        }

        if(total == se.size()) return true ; 

        return false; 





    }
};