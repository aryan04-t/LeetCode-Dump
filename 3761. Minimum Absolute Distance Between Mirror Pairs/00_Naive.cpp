// LeetCode (3761. Minimum Absolute Distance Between Mirror Pairs): 
// https://leetcode.com/problems/minimum-absolute-distance-between-mirror-pairs 


// TAGS: [RATING: 1668], [MEDIUM], [NAIVE], [TLE ERROR], [REVERSING], [DECIMAL STRING], [DECIMAL NUMBER] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {
        
        int n = nums.size();
        int mini = INT_MAX;

        for (int i=0; i < n-1; i++) {
            
            string revStr = to_string(nums[i]);
            reverse(revStr.begin(), revStr.end());
            int revNum = stoi(revStr);

            for (int j=i+1; j < n; j++) {
                if (revNum == nums[j]) {
                    int absDist = abs(i - j);
                    mini = min(mini, absDist);
                }
            }
        }

        if (mini == INT_MAX) mini = -1;

        return mini;
    }
};


// T.C. = O(n*((log(max_num) to the base 10) + n)) = O(n^2) 
// S.C. = O(log(max_num) to the base 10) 

// n = num.size(), max_num = the maximum value in the vector nums 