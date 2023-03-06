n=int(input())
grade=[]
for i in range(n):
    m=int(input())
    grade.append(m)
for i in range(n):
    num=grade[i]
    if(num<38):
        print(num)
    else:
        q=num//5
        if((q+1)*5-num<3):
            print((q+1)*5)
        else:
            print(num)
            