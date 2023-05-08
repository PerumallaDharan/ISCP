# Program to check the index of the maximum element of a list

n = int(input("Enter number of elements:"))
list1 = []
for i in range(n):
    list1.append(int(input("Enter element:")))
print("List:", list1)
max = list1[0]
for i in range(1, n):
    if list1[i] > max:
        max = list1[i]
print("Maximum element:", max)
for i in range(n):
    if list1[i] == max:
        print("Index of maximum element:", i)
        break
    