#include <stdio.h>

int main() {
    // The four smallest perfect numbers
    int n1 = 6, n2 = 28, n3 = 496, n4 = 8128;
    long long product = (long long)n1 * n2 * n3 * n4;
    printf("The product of the four smallest perfect numbers is: %lld\n", product);
    return 0;
}