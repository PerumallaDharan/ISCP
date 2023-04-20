# Barua is standing at x = 0 facing the positive x-axis. He
# loves watching stars but is too lazy to move or even turn
# around at that matter. For the same reason he can see the
# stars located in the first quadrant but cannot see the ones
# located in the second quadrant (because he doesn't have eyes
# on his back). You are given the co-ordinates of N stars and
# you need to tell him the fraction of the total stars that he will be able to observe.

# Input Format: First line contains the integer N.
# Next N lines contain two integers each, the x and the y co-ordinate of the ith star.

# NOTE :
# Barua can observe every star that is in front of him i.e in the
# first quadrant, the only ones he cannot observe are the ones behind
# him i.e. lying in the second quadrant. He cannot observe the stars that are vertically above him.
# The third and the fourth quadrants are obviously the ground that Barua stands on.

# Output Format:
# Output one decimal number denoting the percentage of the total stars that Barua can observe.

# NOTE : Print the answer upto 6 decimal places.

# Input Constraints:

# 1 <= N <= 10^5
# 1 <= y[i] <= 1000
# -1000 <= x[i] <= 1000
# Input Format

# .

# Constraints

# .

# Output Format

# .

# Sample Input 0

# 6
# 2 2
# 5 6
# -4 5
# -1 1
# 7 3
# -4 2
# Sample Output 0

# 0.500000


n = int(input())
count = 0
for i in range(n):
    x, y = list(map(int, input().split()))
    if x > 0 and y > 0:
        count += 1
print("{:.6f}".format(count / n))
