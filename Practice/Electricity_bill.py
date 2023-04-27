cmr = int(input())
pmr = int(input())
nou = cmr - pmr
price = 0
if nou in range(1, 101):
    price = nou * 2 + 10
    print("Price = ", price)
elif nou in range(101, 251):
    price = (nou - 100) * 3 + 20 + 200
    print("Price = ", price)
elif nou in range(251, 501):
    price = (nou - 250) * 4 + 30 + 200 + 450
    print("Price = ", price)
elif nou in range(501, 1001):
    price = (nou - 500) * 5 + 40 + 200 + 450 + 1000
    print("Price = ", price)
