#include <stdio.h>

#define P_SIZE 2000000

int is_prime(int n, int primes[]) {
    int i;
    for (i = 0; i < P_SIZE; i++) {
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
    int primes[P_SIZE] = {0};  // initialize array to zero

    while (n < 2000000) {
        if (is_prime(n, primes)) {
            primes[i] = n;
            i++;
        }
        n++;
    }

    long sum = 0;
    for (i = 0; i < P_SIZE; i++) {
        if (primes[i] == 0)
            break;
        sum += primes[i];
    }

    printf("%ld\n", sum);
    return 0;
}
