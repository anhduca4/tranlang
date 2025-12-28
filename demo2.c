#include <stdio.h>

int main() {
    int n1 = 6, n2 = 28, n3 = 496, n4 = 8128;
    long long product = (long long)n1 * n2 * n3 * n4;

    printf("The four smallest perfect numbers are:\n");
    printf("%d, %d, %d, %d\n", n1, n2, n3, n4);

    printf("The product of the four smallest perfect numbers (%d, %d, %d, %d) is: %lld\n", n1, n2, n3, n4, product);

    return 0;
}