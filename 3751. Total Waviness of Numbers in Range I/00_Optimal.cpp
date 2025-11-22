// LeetCode (3751. Total Waviness of Numbers in Range I)
// https://leetcode.com/problems/total-waviness-of-numbers-in-range-i



#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int totalWaviness(int num1, int num2) {

        int totalWaviness = 0;

        for (int num = num1; num <= num2; num++) {
            string s = to_string(num);
            int k = s.length();
            if (k >= 3) {
                int peaks = 0;
                int valleys = 0;
                for (int i=1; i < k-1; i++) {
                    if (s[i] > s[i-1] && s[i] > s[i+1]) peaks++;
                    if (s[i] < s[i-1] && s[i] < s[i+1]) valleys++;
                }
                int waviness = peaks + valleys;
                totalWaviness += waviness;
            }
        }

        return totalWaviness;
    }
};


// T.C. = O(n*k) 
// S.C. = O(k)

// Here, n = num2 - num + 1, and k = (log(m) to the base 10) OR "number of digits in m", m = the average of values in the range [num1, num2]