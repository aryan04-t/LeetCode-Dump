// LeetCode (3381. Maximum Subarray Sum With Length Divisible by K): 
// https://leetcode.com/problems/maximum-subarray-sum-with-length-divisible-by-k 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();
        long long maxiSum = LLONG_MIN;

        vector<long long> remainderMinVal(n, LLONG_MAX);
        remainderMinVal[0] = 0;

        long long runningSum = 0;

        for (int i=0; i < n; i++) {
            runningSum += static_cast<long long>(nums[i]);
            int subArrLen = i + 1;
            int remainder = subArrLen % k;
            
            if (i >= k-1) {
                long long currMaxiSum = runningSum - remainderMinVal[remainder];
                maxiSum = max(currMaxiSum, maxiSum);
            }

            remainderMinVal[remainder] = min(runningSum, remainderMinVal[remainder]);
        }

        return maxiSum;
    }
};


// T.C. = O(n) 
// S.C. = O(n) 