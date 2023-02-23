a = int(input())
b = int(input())
c = int(input())
if a == b == c:
    print("Equilateral triangle")
elif a == b or b == c or a == c:
    print("Isosceles triangle")
else:
    print("Scalen triangle")
