// LeetCode (3760. Maximum Substrings With Distinct Start): 
// https://leetcode.com/problems/maximum-substrings-with-distinct-start 


// TAGS: [RATING: 1364], [MEDIUM], [NAIVE OPTIMAL], [STRING], [HASH VECTOR], [SIMULATION] 


#include<bits/stdc++.h>
using namespace std; 


class Solution {
public:
    void collectSubstrs (
        const string &s,
        const vector<int> &charSeen,
        char currSubstrStartChar,
        int currIndex,
        vector<string> & substrs
    ) {
        int currSubstrStartIdx = charSeen[currSubstrStartChar - 'a'];
        int len = currIndex - currSubstrStartIdx;

        string currSubstr = s.substr(currSubstrStartIdx, len);
        substrs.push_back(currSubstr);
    }

    int maxDistinct(string s) {
        
        int n = s.length();

        vector<int> charSeen(26, -1);
        vector<string> substrs;

        char currSubstrStartChar = '-';

        for (int i=0; i < n; i++) {
            char ch = s[i];

            if (charSeen[ch - 'a'] == -1) {
                if (currSubstrStartChar != '-') {
                    collectSubstrs(
                        s, 
                        charSeen,
                        currSubstrStartChar,
                        i, 
                        substrs
                    );
                }

                currSubstrStartChar = ch;
                charSeen[ch - 'a'] = i;
            }
        }

        collectSubstrs(s, charSeen, currSubstrStartChar, n, substrs);

        int ans = static_cast<int>(substrs.size());

        return ans;
    }
};


// T.C. = O(n) 
// S.C. = O(n) + O(26) = O(n) 

// n = s.length() 