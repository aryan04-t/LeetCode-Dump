// LeetCode (1590. Make Sum Divisible by P):
// https://leetcode.com/problems/make-sum-divisible-by-p 


// TAGS: [RATING: 2038], [MEDIUM], [NAIVE OPTIMAL], [TLE ERROR], [SUBARRAY], [PREFIX SUM], [MODULAR ARITHMETIC], [DIVISIBILITY], [SLIDING WINDOW] 


// Gives TLE Error 


#include<bits/stdc++.h>
using namespace std;


using ll = long long;


class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        
        int n = nums.size();

        ll totalSum = 0;
        for (int val : nums) totalSum += val;
        
        int removeRemainder = static_cast<ll>(totalSum % p);
        if (removeRemainder == 0) return 0;

        int subArrLen = 1;
        
        while (subArrLen < n) {
            long long runningSum = 0;
            
            for (int i=0; i < n; i++) {
                int val = nums[i];
                
                if (i < subArrLen-1) runningSum += val;
                else {
                    if (i >= subArrLen) {
                        runningSum -= nums[i - subArrLen];
                    }
                    
                    runningSum += val;
                    int remainder = static_cast<int>(runningSum % p);

                    if (remainder == removeRemainder) {
                        return subArrLen;
                    }
                }
            }

            subArrLen++;
        }

        return -1;
    }
};


// T.C. = O(n) + O(n^2) = O(n^2) -> [Best Case = O(n), and Worst Case = O(n^2)] 
// S.C. = O(1) 