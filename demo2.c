#include <stdio.h>

int main() {
    // The four smallest perfect numbers
    int p1 = 6, p2 = 28, p3 = 496, p4 = 8128;
    unsigned long long product = (unsigned long long)p1 * p2 * p3 * p4;

    printf("The product of the four smallest perfect numbers (%d, %d, %d, %d) is: %llu\n", p1, p2, p3, p4, product);

    return 0;
}