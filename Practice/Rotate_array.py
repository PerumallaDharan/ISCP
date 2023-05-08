# Program to cyclically rotate an array by given value

n = int(input("Enter number of elements:"))
list1 = []
for i in range(n):
    list1.append(int(input("Enter element:")))
print("List:", list1)
k = int(input("Enter value of k:"))
for i in range(k):
    temp = list1[n - 1]
    for j in range(n - 1, 0, -1):
        list1[j] = list1[j - 1]
    list1[0] = temp
print("Rotated list:", list1)
