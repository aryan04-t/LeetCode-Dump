// LeetCode (3774. Absolute Difference Between Maximum and Minimum K Elements) 
// https://leetcode.com/problems/absolute-difference-between-maximum-and-minimum-k-elements 


// TAGS: [RATING: N/A], [EASY], [OPTIMAL], [STL], [ARRAY], [SORTING], [SUM] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        
        int smallSum = accumulate(nums.begin(), nums.begin() + k, 0);
        int bigSum = accumulate(nums.rbegin(), nums.rbegin() + k, 0);

        return abs(bigSum - smallSum);
    }
};


// T.C. = O(n*log(n)) + O(k) + O(k) = O(n*log(n)) 
// S.C. = O(log(n)) 