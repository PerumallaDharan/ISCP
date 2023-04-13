# Given two sorted arrays nums1 and nums2 of size m and n respectively, 
# return the median of the two sorted arrays.

# The overall run time complexity should be O(log (m+n)).

# Input Format

#     The First Line contains two integers N an M denoting the size of two arrays respectively.
#     The Second Line contains N integers denoting the numbers of elements in the array 1.
#     The Third Line contains M integers denoting the numbers of elements in the array 2.

# Constraints

#     nums1.length == n
#     nums2.length == m
#     0 <= n <= 100000
#     0 <= m <= 100000
#     1 <= m + n <= 200000
#     -10^6 <= nums1[i], nums2[i] <= 10^6

# Output Format

# Print the answer to the question.

# Sample Input 0

# 9 7
# -962 -811 -799 -436 -151 287 344 453 770
# 257 775 1592 3072 5093 6278 6502

# Sample Output 0

# 398.5

# Sample Input 1

# 6 9
# -931 -802 -648 -85 763 869
# 1684 1736 2634 3576 5301 7607 8221 9244 9479

# Sample Output 1

# 1736

import statistics

n, m = map(int, input().split())
nums1 = list(map(int, input().split()))
nums2 = list(map(int, input().split()))

merged = nums1 + nums2
merged.sort()

if (n + m) % 2 == 0:
    median = (merged[(n + m) // 2 - 1] + merged[(n + m) // 2]) / 2
else:
    median = merged[(n + m) // 2]
median = round(median, 2)
median_str = str(median).rstrip('0').rstrip('.') if '.' in str(median) else str(median)

print(median_str)