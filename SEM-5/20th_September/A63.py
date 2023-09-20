# Given an array of strings words and an integer k, return the k most frequent strings.

# Return the answer sorted by the frequency from highest to lowest. Sort the words with the same frequency by their lexicographical order.

# Input Format

# The first line contains two integers N and K
# The second line contains a string
# Constraints

# 1 <= words.length <= 500
# 1 <= words[i].length <= 10
# words[i] consists of lowercase English letters.
# k is in the range [1, The number of unique words[i]]
# Output Format

# Print the strings sorted by the frequency from highest to lowest. Sort the words with the same frequency by their lexicographical order.

# Sample Input 0

# 6 2
# i love dsa i love coding
# Sample Output 0

# i love 
# Sample Input 1

# 7 3
# this is very good this is nice
# Sample Output 1

# is this good 

from collections import Counter
N, K = map(int, input().split())
words = input().split()
word_count = Counter(words)
sorted_words = sorted(word_count.keys(), key=lambda word: (-word_count[word], word))
top_k_words = sorted_words[:K]
print(" ".join(top_k_words))
