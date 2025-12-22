// LeetCode (3779. Minimum Number of Operations to Have Distinct Elements): 
// https://leetcode.com/problems/minimum-number-of-operations-to-have-distinct-elements 


// TAGS: [RATING: N/A], [MEDIUM], [NAIVE], [TLE ERROR], [ARRAY], [SIMULATION], [HASH SET], [COUNTING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isAllUnique (vector<int>& nums, int i, int n) {

        unordered_set<int> uniques;
        bool isAllUnique = true;

        for (int j=i; j < n; j++) {
            int val = nums[j];
            if (uniques.count(val)) {
                isAllUnique = false;
                break;
            }
            uniques.insert(val);
        }

        return isAllUnique;
    }

    int minOperations(vector<int>& nums) {
        
        int n = nums.size();

        int i = 0;
        int ops = 0;

        while (!isAllUnique(nums, i, n)) {
            ops++;
            i += 3;
        }

        return ops;
    }
};


// T.C. = O((n/3)*n) = O(n^2)  
// S.C. = O(n) 