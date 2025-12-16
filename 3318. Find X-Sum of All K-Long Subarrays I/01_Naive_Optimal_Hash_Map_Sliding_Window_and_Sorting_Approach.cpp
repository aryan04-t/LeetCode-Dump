// LeetCode (3318. Find X-Sum of All K-Long Subarrays I): 
// https://leetcode.com/problems/find-x-sum-of-all-k-long-subarrays-i 


// TAGS: [RATING: 1457], [EASY], [NAIVE OPTIMAL], [STL], [ARRAY], [HASH MAP], [SORTING], [SLIDING WINDOW], [PAIR SORTING], [COUNTING], [SUM] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int calculateXSum (const vector<pair<int, int>> &freqValVec, int x) {

        int m = freqValVec.size();

        int sum = 0;
        for (int i=0; i < m && i < x; i++) {
            int freq = freqValVec[i].first;
            int val = freqValVec[i].second;
            sum += (freq * val);
        }

        return sum;
    }

    vector<pair<int, int>> buildFreqValVec (const unordered_map<int, int> &freqCount) {

        vector<pair<int, int>> freqValVec;

        for (const pair<int, int> &p : freqCount) {
            int val = p.first;
            int freq = p.second;

            if (freq != 0) {
                freqValVec.push_back({ freq, val });
            }
        }

        return freqValVec;
    }

    vector<int> findXSum(vector<int>& nums, int k, int x) {
        
        int n = nums.size();

        unordered_map<int, int> freqCount;
        vector<int> ans;
        
        for (int i=0; i < n; i++) {
            
            int addEle = nums[i];
            freqCount[addEle]++;

            if ( i >= k) {
                int removeEle = nums[i - k];
                freqCount[removeEle]--;
            }

            if (i >= k-1) {
                vector<pair<int, int>> freqValVec = buildFreqValVec(freqCount);
                sort(freqValVec.begin(), freqValVec.end(), greater<pair<int, int>>());
                
                int sum = calculateXSum(freqValVec, x);
                ans.push_back(sum);
            }
        }

        return ans;
    }
};


// T.C = O((n-k+1)*(m + m*log(m) + min(x, m))) = O(n*m*log(m)) = O((n^2)*(log(n) to the base 2)) 
// S.C. = O(m) + O(m) + O(log(m) to the base 2) + O(n-k+1) = O(n) 

// Here, m = the total number of unique elements in the window of size k, and in worst case m == k == n, and x == n 