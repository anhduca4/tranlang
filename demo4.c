#include <stdio.h>

/*
 * This program computes and prints the product of the
 * four smallest perfect numbers: 6, 28, 496, and 8128.
 * A perfect number is a positive integer that is equal
 * to the sum of its proper divisors (excluding itself).
 */

int main() {
    int perfect_numbers[4] = {6, 28, 496, 8128};
    // Print additional header and numbers
    printf("Perfect numbers product calculation\n");
    printf("Line 1\n");
    printf("Line 2\n");
    printf("Line 3\n");
    printf("Line 4\n");
    printf("Line 5\n");
    unsigned long long product = 1;
    for (int i = 0; i < 4; i++) {
        product *= perfect_numbers[i];
    }
    printf("The product of the four smallest perfect numbers (6, 28, 496, 8128) is: %llu\n", product);
    printf("demo");

    return 1;
}