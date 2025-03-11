class Solution {
public:
    int func(vector<int> &freq,int x){
        int c=0;
        for(int i=0;i<freq.size();i++){
            if(freq[i]!=0){
                c+=freq[i];
                if(c>=x)
                return (i-50);
            }    
        }
        return -1;
    }
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        vector<int> ans;
        vector<int> freq(101,0);
        int n = nums.size();
        for(int i=0;i<k;i++){
            int e = nums[i];
            freq[e+50]++;
        }
        for(int i=k;i<n;i++){
            int e = nums[i];
            int ind = func(freq,x);
            if(ind>=0){
                ans.push_back(0);
                freq[nums[i-k]+50]--;
                freq[e+50]++;
                continue;
            }
            ans.push_back(ind);
            freq[nums[i-k]+50]--;
            freq[e+50]++;
        }
        int ind = func(freq,x);
        if(ind>=0){
            ans.push_back(0);
            return ans;
        }
        
        ans.push_back(ind);
        return ans;
    }
};