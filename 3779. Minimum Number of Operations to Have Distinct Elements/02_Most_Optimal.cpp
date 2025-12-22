// LeetCode (3779. Minimum Number of Operations to Have Distinct Elements): 
// https://leetcode.com/problems/minimum-number-of-operations-to-have-distinct-elements 


// TAGS: [RATING: N/A], [MEDIUM], [MOST OPTIMAL], [ARRAY], [HASH SET], [COUNTING], [INTUITION INVERSION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int n = nums.size();
        unordered_set<int> uniques;

        int i=n-1;
        while (i >= 0) {
            int val = nums[i];
            if (uniques.count(val)) break;
            uniques.insert(val);
            i--;
        }

        double leftArrLen = i + 1;
        double ops = ceil(leftArrLen/3.0);

        int finalOps = static_cast<int>(ops);

        return finalOps;
    }
};


// T.C. = O(n) 
// S.C. = O(m) 

// m = total number of unique elements in nums 