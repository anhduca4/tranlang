#include <stdio.h>

int main() {
    // The 4 smallest perfect numbers are:
    int a = 6, b = 28, c = 496, d = 8128;
    unsigned long long product = (unsigned long long)a * b * c * d;

    printf("The four smallest perfect numbers: %d, %d, %d, %d\\n", a, b, c, d);
    printf("Their product is: %llu\\n", product);
    return 0;
}