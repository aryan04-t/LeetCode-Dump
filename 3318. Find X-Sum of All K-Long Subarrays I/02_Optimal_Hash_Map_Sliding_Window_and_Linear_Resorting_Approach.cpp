// LeetCode (3318. Find X-Sum of All K-Long Subarrays I): 
// https://leetcode.com/problems/find-x-sum-of-all-k-long-subarrays-i 


// TAGS: [RATING: 1457], [EASY], [OPTIMAL], [STL], [ARRAY], [HASH MAP], [COUNTING], [SUM], [SLIDING WINDOW], [SORTING], [PAIR SORTING], [LINEAR RESORTING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int calculateXSum (const vector<pair<int, int>> &freqValVec, int x) {

        int m = freqValVec.size();

        int sum = 0;
        for (int i=0; i < m && i < x; i++) {
            int freq = freqValVec[i].first;
            int val = freqValVec[i].second;
            sum += (freq * val);
        }

        return sum;
    }

    vector<pair<int, int>> buildFreqValVec (const unordered_map<int, int> &freqCount) {

        vector<pair<int, int>> freqValVec;

        for (const pair<int, int> &p : freqCount) {
            int val = p.first;
            int freq = p.second;

            if (freq != 0) {
                freqValVec.push_back({ freq, val });
            }
        }

        return freqValVec;
    }

    void rebuildSortedFreqValVec(
        vector<pair<int, int>> &freqValVec, 
        int addEle,
        int removeEle
    ) {
        int m = freqValVec.size();

        // Increasing freq count and making arr sorted 
        int addEleIdx = -1;

        for (int i=0; i < m; i++) {
            pair<int, int> &p = freqValVec[i];
            int val = p.second;
            if (addEle == val) {
                p.first++;
                addEleIdx = i;
            }
        }

        if (addEleIdx == -1) {
            addEleIdx = m;
            freqValVec.push_back({ 1, addEle });
            m++;
        }

        while (
            addEleIdx >= 1 && 
            ((freqValVec[addEleIdx].first > freqValVec[addEleIdx - 1].first) || 
            (freqValVec[addEleIdx].first == freqValVec[addEleIdx - 1].first && 
            freqValVec[addEleIdx].second > freqValVec[addEleIdx - 1].second))
        ) {
            swap(freqValVec[addEleIdx], freqValVec[addEleIdx - 1]);
            addEleIdx--;
        }

        // Deccreasing freq count and making arr sorted 
        int removeEleIdx = -1;

        for (int i=0; i < m; i++) {
            pair<int, int> &p = freqValVec[i];
            int val = p.second;
            if (removeEle == val) {
                p.first--;
                removeEleIdx = i;
            }
        }

        while (
            removeEleIdx <= m-2 &&
            ((freqValVec[removeEleIdx].first < freqValVec[removeEleIdx + 1].first) ||
            (freqValVec[removeEleIdx].first == freqValVec[removeEleIdx + 1].first && 
            freqValVec[removeEleIdx].second < freqValVec[removeEleIdx + 1].second))
        ) {
            swap(freqValVec[removeEleIdx], freqValVec[removeEleIdx + 1]);
            removeEleIdx++;
        }

        if (freqValVec[removeEleIdx].first == 0) {
            freqValVec.pop_back();
        }
    }

    vector<int> findXSum(vector<int>& nums, int k, int x) {
        
        int n = nums.size();

        unordered_map<int, int> freqCount;
        vector<pair<int, int>> freqValVec;
        
        vector<int> ans;

        for (int i=0; i < n; i++) {
            
            int addEle = nums[i];
            freqCount[addEle]++;

            int removeEle = -1;
            if (i >= k) {
                removeEle = nums[i - k];
                freqCount[removeEle]--;
            }

            if (i == k-1) {
                freqValVec = buildFreqValVec(freqCount);
                sort(freqValVec.begin(), freqValVec.end(), greater<pair<int, int>>());
            }
            else if (i >= k) {
                rebuildSortedFreqValVec(freqValVec, addEle, removeEle);
            }
            
            if (i >= k-1) {
                int sum = calculateXSum(freqValVec, x);
                ans.push_back(sum);
            }
        }

        return ans;
    }
};


// T.C = O(m) + O(m*log(m)) + O((n-k+1)*(4*m + min(x, m))) = O(n*m) = O(n^2) 

// S.C. = O(m) + O(m) + O(log(m) to the base 2) + O(n-k+1) = O(n) 

// Here, m = the total number of unique elements in the window of size k, and in worst case m == k == n, and x == n 