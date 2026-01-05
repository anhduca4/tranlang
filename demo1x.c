#include <stdio.h>

int main() {
    // The first 4 perfect numbers
    int a = 6, b = 28, c = 496, d = 8128;
    unsigned long long product = (unsigned long long)a * b * c * d;

    printf("The product of the four smallest perfect numbers (6, 28, 496, 8128) is: %llu\n", product);
    return 0;
}