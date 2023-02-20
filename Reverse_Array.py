#Reverse array
n=int(input("Enter total elements in the array = "))
arr = []
for i in range(0,n):
    arr.append(int(input("Enter element = ")))
rev_arr=[]
for i in range(len(arr) - 1, -1, -1):
    rev_arr.append(arr[i])
print("Reversed array = ",rev_arr)