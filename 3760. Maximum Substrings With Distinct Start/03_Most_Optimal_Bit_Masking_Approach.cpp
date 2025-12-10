// LeetCode (3760. Maximum Substrings With Distinct Start): 
// https://leetcode.com/problems/maximum-substrings-with-distinct-start 


// TAGS: [RATING: 1364], [MEDIUM], [MOST OPTIMAL], [STRING], [BIT MASKING], [BIT MANIPULATION] 


#include<bits/stdc++.h>
using namespace std; 


class Solution {
public:
    int maxDistinct(string s) {
        
        int seen = 0;
        int ans = 0;

        for (char ch : s) {
            int shifts = ch - 'a';
            int bit = 1 << shifts;     // computing bit position for char
            
            if ((seen & bit) == 0) {   // checking if that bit is not set 
                seen |= bit;           // set the bit 
                ans++;                 // count the unique char  
                if (ans == 26) break;  // maximum achievable ans 
            } 
        }

        return ans;
    }
};


// T.C. = O(n) 
// S.C. = O(1) 

// n = s.length() 