
def is_prime(n, primes):
    for p in primes:
        if n % p == 0:
            return False
    return True

i = 2
primes = []
while True:
    if len(primes) >= 10001:
        break
    if is_prime(i, primes):
        primes.append(i)
    i += 1
print(primes[10000])
