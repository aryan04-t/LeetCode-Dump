# About This Repository

This repository is my **unstructured, high-speed log** of ongoing LeetCode practice. Unlike my main LeetCode repo, this one focuses purely on **coding volume, consistency, and competitive programming velocity**, without any documentation or optimization notes.

## Purpose

I created LeetCode Dump to keep my workflow fast:

- 🚀 **Least documentation** - just raw solutions  
- ⚡ **Quick commits** - for practice tracking  
- 🧠 **CP-oriented pace** - solve more, explain less  
- 📌 **Zero maintenance** - structure could fumble, polishing could be ignored, as velocity is the main purpose 

## What This Repo Contains

Only code. Least explanations, Least formatting - just a real-time record of my LeetCode grind.

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
TAGS: [RATING, DIFFICULTY, APPROACH, ERRORS, STL, CONCEPTS]
```

### Tag Categories

- **RATING**: Question rating (number) derived from [LeetCode Difficulty Rating extension](https://chromewebstore.google.com/detail/hedijgjklbddpidomdhhngflipnibhca?utm_source=item-share-cb), or `N/A`
- **DIFFICULTY**: `EASY` | `MEDIUM` | `HARD`
- **APPROACH**: `NAIVE` | `NAIVE OPTIMAL` | `OPTIMAL` | `MOST OPTIMAL`
- **ERRORS**: `TLE ERROR` | `MLE ERROR` | (empty if none)
- **STL**: `STL` | (Empty if no uncommon stl function used)
- **CONCEPTS**: Problem-specific tags like `ARRAY`, `STRING`, `MAXIMIZING SUM`, `HASH MAP`, `HASH SET`, `SLIDING WINDOW`, `MODULAR ARITHMETIC`, `INTUITION INVERSION`, `DIVISION`, `SUBARRAY`, `SUBSTRING`, `REVERSING`, `BINARY STRING`, `BINARY NUMBER`, `DECIMAL NUMBER`, `DECIMAL STRING`, `BIT MANIPULATION`, `TREE`, `GRAPH`, `DFS`, `BFS`, `DP`, `PERIMETER`, `AREA`, `DIVISIBILITY`, `PREFIX SUM` etc.

This tagging system allows quick grep/search filtering to practice specific topics or approaches without needing documentation overhead.