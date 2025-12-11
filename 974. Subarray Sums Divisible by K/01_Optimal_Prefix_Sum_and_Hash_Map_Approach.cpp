// LeetCode (974. Subarray Sums Divisible by K): 
// https://leetcode.com/problems/subarray-sums-divisible-by-k 


// TAGS: [RATING: 1675], [MEDIUM], [OPTIMAL], [ARRAY], [SUBARRAY], [PREFIX SUM], [MODULAR ARITHMETIC], [NEGATIVE REMAINDER], [HASH MAP] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int n = nums.size();

        unordered_map<int, int> remainderCountMap;
        remainderCountMap[0]++;

        int totalSubArr = 0;
        int runningSum = 0;

        for (int i=0; i < n; i++) {
            int val = nums[i];
            
            runningSum += val;
            int remainder = runningSum % k;
            if (remainder < 0) remainder += k;

            totalSubArr += remainderCountMap[remainder];
            remainderCountMap[remainder]++;
        }

        return totalSubArr;
    }
};


// T.C. = O(n) 
// S.C. = O(k) 