#include <stdio.h>

int main() {
    // The four smallest perfect numbers
    int p1 = 6, p2 = 28, p3 = 496, p4 = 8128;
    unsigned long long product = 1ULL * p1 * p2 * p3 * p4;

    printf("The four smallest perfect numbers are:\n");
    printf("%d\n", p1);
    printf("%d\n", p2);
    printf("%d\n", p3);
    printf("%d\n", p4);
    printf("The product of these numbers is: %llu\n", product);
    return 0;
}