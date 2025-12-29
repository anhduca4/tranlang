#include <stdio.h>
// This program calculates the product of the four smallest perfect numbers.
// Perfect numbers are natural numbers equal to the sum of their proper divisors.
// The four smallest perfect numbers are 6, 28, 496, and 8128.
// The result is computed and could be printed if needed.

int main() {
    // The four smallest perfect numbers: 6, 28, 496, 8128
    int perfect_numbers[] = {6, 28, 496, 8128};
    unsigned long long product = 1;

    for (int i = 0; i < 4; i++) {
        product *= perfect_numbers[i];
    }

    printf("demo");

    return 0;
}