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
        - `ARRAY` 
        - `STRING` 
        - `MAXIMIZING` 
        - `MINIMIZING` 
        - `HASH MAP` 
        - `HASH SET` 
        - `SLIDING WINDOW` 
        - `MODULAR ARITHMETIC`
        - `INTUITION INVERSION` 
        - `DIVISION`
        - `SUBARRAY` 
        - `SUBSTRING`
        - `REVERSING` 
        - `BINARY SEARCH`
        - `PALINDROME`
        - `BINARY STRING` 
        - `BINARY NUMBER` 
        - `DECIMAL NUMBER`
        - `DECIMAL STRING`
        - `BIT MANIPULATION` 
        - `TREE` 
        - `GRAPH` 
        - `DFS`
        - `BFS` 
        - `DP` 
        - `PERIMETER` 
        - `AREA` 
        - `DIVISIBILITY` 
        - `PREFIX SUM` 
        - `STATIC VARIABLE` 
        - `CUSTOM SORT` 
        - `SORTING` 
        - `CUSTOM HASHING` 
        - `PRE-COMPUTATION` 
        - `HASH VECTOR` 
        - `SIMULATION` 
        - `BIT MASKING` 
        - `REVERSING` 
        - `EVEN AND ODD` 
        - `EVEN` 
        - `ODD` 
        - `DIFFERENCE TRACKING` 
        - `NEGATIVE REMAINDER`
        - `SUM`
        - `HEAP`
        - `MIN HEAP`
        - `MAX HEAP`
        - `C++ STRING STREAM`
        - `COUNTING`
        - `GREEDY`
        - `CIRCULAR ARRAY`
        - `TWO POINTER`
        - `PAIR SORTING`
        - `LINEAR RESORTING`
        - etc.
    
    - Compound Concept Tags (Compound Concepts & Patterns): 
        - `PREFIX SUM - CYCLIC HASH - SUBARRAY REDUCTION` - [Description](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/Compound%20Tags%20Description/Prefix%20Sum%20-%20Cyclic%20Hash%20-%20Subarray%20Reduction.md) 


This tagging system allows quick grep/search filtering to practice specific topics or approaches without needing documentation overhead.



## 📝 NOTE:  
> You can add a `Learnings.md` or a `References.md` to any questions folder if you want to store some data which you think was very helful in solving/understanding that question 


## ⚠️ WARNING:   
> Don't rename an already commited folder or file, because the links of those folders/files are refered at multiple markdowns files inside and outside this repo, and changing already commited folder/file names can break those links - so, be careful before doing something like this 

> Don't even rename the `repo` or `master` branch ever, because the links are dependant on that also - but if you choose to rename these things, then make sure to update all links even in other repos as well like `LeetCode Jog`