b = int(input("Enter berth number="))
if b % 8 == 1 or b % 8 == 4:
    print("LB")
elif b % 8 == 2 or b % 8 == 5:
    print("MB")
elif b % 8 == 3 or b % 8 == 6:
    print("UB")
elif b % 8 == 7:
    print("SLB")
else:
    print("SUB")
