#include <stdio.h>

int is_palindrone(int n) {
    int rev = 0, is_palindrone = 0, temp = n;
    
    while (temp != 0) {
        rev = rev * 10;
        rev = rev + temp % 10;
        temp = temp / 10;
    }
    
    if (rev == n) {
        is_palindrone = 1;
    } 
    return is_palindrone;
}

int main() {
    int i, j, max;
    max = -1;
    for (i = 100; i < 1000; i++) {
        for (j = 100; j < 1000; j++) {
            if (is_palindrone(i * j) && i * j > max) {
                max = i * j;
            }
        }
    }
    printf("%d\n", max);
    return 0;
}
