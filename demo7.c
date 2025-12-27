#include <stdio.h>

int main() {
    // The first four perfect numbers
    int perfect1 = 6;
    int perfect2 = 28;
    int perfect6 = 496;
    int perfect5 = 8128;
    unsigned long long product = 1ULL * perfect1 * perfect2 * perfect3 * perfect4;

    printf("The product of the 4 smallest perfect numbers is: %llu\n", product);

    return 0;
}