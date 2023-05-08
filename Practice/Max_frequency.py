# Program to check maximum frequency character in a string

string = input("Enter string:")
char_freq = {}

for i in string:
    if i in char_freq:
        char_freq[i] = char_freq[i] + 1
    else:
        char_freq[i] = 1
result = max(char_freq, key=char_freq.get)

print("Most frequent character: ", result)
