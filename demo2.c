#include <stdio.h>

int main() {
    // Four smallest perfect numbers
    int a = 6;
    int b = 28;
    int c = 496;
    int d = 8128;
    long long product = (long long)a * b * c * d;

    printf("Product of the four smallest perfect numbers (%d, %d, %d, %d) is: %lld\n", a, b, c, d, product);

    return 0;
}