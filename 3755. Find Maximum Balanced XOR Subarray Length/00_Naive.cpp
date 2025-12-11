// LeetCode (3755. Find Maximum Balanced XOR Subarray Length): 
// https://leetcode.com/problems/find-maximum-balanced-xor-subarray-length 


// TAGS: [RATING: 1663], [MEDIUM], [NAIVE], [TLE ERROR], [ARRAY], [SUBARRAY], [BIT MANIPULATION], [MAXIMIZING LENGTH] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxBalancedSubarray(vector<int>& nums) {
        
        int n = nums.size();
        int maxi = INT_MIN;
        
        for (int i=0; i < n; i++) {
            int xored = 0;
            int odd = 0, even = 0;

            for (int j=i; j < n; j++) {
                int val = nums[j];
                xored ^= val;
                
                bool isOdd = val & 1;
                if (isOdd) odd++;
                else even++;

                if ((odd == even) && xored == 0) {
                    int len = j - i + 1;
                    maxi = max(maxi, len);
                }
            }
        }

        if (maxi == INT_MIN) maxi = 0;

        return maxi;
    }
};


// T.C. = O((n*(n+1))/2) = O(n^2) 
// S.C. = O(1) 