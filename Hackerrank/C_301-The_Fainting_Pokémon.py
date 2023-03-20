k = int(input())
my_p = k
n = int(input())
a = list(map(int, input().split()))
count = 1
i = 0

while i < n:
    if a[i] >= k:
        count = -1
        break
    else:
        if a[i] >= my_p:
            count = count + 1
            my_p = k
        else:
            my_p = my_p - a[i]
            i = i + 1
print(count)
