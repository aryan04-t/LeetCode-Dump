// LeetCode (3775. Reverse Words With Same Vowel Count): 
// https://leetcode.com/problems/reverse-words-with-same-vowel-count 


// TAGS: [RATING: N/A], [MEDIUM], [OPTIMAL], [STL], [STRING], [SUBSTRING], [HASH SET], [REVERSING], [COUNTING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string reverseWords(string s) {

        int n = s.length();
        unordered_set<char> vowel = {'a', 'e', 'i', 'o', 'u'}; 
        
        string ans = "";
        ans.reserve(n);

        int firstWordVowelCount = -1;

        int i = 0; 
        while (i < n) { 
            int wordsVowelCount = 0;
            
            int j = i;
            while (j < n && s[j] != ' ') {
                wordsVowelCount += vowel.count(s[j]);
                j++;
            }
            
            int wordLen = j - i;
            string word = s.substr(i, wordLen);

            if (firstWordVowelCount == -1) {
                firstWordVowelCount = wordsVowelCount;
            }
            else if (firstWordVowelCount == wordsVowelCount) {
                reverse(word.begin(), word.end());
            }

            if (!ans.empty()) ans += ' ';
            ans += word;
            
            i = j + 1;
        }

        return ans;
    }
};


// T.C. = O(n) 
// S.C. = O(n) -> [This is total space complexity, not auxiliary space complexity of algo] 