class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, bool> mp;
        int l = 0;
        int r = 0;
        int maxi = 0;

        while (r < s.size()) {
            while (mp[s[r]]) {
                mp.erase(s[l]);
                l++;
            }
            mp[s[r]] = true;
            maxi = max(maxi, r - l + 1);
            r++;
        }

        return maxi;
    }
};