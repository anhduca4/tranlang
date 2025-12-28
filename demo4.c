#include <stdio.h>

int main() {
    // The four smallest perfect numbers:
    int p1 = 6;
    int p2 = 28;
    int p3 = 496;
    int p4 = 8128;

    // Calculating the product
    unsigned long long product = 1ULL * p1 * p2 * p3 * p4;

    printf("The product of the four smallest perfect numbers is: %llu\\n", product);

    return 0;
}