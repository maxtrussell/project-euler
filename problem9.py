
def pythagorean(a, b, c):
    return a**2 + b**2 == c**2

def main():
    for a in range(1, 1000):
        for b in range(1, 1000):
            for c in range(1, 1000):
                if a + b + c == 1000 and pythagorean(a, b, c):
                    return a, b, c

print(main())
