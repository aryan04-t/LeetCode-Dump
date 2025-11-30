// LeetCode (1590. Make Sum Divisible by P):
// https://leetcode.com/problems/make-sum-divisible-by-p 


// TAGS: [RATING: 2038], [MEDIUM], [NAIVE], [TLE ERROR], [SUBARRAY], [PREFIX SUM], [MODULAR ARITHMETIC], [DIVISIBILITY] 


// Gives TLE Error 


#include<bits/stdc++.h>
using namespace std;


using ll = long long;


class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        
        int n = nums.size();
        int mini = INT_MAX;

        ll totalSum = 0;
        for (int val : nums) totalSum += val;

        int removeRemainder = static_cast<int>(totalSum % p);
        if (removeRemainder == 0) return 0;

        for (int i=0; i < n; i++) {
            long long runningSum = 0;

            for (int j=i; j < n; j++) {
                int val = nums[j];
                runningSum += val; 

                int runningSumRemainder = runningSum % p;
                int subArrLen = j - i + 1;

                if (subArrLen != n && runningSumRemainder == removeRemainder) {
                    mini = min(subArrLen, mini);
                }
            }
        }

        if (mini == INT_MAX) mini = -1;

        return mini;
    }
};


// T.C. = O(n) + O((n*(n+1))/2) = O(n^2) 
// S.C. = O(1) 