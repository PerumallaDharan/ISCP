#Odd and even numbers
n=int(input("Enter total elements in the array = "))
arr = []
for i in range(0,n):
    arr.append(int(input("Enter element = ")))
odd=[]
even=[]
for i in range(0,n):
    if arr[i]%2==0:
        even.append(arr[i])
    elif arr[i]%2!=0:
        odd.append(arr[i])
print("Odd array = ",odd)
print("Even array = ",even)