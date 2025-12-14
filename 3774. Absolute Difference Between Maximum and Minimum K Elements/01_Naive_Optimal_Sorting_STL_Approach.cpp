// LeetCode (3774. Absolute Difference Between Maximum and Minimum K Elements) 
// https://leetcode.com/problems/absolute-difference-between-maximum-and-minimum-k-elements 


// TAGS: [RATING: N/A], [EASY], [NAIVE OPTIMAL], [STL], [ARRAY], [SORTING], [SUM] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        
        int kTemp = k;
        int smallSum = accumulate(
            nums.begin(),
            nums.end(),
            0,
            [&kTemp](int acc, int num) {
                if (kTemp > 0) {
                    acc += num;
                    kTemp--;
                }
                return acc;
            }
        );

        kTemp = k;
        int bigSum = accumulate(
            nums.rbegin(),
            nums.rend(),
            0,
            [&kTemp](int acc, int num) {
                 if (kTemp > 0) {
                    acc += num;
                    kTemp--;
                }
                return acc;
            }
        );

        return abs(bigSum - smallSum);
    }
};


// T.C. = O(n*log(n)) + O(n) + O(n) = O(n*log(n)) 
// S.C. = O(log(n)) 