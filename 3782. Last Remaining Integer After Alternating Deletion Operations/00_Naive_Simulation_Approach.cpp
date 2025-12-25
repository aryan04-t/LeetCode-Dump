// LeetCode (3782. Last Remaining Integer After Alternating Deletion Operations): 
// https://leetcode.com/problems/last-remaining-integer-after-alternating-deletion-operations 


// TAGS: [RATING: N/A], [HARD], [NAIVE], [MLE ERROR], [STL], [ARRAY], [SIMULATION], [GP BASED TC ANALYSIS] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long lastInteger(long long n) {
        
        vector<long long> nums;
        nums.reserve(n);

        for (long long num=1; num <= n; num++) {
            nums.push_back(num);
        }

        string dir = "left";
        long long tempN = n;
        
        while (nums.size() != 1) {
        
            long long m = static_cast<long long>(ceil(tempN/2.0));
        
            vector<long long> newNums(m, 0);

            if (dir == "left") {
                int j = 0;
                for (long long i=0; i < tempN; i += 2) {
                    newNums[j] = nums[i];
                    j++;
                }
                dir = "right";
            }
            else if (dir == "right") {
                int j = m-1;
                for (long long i=tempN-1; i >= 0; i -= 2) {
                    newNums[j] = nums[i];
                    j--;
                }
                dir = "left";
            }

            nums = move(newNums);
            tempN = m;
        }

        return nums[0];
    }
};


/*

# Time Complexity Analysis: 

    1. Initial loop: O(n) - building the initial vector

    2. While loop analysis:

        The loop runs log₂(n) times because we're halving the size each iteration
        In each iteration, the for loop processes the current size of the array:

        Iteration 1: n elements
        Iteration 2: n/2 elements
        Iteration 3: n/4 elements
        And so on...

        This forms a geometric series: n + n/2 + n/4 + n/8 + ...
        
        Using the infinite geometric series sum:
        - For a geometric series with first term 'a' and common ratio 'r' where |r| < 1, the total infinite sum is bounded by -> Sum = a/(1-r) 

        In your case:
            a = n
            r = 1/2
            Sum = n/(1 - 1/2) = n/(1/2) = 2n

        So the while loop does O(2n) = O(n) work in total.
        
        - We use the infinite GP instead of the finite GP to obtain a tight upper bound for asymptotic analysis, since we care about the growth rate (Big-O), not the exact sum.

# Total Time Complexity: O(n) + O(n) = O(n)

*/

// S.C. = O(n) 