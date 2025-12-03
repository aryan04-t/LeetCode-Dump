// LeetCode (974. Subarray Sums Divisible by K): 
// https://leetcode.com/problems/subarray-sums-divisible-by-k 


// TAGS: [RATING: 1675], [MEDIUM], [NAIVE], [TLE ERROR], [SUBARRAY], [SUM], [MODULAR ARITHMETIC] 


// Give TLE 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int n = nums.size();
        int totalSubArr = 0;

        for (int i=0; i < n; i++) {
            int sum = 0;
            for (int j=i; j < n; j++) {
                int val = nums[j];
                sum += val;
                if (sum % k == 0) totalSubArr++;
            }
        }

        return totalSubArr;
    }
};


// T.C. = O((n*(n+1))/2) 
// S.C. = O(1)