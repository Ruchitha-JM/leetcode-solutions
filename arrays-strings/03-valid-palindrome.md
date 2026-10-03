## Problem: Valid Palindrome (Easy)

**Link:** https://leetcode.com/problems/valid-palindrome/

### Approach

I used a two-pointer approach to check whether the string is a palindrome.

One pointer starts from the beginning of the string and the other starts from the end.

Non-alphanumeric characters are skipped, and characters are converted to lowercase before comparison.

If the characters are different, the string is not a palindrome.

If all corresponding characters match, the string is a palindrome.

### Complexity

- Time: O(n)
- Space: O(1)

### Test Cases

- Test Case 1: "A man, a plan, a canal: Panama" → true
- Test Case 2: "race a car" → false
- Test Case 3: " " → true

### Notes

I tested the solution locally using three test cases, including a normal case, a non-palindrome case, and an edge case containing only spaces.

The program executed successfully with exit code 0.