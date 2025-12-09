// LeetCode (3769. Sort Integers by Binary Reflection): 
// https://leetcode.com/problems/sort-integers-by-binary-reflection/


// TAGS: [RATING: N/A], [EASY], [OPTIMAL], [STL], [ARRAY], [SORTING], [CUSTOM SORT], [BIT MANIPULATION] 


#include<bits/stdc++.h> 
using namespace std;


class Solution {
public:
    int revereseNumBinary (int num) {
        
        int reverseNum = 0;
        int tempNum = num;
        
        while (tempNum) {
            reverseNum <<= 1;
            bool isLsbSet = tempNum & 1;
            if (isLsbSet) reverseNum = reverseNum | 1;
            tempNum >>= 1;
        }

        return reverseNum;
    }

    vector<int> sortByReflection(vector<int>& nums) {
        
        sort(
            nums.begin(), 
            nums.end(), 
            [this](int a, int b){
                
                int reverseA = revereseNumBinary(a);
                int reverseB = revereseNumBinary(b);
            
                if (reverseA != reverseB) {
                    return reverseA < reverseB;
                }

                return a < b;
            }
        );

        return nums;
    }
};


// T.C. = O(n*(log(n) to the base 2)*(log(k) to the base 2)) = O(n*log(n)*log(k)) 
// S.C. = O(log(n)) -> caused by the function call stack when intro-sort executes 

// Here, n = the length of input vector nums, k = the max value in nums vector 