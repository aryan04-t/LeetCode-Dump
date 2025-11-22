// 3190. Find Minimum Operations to Make All Elements Divisible by Three
// https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        int minOperations = 0;
        int x = 3;

        for (int num : nums) {
            int remainder = num % x;
            if (remainder != 0) {
                int mid = x / 2;
                if (remainder <= mid) {
                    minOperations += remainder;
                }
                else minOperations += (x - remainder);
            }
        }

        return minOperations;
    }
};


// T.C. = O(n)
// S.C. = O(1)

// n = nums.size()