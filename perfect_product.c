#include <stdio.h>

// Program to calculate the product of the first four perfect numbers

int main() {
    int p1 = 6;
    int p2 = 28;
    int p3 = 496;
    int p4 = 8128;

    unsigned long long product = (unsigned long long)p1 * p2 * p3 * p4;

    printf("Product of the first four perfect numbers (6, 28, 496, 8128): %llu\n", product);

    return 0;
}