# Problem: Longest Common Prefix

**LeetCode:** #14  
**Link:** https://leetcode.com/problems/longest-common-prefix/

### Problem Statement

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

### Approach

I compare the characters of the first string with the corresponding characters of all the other strings.

The first string is used as the reference.

For each character:

1. Store the current character from the first string.
2. Compare it with the same position in every other string.
3. If any character is different, stop and return the prefix found so far.
4. If all characters match, add the character to the result.
5. Continue until the end of the first string is reached.

### Example

Input:

`["flower", "flow", "flight"]`

Output:

`"fl"`

The common prefix among all three strings is `"fl"`.

### Second Example

Input:

`["dog", "racecar", "car"]`

Output:

`""`

There is no common prefix.

### Complexity

- Time: O(n × m)
- Space: O(m)

where `n` is the number of strings and `m` is the length of the shortest relevant prefix.

### Test Cases

1. `["flower", "flow", "flight"]` → `"fl"`
2. `["dog", "racecar", "car"]` → `""`

### Result

The solution was successfully accepted on LeetCode.