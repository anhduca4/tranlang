/*
 * This program finds the four smallest perfect numbers,
 * computes their product, and prints the result.
 *
 * A perfect number is a positive integer that is
 * equal to the sum of its proper positive divisors.
 * Examples: 6 (1 + 2 + 3 = 6), 28 (1 + 2 + 4 + 7 + 14 = 28)
 */

#include <stdio.h>

// Function to determine if a number is perfect
int is_perfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n/2; ++i) {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}

int main() {
    int found = 0;
    int number = 2;
    int perfects[4];
    unsigned long long product = 1;

    // Find the first 4 perfect numbers
    while (found < 4) {
        if (is_perfect(number)) {
            perfects[found] = number;
            ++found;
        }
        ++number;
    }

    printf("The first 4 perfect numbers are: ");
    for (int i = 0; i < 4; ++i) {
        printf("%d ", perfects[i]);
        product *= perfects[i];
    }
    printf("\nProduct of these numbers: %llu\n", product);

    return 0;
}