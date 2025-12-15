// LeetCode (3776. Minimum Moves to Balance Circular Array): 
// https://leetcode.com/problems/minimum-moves-to-balance-circular-array 


// TAGS: [RATING: N/A], [MEDIUM], [MOST OPTIMAL], [STL], [ARRAY], [CIRCULAR ARRAY], [MODULAR ARITHMETIC], [GREEDY], [SIMULATION], [MINIMIZING]  


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long minMoves(vector<int>& balance) {

        int n = balance.size(); 
        
        long long negSum = 0, posSum = 0;
        int negIdx = -1;

        for (int i=0; i < n; i++) {
            int val = balance[i];
            if (val < 0) {
                negIdx = i;
                negSum += val;
            }
            else posSum += val;
        }

        if (negSum == 0) return 0;
        if ((posSum == 0) || (llabs(negSum) > posSum)) return -1;

        long long minMoves = 0;

        int left = ((negIdx - 1) + n) % n;
        int right = (negIdx + 1) % n;
        
        while (balance[negIdx] < 0) {
            
            while (balance[left] == 0) {
                left = (left - 1 + n) % n;
            }
            while (balance[right] == 0) {
                right = (right + 1) % n;
            }

            long long leftDist = (negIdx - left + n) % n;
            long long rightDist = (right - negIdx + n) % n;

            if (leftDist < rightDist) {
                long long shift = min(balance[left], abs(balance[negIdx]));
                minMoves += (leftDist * shift);
                balance[negIdx] += shift;
                balance[left] -= shift;
            }
            else {
                long long shift = min(balance[right], abs(balance[negIdx]));
                minMoves += (rightDist * shift);
                balance[negIdx] += shift;
                balance[right] -= shift;
            }
        }

        return minMoves;
    }
};


// T.C. = O(n) + O(n) = O(2n) = O(n)  
// S.C. = O(1) 