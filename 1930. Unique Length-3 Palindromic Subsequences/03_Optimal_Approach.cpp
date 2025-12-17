// LeetCode (1930. Unique Length-3 Palindromic Subsequences): 
// https://leetcode.com/problems/unique-length-3-palindromic-subsequences 


// TAGS: [RATING: 1533], [MEDIUM], [OPTIMAL], [STRING], [SUBSEQUENCE], [PALINDROME], [PREFIX SUM], [HASH SET], [HASH VECTOR], [LAST OCCURRENCE PRECOMPUTATION], [INTUITION INVERSION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    // range = [left, right] -> both inclusive  
    int countUniqueCharsInRange(
        int left,
        int right,
        vector<vector<int>> &uniqueCharsCount
    ) {
        vector<int> uniqueCharsCountRight = uniqueCharsCount[right];
        vector<int> uniqueCharsCountLeft = uniqueCharsCount[left - 1];

        int uniqueCharsInRange = 0;

        for (int i=0; i < 26; i++) {
            uniqueCharsCountRight[i] -= uniqueCharsCountLeft[i];
            if (uniqueCharsCountRight[i] > 0) {
                uniqueCharsInRange++;
            }
        }

        return uniqueCharsInRange;
    }

    int countPalindromicSubsequence(string s) {
        
        int n = s.length();

        vector<int> charFreqCount(26, 0);
        vector<vector<int>> uniqueCharsCount(n);

        for (int i=0; i < n; i++) {
            char ch = s[i];
            charFreqCount[ch - 'a']++;
            uniqueCharsCount[i] = charFreqCount;
        }

        vector<int> charLastOcc(26, -1);
        for (int i=n-1; i >= 0; i--) {
            char ch = s[i];
            if (charLastOcc[ch - 'a'] == -1) {
                charLastOcc[ch - 'a'] = i;
            }
        }

        unordered_set<char> palindromeStart;
        int ans = 0;

        for (int i=0; i < n-2; i++) {
            char ch = s[i];
            if (!palindromeStart.count(ch)) {

                palindromeStart.insert(ch);

                int j = charLastOcc[ch - 'a'];

                if (j <= i+1) continue;

                int left = i+1;
                int right = j-1;
                
                int uniqueCharsInRange = countUniqueCharsInRange(
                    left, 
                    right, 
                    uniqueCharsCount
                );

                int validPalindromicSubseq = uniqueCharsInRange;
                ans += validPalindromicSubseq;
            }
        }

        return ans;
    }
};


// T.C. = O(n*26) + O(n) + O(n*26) = O(n) 
// S.C. = O(n*26) + O(26) + O(26) = O(n) 