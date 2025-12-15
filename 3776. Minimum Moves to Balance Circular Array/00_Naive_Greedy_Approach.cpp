// LeetCode (3776. Minimum Moves to Balance Circular Array): 
// https://leetcode.com/problems/minimum-moves-to-balance-circular-array 


// TAGS: [RATING: N/A], [MEDIUM], [NAIVE], [TLE ERROR], [STL], [ARRAY], [CIRCULAR ARRAY], [MODULAR ARITHMETIC], [GREEDY], [SIMULATION], [MINIMIZING]  


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long minMoves(vector<int>& balance) {

        int n = balance.size(); 
        
        long long negSum = 0;
        long long posSum = 0;
        int negBalanceIdx = -1;

        for (int i=0; i < n; i++) {
            int val = balance[i];
            if (val < 0) {
                negBalanceIdx = i;
                negSum += val;
            }
            else posSum += val;
        }

        if (negSum == 0) return 0;
        if ((posSum == 0) || (llabs(negSum) > posSum)) return -1;

        long long minMoves = 0;
        
        while (balance[negBalanceIdx] < 0) {
            
            int left = ((negBalanceIdx - 1) + n) % n;
            int right = (negBalanceIdx + 1) % n;
            long long leftDist = 1, rightDist = 1;

            while (leftDist <= n-1 && balance[left] == 0) {
                left--;
                left = (left + n) % n;
                leftDist++;
            }
            while (rightDist <= n-1 && balance[right] == 0) {
                right++;
                right %= n;
                rightDist++;
            }

            if (leftDist < rightDist) {
                long long balanceShift = min(balance[left], abs(balance[negBalanceIdx]));
                minMoves += (leftDist * balanceShift);
                balance[negBalanceIdx] += balanceShift;
                balance[left] -= balanceShift;
            }
            else {
                long long balanceShift = min(balance[right], abs(balance[negBalanceIdx]));
                minMoves += (rightDist * balanceShift);
                balance[negBalanceIdx] += balanceShift;
                balance[right] -= balanceShift;
            }
        }

        return minMoves;
    }
};


// T.C. = O(n^2) 
// S.C. = O(1) 