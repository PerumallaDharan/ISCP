#Maximum in array
n=int(input("Enter the number of elements in the array = "))
arr = []
for i in range(0,n):
    arr.append(int(input("Enter element = ")))
max=arr[0]
for i in range(1,n):
    if arr[i] > max:
        max=arr[i]
print("Maximum element = ", max)
