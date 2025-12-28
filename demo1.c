#include <stdio.h>

// Program to calculate and print the product of the four smallest perfect numbers (6, 28, 496, 8128)

int main() {
    int p1 = 6;
    int p2 = 28;
    int p3 = 496;
    int p4 = 8128;

    unsigned long long product = 1ULL * p1 * p2 * p3 * p4;

    printf("The four smallest perfect numbers are:\n");
    printf("%d\n", p1);
    printf("%d\n", p2);
    printf("%d\n", p3);
    printf("%d\n", p4);

    printf("The product of the four smallest perfect numbers (6, 28, 496, 8128) is: %llu\n", product);

    return 0;
}