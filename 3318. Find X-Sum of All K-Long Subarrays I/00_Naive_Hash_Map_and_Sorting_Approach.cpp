// LeetCode (3318. Find X-Sum of All K-Long Subarrays I): 
// https://leetcode.com/problems/find-x-sum-of-all-k-long-subarrays-i 


// TAGS: [RATING: 1457], [EASY], [NAIVE], [STL], [ARRAY], [HASH MAP], [COUNTING], [SUM], [SORTING], [PAIR SORTING]


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        
        int n = nums.size();
        int windows = n - k + 1;

        vector<int> ans;

        for (int i=0; i < windows; i++) {
            
            unordered_map<int, int> numFreqMap;
            for (int j=i; j < i+k; j++) {
                int num = nums[j];
                numFreqMap[num]++;
            }
            
            vector<pair<int, int>> freqNumVec;
            for (const pair<int, int> &p : numFreqMap) {
                int num = p.first;
                int freq = p.second;
                freqNumVec.push_back({ freq, num });
            }
            
            sort(freqNumVec.begin(), freqNumVec.end(), greater<pair<int, int>>());

            int sum = 0;
            
            int k=0;
            int m = freqNumVec.size();
            
            while (k < m && k < x) {
                pair<int, int> p = freqNumVec[k];
                int freq = p.first;
                int num = p.second;
                sum += (freq * num);
                k++;
            }

            ans.push_back(sum);
        }

        return ans;
    }
};


// T.C. = O((n-k+1)*(k + m + m*log(m) + min(x, m))) = O(n*m*log(m)) = O((n^2)*log(n)) 
// S.C. = O(n-k+1) + O(m) + O(m) + O(log(m)) = O(n) 

// Here, m = the total number of unique elements in the window of size k, and in worst case m == k == n, and x == n 