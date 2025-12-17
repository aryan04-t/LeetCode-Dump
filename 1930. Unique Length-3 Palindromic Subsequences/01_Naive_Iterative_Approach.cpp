// LeetCode (1930. Unique Length-3 Palindromic Subsequences): 
// https://leetcode.com/problems/unique-length-3-palindromic-subsequences 


// TAGS: [RATING: 1533], [MEDIUM], [NAIVE], [TLE ERROR], [STRING], [SUBSEQUENCE], [PALINDROME], [HASH SET], [INTUITION INVERSION], [CHARS TO STRING C++] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countPalindromicSubsequence(string s) {
        
        int n = s.length();
        unordered_set<string> uniquePalindromes;

        for (int i=0; i < n-2; i++) {
            for (int j=i+1; j < n-1; j++) {
                for (int k=j+1; k < n; k++) {
                    
                    bool isPalindrome = (s[i] == s[k]);
                    if (!isPalindrome) continue;

                    string subseq = { s[i], s[j], s[k] };
                    if (uniquePalindromes.count(subseq)) continue; 
                
                    uniquePalindromes.insert(subseq);
                }
            }
        }

        int ans = uniquePalindromes.size();

        return ans;
    }
};


// T.C. = O(n^3) 
// S.C. = O(26^2) = O(1) 