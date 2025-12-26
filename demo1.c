#include <stdio.h>

int main() {
    // The four smallest perfect numbers
    int num1 = 6;
    int num2 = 28;
    int num3 = 496;
    int num4 = 8128;

    // Because the result will be large, use long long for product
    long long product = 1LL * num1 * num2 * num3 * num4;

    printf("The product of the four smallest perfect numbers (%d, %d, %d, %d) is: %lld\n", num1, num2, num3, num4, product);

    return 0;
}