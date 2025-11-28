// LeetCode (3381. Maximum Subarray Sum With Length Divisible by K): 
// https://leetcode.com/problems/maximum-subarray-sum-with-length-divisible-by-k 


// This gives TLE 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();
        int subArrLen = k;
        long long maxiSum = LLONG_MIN;

        while (subArrLen <= n) {
            long long sum = 0;

            // Sliding window approach
            for (int i=0; i < n; i++) {
                if (i < subArrLen) {
                    sum += static_cast<long long>(nums[i]);
                }
                
                if (i == subArrLen-1) maxiSum = max(sum, maxiSum);
                else if (i >= subArrLen) {
                    int removeIdx = i - subArrLen;

                    sum -= static_cast<long long>(nums[removeIdx]);
                    sum += static_cast<long long>(nums[i]);

                    maxiSum = max(sum, maxiSum);
                }
            }

            subArrLen += k;
        }

        return maxiSum;
    }
};


// T.C. = O((n/k) * n) = O(n^2/k) = [Best Case = O(n) when k = n, Worst Case = O(n^2) when k = 1] 
// S.C. = O(1) 