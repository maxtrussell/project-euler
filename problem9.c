#include <math.h>
#include <stdio.h>

int pythagorean(int a, int b, int c) {
    return (pow(a, 2) + pow(b, 2) == pow(c, 2));
}

int main() {
    int a, b, c;
    for (a = 1; a < 1000; a++) {
        for (b = 1; b < 1000; b++) {
            for (c = 1; c < 1000; c++) {
                if (a + b + c == 1000 && pythagorean(a, b, c)) {
                    printf("a=%d, b=%d, c=%d\n", a, b, c);
                    return 0;
                }
            }
        }
    }
    return 1;
}
