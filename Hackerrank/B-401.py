x1, y1, x2, y2 = map(int, input().split())
x3, y3, x4, y4 = map(int, input().split())

slope1 = (y2 - y1) / (x2 - x1) if (x2 - x1) != 0 else float("inf")
slope2 = (y4 - y3) / (x4 - x3) if (x4 - x3) != 0 else float("inf")

if slope1 == slope2:
    print("yes")
else:
    print("no")
