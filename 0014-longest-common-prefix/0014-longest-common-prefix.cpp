class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin() , strs.end()) ; 
        string ans = ""; 

        string f = strs[0] ; 
        string l = strs.back() ; 

        for(auto i = 0 ; i<f.size() ; i++)
        {
            if(f[i] == l[i])
            {
                ans += f[i] ; 
            }
            else{
                break ; 
            }
        }



        return ans ; 
    }
};