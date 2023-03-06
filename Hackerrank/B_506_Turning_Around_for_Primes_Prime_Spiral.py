from math import sqrt

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

def spiralSplicer(inp):
    prime_c = sum([1 for i in range(2, inp + 1) if is_prime(i)])
    step_count = 1
    step_limit = 2
    adder = 1
    x, y = 0, 0
    for n in range(2, prime_c + 1):
        if step_count <= .5 * step_limit:
            x += adder
        elif step_count <= step_limit:
            y += adder
        if step_count == step_limit:
            adder *= -1
            step_limit += 2
            step_count = 0
        step_count += 1
    return x, y

num_cases = int(input())
inputs = [int(input()) for _ in range(num_cases)]
coordinates = [spiralSplicer(inp) for inp in inputs]
print('\n'.join([f'{x} {y}' for x, y in coordinates]))