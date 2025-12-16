# K Largest or Smallest Elements 


## 🎯 What Problem Does This Solve?

Many problems ask: "Find the k largest/smallest elements" or "Maintain top-k elements in a stream"

**Naive solution:** Sort entire array → O(n log n) → Wasteful when we only need k elements!

**This pattern:** Use opposite heap of size k → O(n log k) → Much faster!

## 💡 The Counterintuitive Insight

**⚡ Core Principle:** Use the opposite heap of what you're looking for!
- Want k **largest**? → Use **min heap** 
- Want k **smallest**? → Use **max heap**

**Why this works:**
The heap acts as a gatekeeper. The root is the "weakest" element in your current top-k set, making it easy to decide if a new element qualifies.

## ✨ Simple Example

**Problem:** Find 3 largest elements in `[5, 2, 8, 1, 9, 3, 7]`

**Using Min Heap (size = 3):**
```
Process 5: heap = [5]
Process 2: heap = [2, 5]
Process 8: heap = [2, 5, 8]
Process 1: 1 < 2 (root) → skip
Process 9: 9 > 2 (root) → remove 2, add 9 → heap = [5, 8, 9]
Process 3: 3 < 5 (root) → skip
Process 7: 7 > 5 (root) → remove 5, add 7 → heap = [7, 8, 9]

Result: [7, 8, 9] ✓
```

## ⚙️ How The Pattern Works

**For k largest elements (min heap):**
1. Maintain a min heap of size k
2. Root = smallest element in current top-k set
3. For each new element:
   - If heap size < k → Add element
   - If element > root → Remove root, add element
   - Otherwise → Skip (element not in top-k)
4. Final heap contains k largest elements

**For k smallest elements (max heap):**
1. Maintain a max heap of size k
2. Root = largest element in current bottom-k set
3. For each new element:
   - If heap size < k → Add element
   - If element < root → Remove root, add element
   - Otherwise → Skip (element not in bottom-k)
4. Final heap contains k smallest elements

## 🎭 Why Opposite Heap?

**🔑 The gatekeeper principle:**
- Min heap's root = minimum in set → Easy to compare new elements against the weakest qualifying element of the "k largest elements group" 
- Max heap's root = maximum in set → Easy to compare new elements against the weakest qualifying element of the "k smallest elements group" 

**Visual for k=3 largest:**
```
Current top-3: [7, 8, 9]
Min heap:       7 (root)
               / \
              8   9

New element: 6
6 < 7? Yes → Not in top-3, skip

New element: 10  
10 > 7? Yes → Remove 7, add 10
New top-3: [8, 9, 10]
```

## 📊 Complexity Analysis

- **Time:** O(n log k) instead of O(n log n) for full sort
- **Space:** O(k) 
- **When k << n:** Massive improvement!

## 💻 C++ Implementation Pattern
```cpp
using MinHeap = priority_queue<int, vector<int>, greater<int>>;
using MaxHeap = priority_queue<int>;

// For k largest elements - use min heap
MinHeap minHeap;
int k = 2;  // Find 2 largest elements

for(int num : nums) {
    if(minHeap.size() != k) {
        minHeap.push(num);
    }
    else if(num > minHeap.top()) {
        minHeap.pop();
        minHeap.push(num);
    }
}

// For k smallest elements - use max heap
MaxHeap maxHeap;
int k = 2;  // Find 2 smallest elements

for(int num : nums) {
    if(maxHeap.size() != k) {
        maxHeap.push(num);
    }
    else if(num < maxHeap.top()) {
        maxHeap.pop();
        maxHeap.push(num);
    }
}
```

## 🚀 Practice Problems

- 3745. Maximize Expression of Three Elements | [Question Link](https://leetcode.com/problems/maximize-expression-of-three-elements) | [My Solutions](https://github.com/aryan04-t/LeetCode-Jog/tree/master/12_Heaps/008_3745.%20Maximize%20Expression%20of%20Three%20Elements) 

- 703. Kth Largest Element in a Stream | [Question Link](https://leetcode.com/problems/kth-largest-element-in-a-stream/) | [My Solutions](https://github.com/aryan04-t/LeetCode-Jog/tree/master/12_Heaps/005_703.%20Kth%20Largest%20Element%20in%20a%20Stream) 

- 3318. Find X-Sum of All K-Long Subarrays I | [Question Link](https://leetcode.com/problems/find-x-sum-of-all-k-long-subarrays-i) | [My Solutions](https://github.com/aryan04-t/LeetCode-Sprint/tree/master/3318.%20Find%20X-Sum%20of%20All%20K-Long%20Subarrays%20I) 

- 3774. Absolute Difference Between Maximum and Minimum K Elements | [Question Link](https://leetcode.com/problems/absolute-difference-between-maximum-and-minimum-k-elements) | [My Solutions](https://github.com/aryan04-t/LeetCode-Sprint/tree/master/3774.%20Absolute%20Difference%20Between%20Maximum%20and%20Minimum%20K%20Elements) 