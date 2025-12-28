#include <stdio.h>

int main() {
    // 4 smallest perfect numbers
    int a = 6, b = 28, c = 496, d = 8128;
    unsigned long long product = (unsigned long long)a * b * c * d;

    printf("The product of the 4 smallest perfect numbers is: %llu\n", product);

    return 0;
}