class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      vector<vector<string>> ans  ; 
      map<string , vector<string>> mp ; 

      for(auto & i  : strs)
      {
        string t = i ; 
        sort(i.begin() , i.end()) ; 
        mp[i].push_back(t) ; 
      }

      for(auto &itr: mp)
      {
        ans.push_back(itr.second) ; 
      }

      return ans  ; 


    }
};