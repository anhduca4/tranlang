#include <stdio.h>

int main() {
    // The 4 smallest perfect numbers
    int p1 = 6;
    int p2 = 28;
    int p3 = 496;
    int p4 = 8128;

    unsigned long long product = (unsigned long long)p1 * p2 * p3 * p4;

    printf("The product of the 4 smallest perfect numbers (%d, %d, %d, %d) is: %llu\n", p1, p2, p3, p4, product);

    return 0;
}