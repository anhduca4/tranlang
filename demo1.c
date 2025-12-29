#include <stdio.h>

/*
 * This program computes and prints the product of the
 * four smallest perfect numbers: 6, 28, 496, and 8128.
 * A perfect number is a positive integer that is equal
 * to the sum of its proper divisors (excluding itself).
 */

int main() {
    int perfect_numbers[4] = {6, 28, 496, 8128};
    unsigned long long product = 1;
    for (int i = 0; i < 4; i++) {
        product *= perfect_numbers[i];
    }
    printf("The product of the four smallest perfect numbers (6, 28, 496, 8128) is: %llu\n", product);
    return 0;
}