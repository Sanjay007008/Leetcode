#include <bits/stdc++.h>
using namespace std;

class SOE {
    int n;
    vector<int> prime;

public:
    SOE(int n) {
        this->n = n;
        prime = vector<int>(n + 1, 1);
        prime[0] = prime[1] = 0;

        for (int i = 2; i * i <= n; i++) {
            if (prime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    prime[j] = 0;
                }
            }
        }
    }

    vector<int> getPrimes() {
        return prime;
    }
};

class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        SOE temp(n);
        vector<int> prime = temp.getPrimes();

        vector<int> primesList;
        for (int i = 2; i < prime.size(); i++) {
            if (prime[i] == 1) {
                primesList.push_back(i);
            }
        }

        vector<vector<int>> result;
        set<pair<int, int>> seen;

        for (int p : primesList) {
            int q = n - p;
            if (q >= 2 && binary_search(primesList.begin(), primesList.end(), q)) {
                int a = min(p, q);
                int b = max(p, q);
                if (seen.find({a, b}) == seen.end()) {
                    result.push_back({a, b});
                    seen.insert({a, b});
                }
            }
        }

        return result;
    }
};
