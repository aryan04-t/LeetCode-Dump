// LeetCode (3228. Maximum Number of Operations to Move Ones to the End):
// https://leetcode.com/problems/maximum-number-of-operations-to-move-ones-to-the-end


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxOperations(string s) {
        
        int n = s.length();
        int ones = 0;
        int maxOps = 0;

        for (int i=0; i < n; i++) {
            char ch = s[i];
            if (ch == '1') ones++;
            else if (ch == '0' && (i > 0) && s[i-1] != '0') maxOps += ones;
        }

        return maxOps;
    }
};


// T.C. = O(n) 
// S.C. = O(1) 