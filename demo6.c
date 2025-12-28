#include <stdio.h>

int main() {
    // The first four perfect numbers
    int a = 6, b = 28, c = 496, d = 8128;
    long long product = (long long)a * b * c * d;
    printf("The four smallest perfect numbers are: %d, %d, %d, %d\\n", a, b, c, d);
    printf("Their product is: %lld\\n", product);
    return 0;
}