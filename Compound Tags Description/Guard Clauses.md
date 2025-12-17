# Guard Clauses Pattern

## 🎯 What Is It?

**Guard clauses** are early return statements that check for invalid/edge conditions at the start of a function, avoiding nested if-else blocks.
```cpp
// Without guard clauses (nested)
if (condition1) {
    if (condition2) {
        if (condition3) {
            // main logic
        }
    }
}

// With guard clauses (flat)
if (!condition1) return;
if (!condition2) return;
if (!condition3) return;
// main logic
```

## 💡 Why Use It?

1. **Reduces nesting** → Easier to read
2. **Fail fast** → Exit immediately when conditions aren't met
3. **Separates validation from logic** → Main logic stays clean
4. **Lower cognitive load** → No need to track nested scopes

## ⚙️ When To Use

✅ **Use guard clauses when:**
- Multiple validation checks before main logic
- Deep nesting (3+ levels) makes code hard to read
- Base cases in recursion
- Input validation at function start

❌ **Don't use when:**
- Only 1-2 simple conditions
- Need to execute different logic for each branch (use if-else)
- Positive condition reads better than negative

## 📝 Example Pattern
```cpp
void processData(string data, int threshold) {
    // Guard clauses - handle invalid cases first
    if (data.empty()) return;
    if (threshold < 0) return;
    if (!isValid(data)) return;
    
    // Main logic - only runs if all guards pass
    doComplexProcessing(data, threshold);
}
```

**Rule of thumb:** If you're nesting 3+ levels deep, consider guard clauses.  
**LeetCode Example Code:** [Code Link](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/1930.%20Unique%20Length-3%20Palindromic%20Subsequences/00_Naive_Approach.cpp)