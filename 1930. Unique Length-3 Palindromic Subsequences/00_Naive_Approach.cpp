// LeetCode (1930. Unique Length-3 Palindromic Subsequences): 
// https://leetcode.com/problems/unique-length-3-palindromic-subsequences 


// TAGS: [RATING: 1533], [MEDIUM], [NAIVE], [TLE ERROR], [STRING], [SUBSEQUENCE], [PALINDROME], [HASH SET] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void allSubseq (
        const string &s, 
        string &subseq, 
        int i, 
        int n, 
        unordered_set<string> &uniquePalindromes
    ) {
        if (i > n) return;
        else if (i == n) {
            if (subseq.length() != 3) return;
            
            bool isPalindrome = (subseq[0] == subseq[2]);
            if (!isPalindrome) return;
            if (uniquePalindromes.count(subseq)) return;
            
            uniquePalindromes.insert(subseq);
            return;
        }

        subseq.push_back(s[i]);
        allSubseq(s, subseq, i+1, n, uniquePalindromes);

        subseq.pop_back();
        allSubseq(s, subseq, i+1, n, uniquePalindromes);
    }

    int countPalindromicSubsequence(string s) {
        
        unordered_set<string> uniquePalindromes;
        int i = 0;
        int n = s.length();
        string subseq = "";

        allSubseq(s, subseq, i, n, uniquePalindromes);
    
        int ans = uniquePalindromes.size();
        
        return ans;
    }
};


// T.C. = O(2^n) 
// S.C. = O(2^n) + O(n) = O(2^n) 