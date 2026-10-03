## Problem: Reverse String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

I used the two-pointer approach to reverse the string in-place.

One pointer starts from the beginning of the string and another pointer starts from the end.

The characters at the two positions are swapped using a temporary variable. After each swap, the left pointer is moved forward and the right pointer is moved backward.

This process continues until the two pointers meet.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested the solution locally before submitting it to LeetCode.

I used a normal test case and an edge case containing a single character.

The solution was successfully accepted on LeetCode.