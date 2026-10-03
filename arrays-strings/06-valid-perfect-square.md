# Problem: Valid Perfect Square

**Link:** https://leetcode.com/problems/valid-perfect-square/

### Approach

I used binary search to determine whether the given number is a perfect square.

I maintain two pointers, `left` and `right`, representing the possible range of square roots.

For each iteration, I calculate the middle value and its square.

- If `mid * mid` equals the given number, the number is a perfect square.
- If `mid * mid` is smaller than the number, I search the right half.
- If `mid * mid` is larger than the number, I search the left half.

I used `long long` for the multiplication to avoid integer overflow.

The solution does not use the built-in `sqrt()` function.

### Complexity

- Time: O(log n)
- Space: O(1)

### Test Cases

1. `num = 16` → `true`
2. `num = 14` → `false`

### Notes

The solution was successfully accepted on LeetCode.