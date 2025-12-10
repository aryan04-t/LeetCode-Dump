// LeetCode (3760. Maximum Substrings With Distinct Start): 
// https://leetcode.com/problems/maximum-substrings-with-distinct-start 


// TAGS: [RATING: 1364], [MEDIUM], [OPTIMAL], [STRING], [HASH VECTOR] 


#include<bits/stdc++.h>
using namespace std; 


class Solution {
public:
    int maxDistinct(string s) {
        
        vector<bool> charSeen(26, false);
        int distCharStartSubstrs = 0;

        for (int ch : s) {
            if (!charSeen[ch - 'a']) {
                distCharStartSubstrs++;
                charSeen[ch - 'a'] = true;
            }
        }

        return distCharStartSubstrs;
    }
};


// T.C. = O(n) 
// S.C. = O(26) = O(1) 

// n = s.length() 