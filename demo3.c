#include <stdio.h>

int main() {
    // The four smallest perfect numbers
    int p1 = 6, p2 = 28, p3 = 496, p4 = 8128;
    long long product = 1LL * p1 * p2 * p3 * p4;

    printf("The four smallest perfect numbers are: %d, %d, %d, %d\n", p1, p2, p3, p4);
    printf("Their product is: %lld\n", product);

    return 0;
}