// LeetCode (3782. Last Remaining Integer After Alternating Deletion Operations): 
// https://leetcode.com/problems/last-remaining-integer-after-alternating-deletion-operations 


// TAGS: [RATING: N/A], [HARD], [OPTIMAL], [SIMULATION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long lastInteger(long long n) {
        
        long long numbers = n;
        long long gap = 1;
        bool left = true;
        long long ans = 1;

        while (numbers > 1) {
            bool traversingFromRight = !left;
            bool currRangeHasEvenNumbers = (numbers % 2 == 0);
            
            if (traversingFromRight && currRangeHasEvenNumbers) {
                ans += gap;
            }

            numbers = (numbers + 1) / 2;
            gap *= 2;
            left = !left;
        }

        return ans;
    }
};


// T.C. = O(log(n) to the base 2) 
// S.C. = O(1) 