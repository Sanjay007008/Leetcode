class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                int r = j + 1;
                int k = n - 1;
                while (r < k) {
                    long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[r] + (long long)nums[k];
                    if (sum == target) {
                        ans.push_back({nums[i], nums[j], nums[r], nums[k]});
                        while (r < k && nums[r] == nums[r + 1]) r++;
                        while (r < k && nums[k] == nums[k - 1]) k--;
                        r++;
                        k--;
                    } else if (sum > target) {
                        k--;
                    } else {
                        r++;
                    }
                }
            }
        }
        return ans;
    }
};
