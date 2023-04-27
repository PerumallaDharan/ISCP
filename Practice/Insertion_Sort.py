#Insertion sort
n=int(input("Enter total elements in the arr = "))
arr = []
for i in range(0,n):
    arr.append(int(input("Enter element = ")))
for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
print(arr)