# start() & end()
# These expressions return the indices of the start and end of the substring matched by the group.

# Code

# >>> import re
# >>> m = re.search(r'\d+','1234')
# >>> m.end()
# 4
# >>> m.start()
# 0
# Task
# You are given a string .
# Your task is to find the indices of the start and end of string  in .

# Input Format

# The first line contains the string .
# The second line contains the string .

# Constraints



# Output Format

# Print the tuple in this format: (start _index, end _index).
# If no match is found, print (-1, -1).

# Sample Input

# aaadaa
# aa
# Sample Output

# (0, 1)  
# (1, 2)
# (4, 5)


import re

s, k = input(), input()

current = 0
m = re.search(k, s[current:])
if not m:
    print("(-1, -1)") 
else:
    while m:
        print(f"({current + m.start()}, {current + m.end() - 1})")
        current = current + m.start() + 1
        m = re.search(k, s[current:])