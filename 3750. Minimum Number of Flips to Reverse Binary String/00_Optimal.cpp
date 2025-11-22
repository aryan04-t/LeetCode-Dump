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

        string binary = reverseBinary;
        reverse(binary.begin(), binary.end());

        int diff = 0;
        int m = binary.length();
        for (int i=0; i < m; i++) {
            if (reverseBinary[i] != binary[i]) diff++;
        }
        
        return diff;
    }
};


// T.C. = O(log(n) to the base 2) + O(m/2) + O(m) = O(m) 
// S.C. = O(m) 

// m = log(n) to the base 2 