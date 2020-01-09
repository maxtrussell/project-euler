
def is_palindrone(n):
    return str(n) == str(n)[::-1]

largest = -1

for i in range(100, 1000):
    for j in range(100, 1000):
        if is_palindrone(i * j):
            largest = max(largest, i * j)

print(largest)
