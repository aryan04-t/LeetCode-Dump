// LeetCode (560. Subarray Sum Equals K): 
// https://leetcode.com/problems/subarray-sum-equals-k 


// TAGS: [RATING: N/A], [MEDIUM], [NAIVE], [ARRAY], [SUBARRAY], [SUM]


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();
        int totalSubArr = 0;

        for (int i=0; i < n; i++) {
            int sum = 0;
            for (int j=i; j < n; j++) {
                int val = nums[j];
                sum += val;
                if (sum == k) totalSubArr++;
            }
        }

        return totalSubArr;
    }
};


// T.C. = O((n*(n+1))/2) = O(n^2) 
// S.C. = O(1) 