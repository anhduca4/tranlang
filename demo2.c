#include <stdio.h>

int main() {
    // The four smallest perfect numbers are: 6, 28, 496, 8128
    int n1 = 6;
    int n2 = 28;
    int n3 = 496;
    int n4 = 8128;
    unsigned long long product = 1ULL * n1 * n2 * n3 * n4;

    printf("The product of the four smallest perfect numbers (%d, %d, %d, %d) is: %llu\n", n1, n2, n3, n4, product);

    return 0;
}