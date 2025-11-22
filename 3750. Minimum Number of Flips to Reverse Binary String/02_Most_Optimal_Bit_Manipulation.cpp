// LeetCode (3750. Minimum Number of Flips to Reverse Binary String): 
// https://leetcode.com/problems/minimum-number-of-flips-to-reverse-binary-string 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minimumFlips(int n) {
        
        int num = n;
        int bits = 0;
        while (num) {
            num = num >> 1;
            bits++;
        }

        int diff = 0;

        for (int i=0; i < bits/2; i++) {
            int num1 = n;
            num1 = num1 >> i;
        
            int bit1 = num1 & 1;

            int num2 = n;
            num2 = num2 >> (bits - 1 - i);

            int bit2 = num2 & 1;

            if (bit1 != bit2) diff += 2;
        }

        return diff;
    }
};


// T.C. = O(log(n) to the base 2) + O(log(n)/2) = O(log(n)) 
// S.C. = O(1) 