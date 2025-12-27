# 🎯 Survivor Position Tracking

## 📋 Pattern Definition
When elements are eliminated in predictable rounds and only one survives, track the survivor's position instead of simulating all elements.

## 🔍 Recognition Signals
- Sequential elimination in alternating directions
- Only the final survivor matters
- Elements halve (or reduce predictably) each round
- Elimination pattern is deterministic
- Naive simulation is O(n) or worse

## 💡 Core Insight
**Don't track what remains — track where the answer moves**

The survivor's position changes predictably based on:
- Current position in the sequence
- Gap between remaining elements (typically grows geometrically)
- Direction of elimination
- Count or parity of remaining elements

## 🔑 Key Variables to Maintain
- `answer` - current position of survivor candidate
- `gap` - distance between remaining elements
- `count` - how many elements remain
- `direction` - which way elimination happens

## 📐 Update Rule Pattern
The answer position updates when:
- Elimination removes the current answer candidate
- This happens based on direction + parity/boundary conditions

When update needed:
```
new_answer = old_answer ± gap
```

Gap evolution:
```
new_gap = old_gap × growth_factor (often ×2)
```

## 🎪 Related Patterns
- Josephus Problem (circular elimination)
- Binary lifting
- Game theory elimination
- Alternating reduction problems

## 🧠 Problem-Solving Questions
1. "Do I need all elements or just the final one?"
2. "Does only the final answer matter, not intermediate states?"
3. "How does the answer's position change each round?"
4. "What's the gap pattern between survivors?"
5. "When does my current answer get eliminated?"
6. "Can I represent state with O(1) variables?"

## 🚀 Practice Problems

3782. Last Remaining Integer After Alternating Deletion Operations | [Question Link](https://leetcode.com/problems/last-remaining-integer-after-alternating-deletion-operations) | [My Solutions](https://github.com/aryan04-t/LeetCode-Sprint/tree/master/3782.%20Last%20Remaining%20Integer%20After%20Alternating%20Deletion%20Operations) 