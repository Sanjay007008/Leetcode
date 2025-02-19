class Solution {
public:
    void solve(int n , vector<string> & res , string & temp , int ind)
    {
        if(ind == n)
        {
            cout << temp << "\n" ; 
            res.push_back(temp) ; 
            return  ; 
        }

        if(temp.empty() || temp.back() != 'a'  )
        {
            temp += 'a' ; 
            
            solve(n , res , temp  , ind + 1 ) ;

            temp.pop_back() ;   
        }
        if(temp.empty() || temp.back() != 'b')
        {
            temp += 'b' ; 
           solve(n , res , temp, ind + 1 ) ; 
           temp.pop_back() ; 
        }
        if(temp.empty() || temp.back() != 'c' )
        {
            temp += 'c' ; 
            
            solve(n , res , temp , ind + 1) ; 
            temp.pop_back() ; 
        }
        //solve(n , res , temp , ind++ ) ; 

    }
    string getHappyString(int n, int k) {


        // if(n < k)
        // {
        //     return "" ; 
        // }
        string temp ; 

        vector<string> res ; 

        int ind = 0  ;

        solve(n , res , temp , ind) ; 


        sort(res.begin() , res.end()) ; 

       

        if(k > res.size())
        {
            return  "" ; 
        }
     string ans  = res[k-1] ; 
        return ans  ; 
    }
};