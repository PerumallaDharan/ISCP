#Selection sort
n=int(input("Enter total elements in the arr = "))
arr = []
for i in range(0,n):
    arr.append(int(input("Enter element = ")))
for i in range(len(arr) - 1):
        min_index = i
        for j in range(i + 1, len(arr)):
            if arr[j] < arr[min_index]:
                min_index = j
        if min_index != i:
            arr[i], arr[min_index] = arr[min_index], arr[i]
print(arr)