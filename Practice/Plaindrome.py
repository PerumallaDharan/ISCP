# Program to check whether a string is Symmetrical or Palindrome

n = input("Enter string:")
m = n[::-1]
if n == m:
    print("Palindrome")
else:
    print("Not Palindrome")
