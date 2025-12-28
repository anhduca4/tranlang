#include <stdio.h>

int main() {
    // The four smallest perfect numbers
    int n1 = 6;
    int n2 = 28;
    int n3 = 496;
    int n4 = 8128;

    long long product = (long long)n1 * n2 * n3 * n4;

    printf("The product of the four smallest perfect numbers (%d, %d, %d, %d) is: %lld\n", n1, n2, n3, n4, product);
    return 0;
}