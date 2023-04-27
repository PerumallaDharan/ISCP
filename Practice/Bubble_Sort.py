# Bubble sort
n=int(input("Enter total elements in the array = "))
arr = []
for i in range(0,n):
    arr.append(int(input("Enter element = ")))
for i in range(len(arr) - 1):
    for j in range(len(arr) - 1 - i):
        if arr[j] > arr[j + 1]:
            arr[j], arr[j + 1] = arr[j + 1], arr[j]
print(arr)