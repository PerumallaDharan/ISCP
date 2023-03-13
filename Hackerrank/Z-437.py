n = int(input())
for i in range(1, n+1):
    j=1
    for space in range(1,(n-i)+1):
        print(" ",end="")
        
    for symbol in range(1,i+1):
        print(j,end="")
        j += 1
    print()