// LeetCode (3766. Minimum Operations to Make Binary Palindrome): 
// https://leetcode.com/problems/minimum-operations-to-make-binary-palindrome 


// TAGS: [RATING: N/A], [MEDIUM], [OPTIMAL], [STL] [PALINDROME], [BINARY NUMBER], [BINARY SEARCH], [STATIC VARIABLE], [PRE-COMPUTATION]


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    inline static vector<int> palindromeNums;
    
    bool isBinaryPalindrome (int num) {

        string binaryNum = "";
        
        while (num) {
            int digit = num % 2;
            binaryNum = static_cast<char>(digit + '0') + binaryNum;
            num /= 2;
        }

        int m = binaryNum.length();
        int i = 0;
        int j = m - 1;

        while (i < j) {
            if (binaryNum[i] != binaryNum[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }

    void buildPalindromeNums () {

        int num = 1;
        while (num < 5001) {
            if (isBinaryPalindrome(num)) {
                palindromeNums.push_back(num);
            }
            num++;
        }

        bool found = false;
        while (!found) {
            if (isBinaryPalindrome(num)) {
                palindromeNums.push_back(num);
                found = true;
            }
            num++;
        }
    }
    
    vector<int> minOperations(vector<int>& nums) {
        
        vector<int> ans;
    
        if (palindromeNums.size() == 0) {
            buildPalindromeNums();
        }

        for (int num : nums) {
            vector<int>::iterator it = lower_bound(
                palindromeNums.begin(),
                palindromeNums.end(), 
                num
            );
            
            if (it != palindromeNums.end()) {
                if (*it == num) ans.push_back(0);
                else {
                    int bigNum = *it;
                    it--;
                    int smallNum = *it;

                    int opsBigNum = bigNum - num;
                    int opsSmallNum = num - smallNum;

                    int minOps = (opsBigNum < opsSmallNum) 
                        ? opsBigNum 
                        : opsSmallNum;

                    ans.push_back(minOps);
                }
            }
        }

        return ans;
    }
};


// T.C. = O(5049 * (log(5049) to the base 2)) + O(n*(log(k) to the base 2)) = O(5049 * 13) + O(n*log(k)) = O(n*log(k)) 
// S.C. = O(k) 

// n = the length of nums array, k = the total number of palindromic binary numbers in the range [1. 5049] 