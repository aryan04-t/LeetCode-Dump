# About This Repository

This repository is my **unstructured, high-speed log** of ongoing LeetCode practice. Unlike my main LeetCode repo - [LeetCode Jog](https://github.com/aryan04-t/LeetCode-Jog), this one focuses more on **coding volume, consistency, and competitive programming velocity**, documentation and optimization notes can be skipped in the case of logics which I have known from a long time.


## Purpose

I created LeetCode Dump to keep my workflow fast:

- 🚀 **Least documentation** - just raw solutions  
- ⚡ **Quick commits** - for practice tracking  
- 🧠 **CP-oriented pace** - solve more, explain less  
- 📌 **Zero maintenance** - structure could fumble, polishing could be ignored, as velocity is the main purpose - but I will try to maintain the repo's quality as much as possible 


## What This Repo Contains

Only readable code. Least explanations for known topics, Least formatting - just a real-time record of my LeetCode grind.

- - -

## Repository Structure
```
question-name/
├── 00_Naive_Simulation.cpp
├── 01_Optimal_Sliding_Window.cpp
└── 02_Most_Optimal_Bit_Manipulation.cpp
```

### File Naming Convention

Files use snake_case: `{number}_{approach}_{main_concepts}.cpp`

### File Structure
```cpp
// LeetCode (3751. Total Waviness of Numbers in Range I)
// https://leetcode.com/problems/total-waviness-of-numbers-in-range-i

// TAGS: [RATING: 1404], [MEDIUM], [OPTIMAL], [MATH], [STRING]

#include<bits/stdc++.h>
using namespace std;

class Solution {
    // ... code
};

// T.C. = O(n*k)
// S.C. = O(k)
```

Each file contains: problem link → tags → code → complexity analysis.

- - - 

## Tag System

Each solution file includes a structured tag comment at the top for quick filtering and topic targeting:
```
TAGS: { [RATING], [DIFFICULTY], [APPROACH], [...ERRORS], [STL], [...CONCEPTS, ...DATA SCTRUCTURES, ...PATTERNS] }
```

### Tag Categories

> Note: All tag names should stay ALL CAPS everywhere in repo

- **RATING**: Question rating (number) derived from [LeetCode Difficulty Rating extension](https://chromewebstore.google.com/detail/hedijgjklbddpidomdhhngflipnibhca?utm_source=item-share-cb), or `N/A`
- **DIFFICULTY**: `EASY` | `MEDIUM` | `HARD`
- **APPROACH**: `NAIVE` | `NAIVE OPTIMAL` | `OPTIMAL` | `MOST OPTIMAL`
- **ERRORS**: `TLE ERROR` | `MLE ERROR` | (empty if none)
- **STL**: `STL` | (Empty if no uncommon stl function used)
- **CONCEPTS, Data Structures & PATTERNS**: Problem-specific tags 

    - Basic Concept Tags (Basic Concepts, Data Structures and Patterns):
        - `ARRAY` | [Example Code](https://github.com/aryan04-t/LeetCode-Jog/blob/master/01_Arrays/00_1-D%20Array/006_1672.%20Richest%20Customer%20Wealth/00_Optimal_Approach.cpp)

        - `STRING` | [Example Code](http://github.com/aryan04-t/LeetCode-Jog/blob/master/01_Arrays/00_1-D%20Array/051_3254.%20Find%20the%20Power%20of%20K-Size%20Subarrays%20I/00_My_Naive_Repetitive_Iterative_Approach.cpp)

        - `MAXIMIZING` 
        
            - [Example Code-1](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3381.%20Maximum%20Subarray%20Sum%20With%20Length%20Divisible%20by%20K/03_Most_Optimal_Prefix_Sum_and_Hash_Map_Approach.cpp) 

            - [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3781.%20Maximum%20Score%20After%20Binary%20Swaps/00_Naive_Approach.cpp) 

        - `MINIMIZING` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3761.%20Minimum%20Absolute%20Distance%20Between%20Mirror%20Pairs/02_Most_Optimal_Hash_Map_Decimal_Number_Reversing_Approach.cpp) 

        - `HASH MAP` | [Example Code](https://github.com/aryan04-t/LeetCode-Jog/blob/master/01_Arrays/00_1-D%20Array/049_2053.%20Kth%20Distinct%20String%20in%20an%20Array/00_My_Optimal_Unordered_Map_Approach.cpp)

        - `HASH SET` | [Example Code](https://github.com/aryan04-t/LeetCode-Jog/blob/master/01_Arrays/00_1-D%20Array/055_3375.%20Minimum%20Operations%20to%20Make%20Array%20Values%20Equal%20to%20K/00_My_Optimal_Unordered_Set_Iterative_Approach.cpp) 

        - `LINKED LIST` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3217.%20Delete%20Nodes%20From%20Linked%20List%20Present%20in%20Array/01_Another_Optimal.cpp) 

        - `SLIDING WINDOW` | [Example Code](https://github.com/aryan04-t/LeetCode-Jog/blob/master/13_Bit%20Manipulation/000_3097.%20Shortest%20Subarray%20With%20OR%20at%20Least%20K%20II/02_My_Optimal_Sliding_Window_and_Bit_Manipulation_Approach.cpp) 

        - `MODULAR ARITHMETIC` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3190.%20Find%20Minimum%20Operations%20to%20Make%20All%20Elements%20Divisible%20by%20Three/00_Optimal.cpp) 

        - `INTUITION INVERSION` | [Introduction to Intuition Inversion](https://github.com/aryan04-t/LeetCode-Jog/blob/master/00_Maths%20and%20Coding%20-%20Fundamentals%20and%20Tricks%20for%20Revision/30_Inverting%20Intuitions%20-%20A%20Problem%20Solving%20Framework.md)

        - `DIVISION`

        - `SUBARRAY` | [Example Code](https://github.com/aryan04-t/LeetCode-Jog/blob/master/01_Arrays/00_1-D%20Array/051_3254.%20Find%20the%20Power%20of%20K-Size%20Subarrays%20I/00_My_Naive_Repetitive_Iterative_Approach.cpp) 

        - `SUBSTRING` | [Example Code](https://github.com/aryan04-t/LeetCode-Jog/blob/master/02_Strings/011_1456.%20Maximum%20Number%20of%20Vowels%20in%20a%20Substring%20of%20Given%20Length/00_Simplest_and_Most_Efficient_Sliding_Window_Approach.cpp) 

        - `4 DIRECTION ITERATIVE TRAVERSAL` | [Example Code](https://github.com/aryan04-t/LeetCode-Jog/blob/master/01_Arrays/00_1-D%20Array/066_3694.%20Distinct%20Points%20Reachable%20After%20Substring%20Removal/01_My_Optimal_Sliding_Window_and_Hash_Set_Approach.cpp)

        - `BINARY SEARCH` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3759.%20Count%20Elements%20With%20at%20Least%20K%20Greater%20Values/02_Most_Optimal_Sorting_and_Binary_Search_Approach.cpp) 

        - `PALINDROME` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3766.%20Minimum%20Operations%20to%20Make%20Binary%20Palindrome/00_Naive.cpp) 

        - `BINARY STRING` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3228.%20Maximum%20Number%20of%20Operations%20to%20Move%20Ones%20to%20the%20End/00_Optimal.cpp) 

        - `BINARY NUMBER` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3750.%20Minimum%20Number%20of%20Flips%20to%20Reverse%20Binary%20String/01_Optimal_Another.cpp)

        - `DECIMAL NUMBER` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3754.%20Concatenate%20Non-Zero%20Digits%20and%20Multiply%20by%20Sum%20I/01_Most_Optimal.cpp)

        - `DECIMAL STRING` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3751.%20Total%20Waviness%20of%20Numbers%20in%20Range%20I/00_Optimal.cpp) 

        - `BIT MANIPULATION` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3769.%20Sort%20Integers%20by%20Binary%20Reflection/00_Optimal_Custom_Sort_Approach.cpp) 

        - `TREE` | [Example Code](https://github.com/aryan04-t/LeetCode-Jog/blob/master/10_Trees/006_1302.%20Deepest%20Leaves%20Sum/00_My_Optimal_DFS_Approach.cpp) 

        - `GRAPH` | [Example Code](https://github.com/aryan04-t/LeetCode-Jog/blob/master/11_Graphs/000_997.%20Find%20the%20Town%20Judge/00_Optimal_Hash_Table_and_Graph_Approach.cpp) 

        - `DFS` | [Example Code](https://github.com/aryan04-t/LeetCode-Jog/blob/master/10_Trees/002_543.%20Diameter%20of%20Binary%20Tree/00_Optimal_Approach.cpp) 

        - `BFS` | [Example Code](https://github.com/aryan04-t/LeetCode-Jog/blob/master/10_Trees/009_102.%20Binary%20Tree%20Level%20Order%20Traversal/00_My_Optimal_BFS_Approach.cpp) 

        - `DP` | [Example Code](https://github.com/aryan04-t/LeetCode-Jog/blob/master/07_Recursion%2C%20Backtracking%20and%20Dynamic%20Programming/001_509.%20Fibonacci%20Number/05_Recursion_plus_Memoization_Approach.cpp) 

        - `PERIMETER` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/976.%20Largest%20Perimeter%20Triangle/00_Naive.cpp) 

        - `AREA` | [Example Code](https://github.com/aryan04-t/LeetCode-Jog/blob/master/03_Maths/005_812.%20Largest%20Triangle%20Area/00_Optimal_Approach_Herons_Formula.cpp)

        - `DIVISIBILITY` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/1590.%20Make%20Sum%20Divisible%20by%20P/01_Naive_Optimal.cpp) 

        - `PREFIX SUM` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/560.%20Subarray%20Sum%20Equals%20K/01_Optimal_Prefix_Sum_and_Hash_Map_Approach.cpp) 

        - `STATIC VARIABLE` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3766.%20Minimum%20Operations%20to%20Make%20Binary%20Palindrome/01_Optimal_Precomputation_And_Binary_Search_Approach.cpp) 

        - `CUSTOM SORT` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3769.%20Sort%20Integers%20by%20Binary%20Reflection/00_Optimal_Custom_Sort_Approach.cpp) 

        - `SORTING` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3759.%20Count%20Elements%20With%20at%20Least%20K%20Greater%20Values/00_Optimal_Sorting_Approach.cpp)

        - `CUSTOM HASHING` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3755.%20Find%20Maximum%20Balanced%20XOR%20Subarray%20Length/02_Most_Optimal_Prefix_Sum_and_Hash_Map_Approach.cpp) 

        - `PRE-COMPUTATION` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3766.%20Minimum%20Operations%20to%20Make%20Binary%20Palindrome/01_Optimal_Precomputation_And_Binary_Search_Approach.cpp) 

        - `HASH VECTOR` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3760.%20Maximum%20Substrings%20With%20Distinct%20Start/02_Naive_Optimal_Simulation_Approach.cpp) 

        - `SIMULATION` 
            
            - [Example Code-1](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3775.%20Reverse%20Words%20With%20Same%20Vowel%20Count/01_Optimal.cpp)

            - [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3782.%20Last%20Remaining%20Integer%20After%20Alternating%20Deletion%20Operations/01_Optimal_Simulation_Approach.cpp)

        - `BIT MASKING` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/1930.%20Unique%20Length-3%20Palindromic%20Subsequences/04_Another_Optimal_Approach_with_Bit_Manipulation.cpp) 

        - `REVERSING` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3750.%20Minimum%20Number%20of%20Flips%20to%20Reverse%20Binary%20String/00_Optimal.cpp) 

        - `EVEN AND ODD` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3755.%20Find%20Maximum%20Balanced%20XOR%20Subarray%20Length/00_Naive.cpp)

        - `EVEN` 

        - `ODD` 

        - `DIFFERENCE TRACKING` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3755.%20Find%20Maximum%20Balanced%20XOR%20Subarray%20Length/02_Most_Optimal_Prefix_Sum_and_Hash_Map_Approach.cpp)

        - `NEGATIVE REMAINDER` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/974.%20Subarray%20Sums%20Divisible%20by%20K/01_Optimal_Prefix_Sum_and_Hash_Map_Approach.cpp)

        - `SUM` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/560.%20Subarray%20Sum%20Equals%20K/00_Naive.cpp) 

        - `HEAP` | [Example Code](https://github.com/aryan04-t/LeetCode-Jog/blob/master/12_Heaps/003_506.%20Relative%20Ranks/01_My_Optimal_Max_Heap_Approach_Using_STL_Pair.cpp) 

        - `MIN HEAP` | [Example Code](https://github.com/aryan04-t/LeetCode-Jog/blob/master/12_Heaps/005_703.%20Kth%20Largest%20Element%20in%20a%20Stream/00_My_Optimal_Min_Heap_Approach.cpp) 

        - `MAX HEAP` 
            
            - [Example Code-1](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3774.%20Absolute%20Difference%20Between%20Maximum%20and%20Minimum%20K%20Elements/03_Most_Optimal_Heap_Approach.cpp) 

            - [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3781.%20Maximum%20Score%20After%20Binary%20Swaps/01_Optimal_Heap_Approach.cpp) 

        - `C++ STRING STREAM` | [Example Code](http://github.com/aryan04-t/LeetCode-Sprint/blob/master/3775.%20Reverse%20Words%20With%20Same%20Vowel%20Count/02_Most_Optimal.cpp) | [My Notes](https://github.com/aryan04-t/LeetCode-Jog/tree/master/00_Maths%20and%20Coding%20-%20Fundamentals%20and%20Tricks%20for%20Revision/00_stringstream%20Notes)

        - `COUNTING` 

        - `GREEDY` 
        
            - [Example Code-1](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3228.%20Maximum%20Number%20of%20Operations%20to%20Move%20Ones%20to%20the%20End/00_Optimal.cpp) 

            - [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3781.%20Maximum%20Score%20After%20Binary%20Swaps/01_Optimal_Heap_Approach.cpp) 

        - `CIRCULAR ARRAY` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3776.%20Minimum%20Moves%20to%20Balance%20Circular%20Array/02_Most_Optimal_Greedy_Approach.cpp)

        - `TWO POINTER` | [Example Code](https://github.com/aryan04-t/LeetCode-Jog/blob/master/01_Arrays/00_1-D%20Array/020_26.%20Remove%20Duplicates%20from%20Sorted%20Array/01_Optimal_Two_Pointer_Approach.cpp) 

        - `PAIR SORTING` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3318.%20Find%20X-Sum%20of%20All%20K-Long%20Subarrays%20I/01_Naive_Optimal_Hash_Map_Sliding_Window_and_Sorting_Approach.cpp) 

        - `LINEAR RESORTING` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3318.%20Find%20X-Sum%20of%20All%20K-Long%20Subarrays%20I/02_Optimal_Hash_Map_Sliding_Window_and_Linear_Resorting_Approach.cpp)

        - `RECURSION` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/1930.%20Unique%20Length-3%20Palindromic%20Subsequences/00_Naive_Recursive_Approach.cpp) 

        - `CHARS TO STRING C++` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/1930.%20Unique%20Length-3%20Palindromic%20Subsequences/01_Naive_Iterative_Approach.cpp)

        - `LAST OCCURRENCE PRECOMPUTATION` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/1930.%20Unique%20Length-3%20Palindromic%20Subsequences/04_Another_Optimal_Approach_with_Bit_Manipulation.cpp) 
        
        - `FIRST OCCURRENCE PRECOMPUTATION` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/1930.%20Unique%20Length-3%20Palindromic%20Subsequences/04_Another_Optimal_Approach_with_Bit_Manipulation.cpp) 

        - `GP BASED TC ANALYSIS` | [Example Code](EMPTY_LINK_CURR) 
            - `Full Form:` Geometric Progression Based Time Complexity Analysis 

        - etc.
    
    - Compound Concept Tags (Compound Concepts & Patterns): 
        - `PREFIX SUM - CYCLIC HASH - SUBARRAY REDUCTION` - [Description](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/Compound%20Tags%20Description/Prefix%20Sum%20-%20Cyclic%20Hash%20-%20Subarray%20Reduction.md) 

        - `K LARGEST OR SMALLEST ELEMENTS` - [Description](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/Compound%20Tags%20Description/K%20Largest%20or%20Smallest%20Elements.md) 

        - `GUARD CLAUSES` - [Description](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/Compound%20Tags%20Description/Guard%20Clauses.md) 

        - `CHARACTER BOUND OPTIMIZATION` - [Description](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/Compound%20Tags%20Description/Character%20Bound%20Optimization.md) 


This tagging system allows quick grep/search filtering to practice specific topics or approaches without needing documentation overhead.



## 📝 NOTE:  
> You can add a `Learnings.md` or a `References.md` to any questions folder if you want to store some data which you think was very helful in solving/understanding that question 


## ⚠️ WARNING:   
> Don't rename an already commited folder or file, because the links of those folders/files are refered at multiple markdowns files inside and outside this repo, and changing already commited folder/file names can break those links - so, be careful before doing something like this 

> Don't even rename the `repo` or `master` branch ever, because the links are dependant on that also - but if you choose to rename these things, then make sure to update all links even in other repos as well like `LeetCode Jog`