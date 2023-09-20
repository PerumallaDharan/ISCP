# You want to schedule a list of jobs in d days. Jobs are dependent (i.e To work on the ith job, you have to finish all the jobs j where 0 <= j < i).

# You have to finish at least one task every day. The difficulty of a job schedule is the sum of difficulties of each day of the d days. The difficulty of a day is the maximum difficulty of a job done on that day.

# You are given an integer array jobDifficulty and an integer d. The difficulty of the ith job is jobDifficulty[i].

# Return the minimum difficulty of a job schedule. If you cannot find a schedule for the jobs return -1.

# Input Format

# The First Line contains 2 integers N and D.
# The Next Line contains N integers seperated by a space.
# Constraints

# 1 <= jobDifficulty.length <= 300
# 0 <= jobDifficulty[i] <= 1000
# 1 <= d <= 10
# Output Format

# Print a integer as the anwer to the question

# Sample Input 0

# 6 2
# 6 5 4 3 2 1
# Sample Output 0

# 7


# Sample Input 1

# 11 3
# 23 7 16 4 26 18 15 13 20 25 13 
# Sample Output 1

# 53

# def minDifficulty(jobDifficulty, d):
#     n = len(jobDifficulty)
#     if n < d:
#         return -1
#     dp = [[float('inf')] * n + [0] for _ in range(d + 1)]
#     for d in range(1, d + 1):
#         for i in range(n - d + 1):
#             maxd = 0
#             for j in range(i, n - d + 1):
#                 maxd = max(maxd, jobDifficulty[j])
#                 dp[d][i] = min(dp[d][i], maxd + dp[d - 1][j + 1])
#     return dp[d][0]
# n,d = map(int,input().split())
# jobDifficulty = list(map(int,input().split()))
# print(minDifficulty(jobDifficulty,d))

