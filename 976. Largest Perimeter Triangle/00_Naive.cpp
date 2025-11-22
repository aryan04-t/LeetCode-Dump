// 976. Largest Perimeter Triangle
// https://leetcode.com/problems/largest-perimeter-triangle 


// Give TLE Error


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
        int n = nums.size();
        int largestPerimeter = 0;

        for (int i=0; i < n-2; i++) {
            if (nums[i] == 0) continue;

            for (int j=i+1; j < n-1; j++) {
                if (nums[j] == 0) continue;
                
                for (int k=j+1; k < n; k++) {
                    if (nums[k] == 0) continue;
                    
                    int a = nums[i];
                    int b = nums[j];
                    int c = nums[k];

                    if ((a + b > c) && (b + c > a) && (c + a > b)) {
                        int perimeter = a + b + c;
                        largestPerimeter = max(perimeter, largestPerimeter);
                    }
                }
            }
        }

        return largestPerimeter;
    }
};


// T.C. = O(n^3) 
// S.C. = O(1) 

// n = nums.size()