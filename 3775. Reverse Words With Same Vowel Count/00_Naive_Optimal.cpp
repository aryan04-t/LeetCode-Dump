// LeetCode (3775. Reverse Words With Same Vowel Count): 
// https://leetcode.com/problems/reverse-words-with-same-vowel-count 


// TAGS: [RATING: N/A], [MEDIUM], [NAIVE OPTIMAL], [STRING], [SUBSTRING], [HASH SET], [REVERSING], [COUNTING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string reverseWords(string s) {

        string ans = "";
        unordered_set<char> vowel = {'a', 'e', 'i', 'o', 'u'}; 

        int n = s.length();
        int wordCount = 0;
        int firstWordVowelCount = 0;

        int i = 0; 
        while (i < n) {
            wordCount++;
            int wordsVowelCount = 0;
            
            int j = i;
            while (j < n && s[j] != ' ') {
                if (vowel.find(s[j]) != vowel.end()) {
                    wordsVowelCount++;
                }
                j++;
            }
            
            int wordLen = j - i;
            string word = s.substr(i, wordLen);

            if (wordCount == 1) {
                firstWordVowelCount = wordsVowelCount;
            }
            else if (firstWordVowelCount == wordsVowelCount) {
                reverse(word.begin(), word.end());
            }

            ans += word;
            ans += ' ';
            
            i = j + 1;
        }

        ans.pop_back();

        return ans;
    }
};


// T.C. = O(n) 
// S.C. = O(n) -> [This is total space complexity, not auxiliary space complexity of algo] 