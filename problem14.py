cache = {}

def collatz(n, i=1):
    if n == 1:
        return i
    i += 1
    if n in  cache:
        return i + cache[n]
    elif n % 2 == 0:
        return collatz(n / 2, i)
    else:
        return collatz(3 * n + 1, i)

max_chain = 0
starting_num = 0
for num in range(2, 1000000):
    chain = collatz(num)
    cache[num] = chain
    if chain > max_chain:
        max_chain = chain
        starting_num = num

print(starting_num)    
