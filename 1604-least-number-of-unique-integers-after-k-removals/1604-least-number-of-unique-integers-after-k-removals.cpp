#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> freqMap;
        for (auto& num : arr) {
            freqMap[num]++;
        }

        priority_queue<int, vector<int>, greater<int>> minHeap;
        for (auto& [num, freq] : freqMap) {
            minHeap.push(freq);
        }

        while (k > 0 && !minHeap.empty()) {
            int freq = minHeap.top();
            minHeap.pop();

            if (k >= freq) {
                k -= freq;
            } else {
                minHeap.push(freq - k);
                k = 0;
            }
        }

        return minHeap.size();
    }
};
