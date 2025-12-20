// LeetCode (3746. Minimum String Length After Balanced Removals): 
// https://leetcode.com/problems/minimum-string-length-after-balanced-removals/ 


// TAGS: [RATING: 1326], [MEDIUM], [NAIVE], [TLE ERROR], [STRING], [SUBSTRING], [RECURSION], [SIMULATION], [MINIMIZING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string formNewStrRemovingSubstr (
        const string &s,
        int substrStart, 
        int substrEnd
    ) {
        int n = s.length();
        string newStr = "";
        
        for (int k=0; k < n; k++) {
            if (k < substrStart || k > substrEnd) newStr += s[k];
        }

        return newStr;
    }

    int findMinLength (const string &s) {

        int n = s.length();
        if (n == 0) return 0;

        int minLen = INT_MAX;

        for (int i=0; i < n; i++) {
            
            int aCount = 0;
            int bCount = 0;
            
            for (int j=i; j < n; j++) {

                if (s[j] == 'a') aCount++;
                else bCount++;
                
                if (aCount == bCount) {
                    string newStr = formNewStrRemovingSubstr(s, i, j);
                    int tempMinLen = findMinLength(newStr);
                    minLen = min(minLen, tempMinLen);
                }
            }
        }

        minLen = (minLen == INT_MAX ? n : minLen);
        
        return minLen;
    }

    int minLengthAfterRemovals(string s) {

        int minLen = findMinLength(s);

        return minLen;
    }
};


/*
# T.C. 
    = O(branching_factor^depth × work_per_node)
    = O((n²)^n × n³)
    = O(n^(2n) × n³)
    = O(n^(2n+3))
*/

/*
# S.C.  
    = Recursion Depth × Space per Level
    = O(n) × O(n)
    = O(n²)
*/

// Here, n = s.length() 