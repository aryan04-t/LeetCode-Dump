// LeetCode (3780. Maximum Sum of Three Numbers Divisible by Three): 
// https://leetcode.com/problems/maximum-sum-of-three-numbers-divisible-by-three 


// TAGS: [RATING: N/A], [MEDIUM], [NAIVE], [TLE ERROR], [ARRAY], [SIMULATION], [SUM], [MODULAR ARITHMETIC], [MAXIMIZING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maximumSum(vector<int>& nums) {
        
        int n = nums.size();
        int maxiSum = INT_MIN;

        for (int i=0; i < n-2; i++) {
            for (int j=i+1; j < n-1; j++) {
                for (int k=j+1; k < n; k++) {
                    int sum = nums[i] + nums[j] + nums[k];
                    if (sum % 3 == 0) {
                        maxiSum = max(maxiSum, sum);
                    }
                }
            }
        }

        return maxiSum == INT_MIN ? 0 : maxiSum;
    }
};


// T.C. = O(n^3) 
// S.C. = O(1) 