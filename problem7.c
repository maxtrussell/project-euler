#include <stdio.h>

int is_prime(int n, int primes[]) {
    int i;
    for (i = 0; i < 10001; i++) {
        if (primes[i] == 0)
            break;
        if (n % primes[i] == 0)
            return 0;
    }
    return 1;
}

int main() {
    int i = 0;  // primes index
    int n = 2;
    int primes[10001] = {0};  // initialize array to zero

    while (i < 10001) {
        if (is_prime(n, primes)) {
            primes[i] = n;
            i++;
        }
        n++;
    }

    printf("%d\n", primes[10000]);
    return 0;
}
