# 2nd smallest and 2nd largest
n=int(input("Enter total number of elements in the array = "))
arr = []
for i in range(0,n):
    arr.append(int(input("Enter element = ")))
arr.sort()
print("Second largest element = ",arr[-2])
print("Second smallest element = ",arr[1])
