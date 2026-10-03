# Problem: Valid Anagram

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency array of size 26 to count the occurrences of each lowercase English letter.

First, I check whether both strings have the same length. If their lengths are different, they cannot be anagrams.

Then, for every character in the strings, I increase the count for the character in the first string and decrease the count for the corresponding character in the second string.

Finally, I check all 26 positions of the frequency array. If any value is not zero, the strings are not anagrams.

If all values are zero, the two strings contain the same characters with the same frequencies and are therefore anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Test Cases

1. `s = "anagram", t = "nagaram"` → `true`
2. `s = "rat", t = "car"` → `false`

### Notes

The solution was successfully accepted on LeetCode.