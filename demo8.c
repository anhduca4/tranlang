#include <stdio.h>

int main() {
    // The 4 smallest perfect numbers
    int a = 6;
    int b= 0;

    unsigned long long product = (unsigned long long)a * b;

    printf("The product of the two smallest perfect numbers (%d, %d) is: %llu\n", a, b, product);

    return 0;
}