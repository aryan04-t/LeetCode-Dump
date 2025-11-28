// LeetCode (3381. Maximum Subarray Sum With Length Divisible by K): 
// https://leetcode.com/problems/maximum-subarray-sum-with-length-divisible-by-k 


// This gives TLE 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();
        vector<long long> prefixSum(n, 0);

        for (int i=0; i < n; i++) {
            long long prefix = (i > 0) ? prefixSum[i-1] : 0;
            prefixSum[i] = prefix + static_cast<long long>(nums[i]);
        }

        long long maxiSum = LLONG_MIN;

        for (int i=k-1; i < n; i++) {
            
            int right = i;
            int left = i - k + 1;
            
            while (left >= 0) {
                long long excludingSum = (left - 1) >= 0 ? prefixSum[left-1] : 0;
                long long currSum = prefixSum[right] - excludingSum;
                maxiSum = max(currSum, maxiSum);
                left -= k;
            }
        }

        return maxiSum;
    }
};


/*
    # General expression for nested loops in this code for T.C. analysis: 
      = k*1 + k*2 + k*3 + ... + k*(n/k) -> This expression has n/k terms 
      = k*(1 + 2 + 3 + ... + n/k)
      = k*(((n/k)*(n/k + 1))/2) -> Sum of n natural numbers => (n*(n+1))/2
      = k*(n^2/k^2 + n/k) -> Drop the constants
      = (n^2)/k + n -> Drop lower order terms 
      = O((n^2)/k) 
*/


// T.C. = O(n) + O((n^2)/k) = O((n^2)/k) = [Best Case = O(n) where k = n, Worst Case = O(n^2) where k = 1]
// S.C. = O(n) 