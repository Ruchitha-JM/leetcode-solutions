# Problem: Roman to Integer

**Link:** https://leetcode.com/problems/roman-to-integer/

### Approach

I used a mapping function to convert each Roman numeral character into its corresponding integer value.

The Roman numeral symbols and their values are:

- I = 1
- V = 5
- X = 10
- L = 50
- C = 100
- D = 500
- M = 1000

I traverse the string from left to right.

For each character, I compare its value with the value of the next character.

- If the current value is smaller than the next value, I subtract the current value.
- Otherwise, I add the current value.

For example, in `IV`, I = 1 is smaller than V = 5, so 1 is subtracted from 5, giving 4.

### Complexity

- Time: O(n)
- Space: O(1)

### Test Cases

1. `s = "III"` → `3`
2. `s = "LVIII"` → `58`
3. `s = "MCMXCIV"` → `1994`

### Notes

The solution was successfully accepted on LeetCode.