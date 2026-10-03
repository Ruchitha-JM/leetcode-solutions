## Problem: Valid Parentheses (Easy)

**LeetCode:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack-based approach to check whether the brackets are valid.

When an opening bracket `(`, `{`, or `[` is encountered, it is pushed onto the stack.

When a closing bracket `)`, `}`, or `]` is encountered, the most recently opened bracket is removed from the stack and checked to make sure it matches the closing bracket.

If a closing bracket does not match, the string is invalid.

At the end, the string is valid only if the stack is empty.

### Complexity

- Time: O(n)
- Space: O(n)

### Test Cases

#### Test Case 1
Input:
`()`

Output:
`true`

#### Test Case 2
Input:
`()[]{}`

Output:
`true`

#### Test Case 3
Input:
`(]`

Output:
`false`

### Notes

I tested the solution locally in C and submitted the solution on LeetCode.

The solution was successfully accepted on LeetCode.