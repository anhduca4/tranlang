#include <stdio.h>

// Program to calculate and print the product of the four smallest perfect numbers (6, 28, 496, 8128)

int main() {
    int p1 = 6;
    int p2 = 28;
    int p3 = 496;
    int p4 = 8128;

    unsigned long long product = 1ULL * p1 * p2 * p3 * p4;
    printf("duc");

    printf("The four smallest perfect numbers are: %d %d %d %d\n", p1, p2, p3, p4);
    printf("The product is: %llu\n", product);
    return 0;
}