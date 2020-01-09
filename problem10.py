
def is_prime(n, primes):
    for p in primes:
        if n % p == 0:
            return False
    return True

i = 2
primes = []
progress = 0
while i < 2000000:
    if is_prime(i, primes):
        primes.append(i)
    i += 1
print(sum(primes))
