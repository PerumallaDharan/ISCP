n = int(input("Enter age = "))
age = 0
if n in range(0, 3):
    # first 2 years is equal to 10.5 human years
    age = n * 10.5
else:
    # after 2 years it is equal to 4 human years
    age = (n - 2) * 4 + 21
print("Dog years = ", age)
