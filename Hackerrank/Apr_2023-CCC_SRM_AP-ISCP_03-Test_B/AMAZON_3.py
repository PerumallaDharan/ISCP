# Given a string s, find the length of the longest substring without repeating characters.

# Input Format

#     The First line will have a integer N denoting the length of string.
#     The Second line will have a string S.

# Constraints

#     0 <= s.length <= 5 * 10^4
#     s consists of English letters, digits, symbols and spaces.

# Output Format

# Print the integer which is the answer to the question

# Sample Input 0

# 18
# fgsurhydrjkxjlvhvo

# Sample Output 0

# 8

# Sample Input 1

# 9
# mjjlclldn

# Sample Output 1

# 3

def longestSubstring(s):
    n = len(s)
    seen = {}
    left = 0
    max_len = 0

    for right in range(n):
        if s[right] in seen and seen[s[right]] >= left:
            left = seen[s[right]] + 1
        seen[s[right]] = right
        max_len = max(max_len, right - left + 1)

    return max_len


n = int(input())
s = input()
print(longestSubstring(s))
