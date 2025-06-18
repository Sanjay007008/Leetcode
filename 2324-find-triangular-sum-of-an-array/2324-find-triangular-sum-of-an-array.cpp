class Solution {
private:
    void debug(vector<int> ans) {
        for (auto& i : ans) {
            cout << i << " ";
        }
        cout << "\n";
    }

public:
    int triangularSum(vector<int>& nums) {

        while (nums.size() > 1) {

            int len = nums.size() - 1;
            vector<int> newNums(len);

            for (int i = 0; i < nums.size() - 1; i++) {
                int val = nums[i] + nums[i + 1];
                newNums[i] = (val % 10);
            }

            nums = newNums;
           // debug(nums);
        }

        return nums[0];
    }
};