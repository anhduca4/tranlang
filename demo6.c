#include <stdio.h>

// This program computes the product of the four smallest perfect numbers and prints the result.
//
// The first four perfect numbers are:
//   6, 28, 496, 8128

int main() {
    int perfect1 = 6;
    int perfect2 = 28;
    int perfect3 = 496;
    int perfect4 = 8128;
    long long product = (long long)perfect1 * perfect2 * perfect3 * perfect4;

    printf("The product of the four smallest perfect numbers (6, 28, 496, 8128) is: %lld\n", product);

    return 0;
}