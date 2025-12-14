// LeetCode (3774. Absolute Difference Between Maximum and Minimum K Elements) 
// https://leetcode.com/problems/absolute-difference-between-maximum-and-minimum-k-elements 


// TAGS: [RATING: N/A], [EASY], [MOST OPTIMAL], [ARRAY], [SUM], [HEAP]


#include<bits/stdc++.h>
using namespace std;


using IntMaxHeap = priority_queue<int>;
using IntMinHeap = priority_queue<int, vector<int>, greater<int>>;


class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        
        int n = nums.size();

        IntMaxHeap maxHeap;
        IntMinHeap minHeap;

        for (int i=0; i < n; i++) {
            int val = nums[i];
            
            if (maxHeap.size() != k) maxHeap.push(val);
            else if (val < maxHeap.top()) {
                maxHeap.pop();
                maxHeap.push(val);
            }

            if (minHeap.size() != k) minHeap.push(val);
            else if (val > minHeap.top()) {
                minHeap.pop();
                minHeap.push(val);
            }
        }

        int smallSum = 0;
        while (!maxHeap.empty()) {
            int val = maxHeap.top();
            maxHeap.pop();
            smallSum += val;
        }

        int bigSum = 0;
        while (!minHeap.empty()) {
            int val = minHeap.top();
            minHeap.pop();
            bigSum += val;
        }

        return abs(bigSum - smallSum);
    }
};


// T.C. = O(n*log(k)) + O(log(k)) + O(log(k)) = O(n*log(n)) 
// [Best Case: O(n), Worst Case: O(n*log(n))] 

// S.C. = O(k) = O(n) 
// [Best Case: O(1), Worst Case: O(n)] 

// In worst case (k == n) 