// LeetCode (3784. Minimum Deletion Cost to Make All Characters Equal): 
// https://leetcode.com/problems/minimum-deletion-cost-to-make-all-characters-equal 


// TAGS: [RATING: 1387], [MEDIUM], [OPTIMAL], [STRING], [ARRAY], [HASH VECTOR], [MINIMIZING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        
        int n = s.length();

        vector<long long> costToKeepChar(26, 0);
        long long totalCost = 0;

        for (int i = 0; i < n; i++) {
            char currChar = s[i];
            int charIdx = currChar - 'a';
            costToKeepChar[charIdx] += cost[i];
            totalCost += cost[i];
        }

        long long minDeletionCost = LLONG_MAX;

        for (int charIdx = 0; charIdx < 26; charIdx++) {
            long long costToKeep = costToKeepChar[charIdx];
            long long costToDelete = totalCost - costToKeep;
            minDeletionCost = min(minDeletionCost, costToDelete);
        }

        return minDeletionCost;
    }
};


// T.C. = O(n) + O(26) = O(n) 
// S.C. = O(26) = O(1) 