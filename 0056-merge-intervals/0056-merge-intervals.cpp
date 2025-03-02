class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        ans.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++) {
            auto last = ans.back();
            int fir = last[0];
            int las = last[1];

            if (las >= intervals[i][0]) {

                ans.back()[1] = max(las, intervals[i][1]);
            } else {
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};