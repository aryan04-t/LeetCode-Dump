// LeetCode (3512. Minimum Operations to Make Array Sum Divisible by K): 
// https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k 

// Tags: [EASY], [ARRAY], [MATH] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        return sum % k;
    }
};


// T.C. = O(n) 
// S.C. = O(1) 

// n = nums.size() 