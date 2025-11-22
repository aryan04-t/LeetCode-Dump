// LeetCode (3750. Minimum Number of Flips to Reverse Binary String): 
// https://leetcode.com/problems/minimum-number-of-flips-to-reverse-binary-string 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minimumFlips(int n) {

        string reverseBinary = "";
        
        while (n) {
            int bit = n % 2;
            if (bit) reverseBinary += "1";
            else reverseBinary += "0";
            n /= 2;
        }

        int diff = 0;
        int m = reverseBinary.length();
        for (int i=0; i < m/2; i++) {
            if (reverseBinary[i] != reverseBinary[m-1-i]) {
                diff += 2;
            }
        }
        
        return diff;
    }
};


// T.C. = O(log(n) to the base 2) + O(m/2) = O(m) 
// S.C. = O(m) 

// m = log(n) to the base 2 