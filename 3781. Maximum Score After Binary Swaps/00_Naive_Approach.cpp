// LeetCode (3781. Maximum Score After Binary Swaps): 
// https://leetcode.com/problems/maximum-score-after-binary-swaps 


// TAGS: [RATING: N/A], [MEDIUM], [NAIVE], [TLE ERROR], [STL], [ARRAY], [STRING], [GREEDY], [MAXIMIZING], [SUM] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long maximumScore(vector<int>& nums, string s) {
        
        int n = s.length();

        for (int i=0; i < n; i++) {
            if (s[i] == '1') {
                int maxiIdx = i;
                int j = i-1;
                while (j >= 0) { 
                    if (s[j] == '0' && nums[j] > nums[maxiIdx]) {
                        maxiIdx = j;
                    }
                    j--;
                }
                if (maxiIdx != i) {
                    swap(s[i], s[maxiIdx]);
                }
            }
        }

        long long maxiSum = 0;
        for (int i=0; i < n; i++) {
            if (s[i] == '1') maxiSum += nums[i];
        }

        return maxiSum;
    }
};


// T.C. = O(n^2) + O(n) = O(n^2) 
// S.C. = O(1) 