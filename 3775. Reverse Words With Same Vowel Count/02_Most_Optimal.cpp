// LeetCode (3775. Reverse Words With Same Vowel Count): 
// https://leetcode.com/problems/reverse-words-with-same-vowel-count 


// TAGS: [RATING: N/A], [MEDIUM], [MOST OPTIMAL], [STL], [STRING], [C++ STRING STREAM], [HASH SET], [REVERSING], [COUNTING], [INTUITION INVERSION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string reverseWords(string s) {
        
        stringstream ss;
        ss << s;

        int n = s.length();
        string ans = "";
        ans.reserve(n);

        string word;
        int firstWordVowelsCount = -1;

        unordered_set<char> vowels = { 'a', 'e', 'i', 'o', 'u' };

        while (ss >> word) {
            int currWordVowelsCount = count_if(
                word.begin(),
                word.end(),
                [&vowels](char ch) {
                    return vowels.count(ch);
                }
            );

            if (firstWordVowelsCount == -1) {
                firstWordVowelsCount = currWordVowelsCount;
            }
            else if (firstWordVowelsCount == currWordVowelsCount) {
                reverse(word.begin(), word.end());
            }

            if (!ans.empty()) ans += ' ';
            ans += word;
        }

        return ans;
    }
};


// T.C. = O(n) 
// S.C. = O(n) -> [This is total space complexity, not auxiliary space complexity of algo] 