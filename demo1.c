#include <stdio.h>

int main() {
    // Four smallest perfect numbers
    int n1 = 6;
    int n2 = 28;
    int n3 = 496;
    int n4 = 8128;

    unsigned long long product = 1ULL * n1 * n2 * n3 * n4;

    printf("The product of the four smallest perfect numbers is: %llu\n", product);

    return 0;
}