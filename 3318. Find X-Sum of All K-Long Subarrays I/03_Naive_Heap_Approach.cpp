// LeetCode (3318. Find X-Sum of All K-Long Subarrays I): 
// https://leetcode.com/problems/find-x-sum-of-all-k-long-subarrays-i 


// TAGS: [RATING: 1457], [EASY], [NAIVE], [STL], [ARRAY], [HASH MAP], [COUNTING], [SUM], [HEAP] 


#include<bits/stdc++.h>
using namespace std;


using PairMinHeap = priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>;

class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        
        int n = nums.size();
        int windows = n - k + 1;

        vector<int> ans;

        for (int i=0; i < windows; i++) {
            unordered_map<int, int> freqCountMap;
            
            for (int j=i; j < i+k; j++) {
                int val = nums[j];
                freqCountMap[val]++;
            }

            PairMinHeap minHeap;

            for (const pair<int, int> &p : freqCountMap) {
                int val = p.first;
                int freq = p.second;

                if (minHeap.size() != x) {
                    minHeap.push({ freq, val });
                }
                else if (
                    (freq > minHeap.top().first) ||
                    (freq == minHeap.top().first && val > minHeap.top().second)
                ) {
                    minHeap.pop();
                    minHeap.push({ freq, val });
                }
            }

            int sum = 0; 

            while (!minHeap.empty()) {
                int freq = minHeap.top().first;
                int val = minHeap.top().second;
                sum += (freq * val);
                minHeap.pop();
            }

            ans.push_back(sum);
        }

        return ans;
    }
};


// T.C. = O((n-k+1)*(k + m*log(x)) + x*log(x)) = O((n^2)*log(n)) 
// S.C. = O(n-k+1) + O(m) + O(x) = O(n) 

// Here, m = the total number of unique elements in the window of size k, and in worst case m == k == n, and x == n 