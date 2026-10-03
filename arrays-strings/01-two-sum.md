## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used a brute-force approach with two nested loops. The first loop selects one element, and the second loop checks the remaining elements to find a pair whose sum is equal to the target.

Once the required pair is found, the indices of those two elements are returned.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

I tested the solution locally before submitting it to LeetCode. I used a normal test case and an edge case containing duplicate values.

The solution was successfully accepted on LeetCode.