# You are given a string  'S'  and  width 'w' .
# Your task is to wrap the string into a paragraph of width .

# Function Description

# Complete the wrap function in the editor below.

# wrap has the following parameters:

# string string: a long string
# int max_width: the width to wrap to
# Returns

# string: a single string with newline characters ('\n') where the breaks should be

# Input Format

# The first line contains a string, 'string'.
# The second line contains the width, 'maxwidth'.

# Constraints
# 0 < len(string) < 1000
# 0 < maxwidth < len(string)

# Sample Input 0
# ABCDEFGHIJKLIMNOQRSTUVWXYZ
# 4

# Sample Output 0
# ABCD
# EFGH
# IJKL
# IMNO
# QRST
# UVWX
# YZ

import textwrap


def wrap(string, max_width):
    s = ""
    for i in range(len(string)):
        if i != 0 and i % max_width == 0:
            s = s + "\n" + string[i]
        else:
            s = s + string[i]
    return s


if __name__ == "__main__":
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)
