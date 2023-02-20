#Minimum in array
n=int(input("Enter the number of elements in the array = "))
arr = []
for i in range(0,n):
    arr.append(int(input("Enter element = ")))
min=arr[0]
for i in range(0,n):
    if arr[0]>arr[i]:
        min=arr[i]
print("Minimum element = ", min)