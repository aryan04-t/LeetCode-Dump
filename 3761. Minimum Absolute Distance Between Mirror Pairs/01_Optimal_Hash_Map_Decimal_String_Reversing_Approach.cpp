// LeetCode (3761. Minimum Absolute Distance Between Mirror Pairs): 
// https://leetcode.com/problems/minimum-absolute-distance-between-mirror-pairs 


// TAGS: [RATING: 1668], [MEDIUM], [OPTIMAL], [STL], [HASH MAP], [REVERSING], [DECIMAL STRING], [DECIMAL NUMBER] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int reverseNumber (int num) {
        
        string s = to_string(num);
        reverse(s.begin(), s.end());

        int revNum = stoi(s);
        
        return revNum;
    }

    int minMirrorPairDistance(vector<int>& nums) {

        int n = nums.size();
        int mini = INT_MAX;
        unordered_map<int, int> numIndexMap;
        
        for (int i=n-1; i >= 0; i--) {

            int num = nums[i];
            int revNum = reverseNumber(num);
            
            if (numIndexMap.count(revNum)) {
                int j = numIndexMap[revNum];
                int absDist = abs(i - j);
                mini = min(mini, absDist);
            }
        
            numIndexMap[num] = i;
        }

        if (mini == INT_MAX) mini = -1;
        
        return mini;
    }
};


// T.C. = O(n*(log(max_num) to the base 10)) 
// S.C. = O(n) 

// n = nums.size(), max_num = the maximum value in the vector nums