class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        unordered_set<int> se;

        for (auto& i : nums) {
            se.insert(i);
        }

        int maxi = INT_MIN;

        for (auto& i : se)
        {
           
            if (se.find(i - 1) == se.end()) {
                int x = i;
                int c = 1;

                while (se.find(x + 1) != se.end()) {
                    x = x + 1;
                    c++;
                }

                 maxi = max(maxi, c);

            }

        }

        return maxi;
    }
};