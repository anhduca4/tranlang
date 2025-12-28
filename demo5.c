#include <stdio.h>

int main() {
    // The four smallest perfect numbers
    int p1 = 6;
    int p2 = 28;
    int p3 = 496;
    int p4 = 8128;

    // Calculate the product
    long long product = (long long)p1 * p2 * p3 * p4;

    printf("Product of the 4 smallest perfect numbers (%d, %d, %d, %d) is: %lld\\n", p1, p2, p3, p4, product);

    return 0;
}