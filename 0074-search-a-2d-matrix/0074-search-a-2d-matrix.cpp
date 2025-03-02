class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        auto bs = [](int low, int high, vector<int>& arr, int tar) -> bool {
            while (low <= high) {
                int mid = low + (high - low) / 2;

                if (arr[mid] == tar) {
                    return true;
                }

                if (tar < arr[mid]) {
                    //bs(low, mid, arr, tar);
                    high = mid - 1 ;

                    
                }
                else {
                    low = mid + 1 ; 
                }
            }

            return false ; 
        };

        int m = matrix[0].size() ; 
        for (auto i = 0; i < matrix.size(); i++) {

            if (matrix[i][0] <= target && target <= matrix[i][m - 1]) {
                if (bs(0, m - 1, matrix[i], target)) {
                    return true;
                }
            }
        }

        return false;
    }
};