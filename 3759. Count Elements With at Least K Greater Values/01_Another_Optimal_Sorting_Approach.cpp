// LeetCode (3759. Count Elements With at Least K Greater Values):
// https://leetcode.com/problems/count-elements-with-at-least-k-greater-values


// TAGS: [RATING: 1372], [MEDIUM], [OPTIMAL], [ARRAY], [SORTING] 


#include<bits./stdc++.h>
using namespace std;


class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        
        int n = nums.size();
        if (k == 0) return n;

        sort(nums.begin(), nums.end());

        // k-th largest element is at index n-k
        int threshold = nums[n - k];

        int ans = 0;
        for (int x : nums) {
            if (x < threshold) {
                ans++;
            }
        }

        return ans;
    }
};


// T.C. = O(n*log(n)) + O(n) = O(n*log(n)) 
// S.C. = O(log(n)) -> contributed by intro-sort  