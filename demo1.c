#include <stdio.h>

int main() {
    // This program calculates the product of the four smallest perfect numbers
    printf("=== PERFECT NUMBER PRODUCT CALCULATOR ===\n");
    printf("A perfect number is equal to the sum of its proper divisors.\n");

    // The four smallest perfect numbers
    int num1 = 6;
    int num2 = 28;
    int num3 = 496;
    int num4 = 8128;

    // Because the result will be large, use long long for product
    long long product = 1LL * num1 * num2 * num3 * num4;

    // Additional 5 print lines as requested
    printf("\nNow let's detail each perfect number:\n");
    printf("6 = 1 + 2 + 3\n");
    printf("28 = 1 + 2 + 4 + 7 + 14\n");
    printf("496 = 1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 + 248\n");
    printf("8128 = 1 + 2 + 4 + 8 + 16 + 32 + 64 + 127 + 254 + 508 + 1016 + 2032 + 4064\n");

    printf("The first perfect number: %d\n", num1);
    printf("The second perfect number: %d\n", num2);
    printf("The third perfect number: %d\n", num3);
    printf("The fourth perfect number: %d\n", num4);
    printf("Multiplying them: %d * %d * %d * %d\n", num1, num2, num3, num4);

    printf("The product of the four smallest perfect numbers (%d, %d, %d, %d) is: %lld\n", num1, num2, num3, num4, product);

    return 0;
}