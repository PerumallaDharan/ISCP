n, m, a = map(int, input().split())
if m % a == 0:
    r = m // a
else:
    r = m // a + 1

if n % a == 0:
    w = n // a
else:
    w = n // a + 1

print(r * w)
