#include <stdio.h>

int main() {
    // Four smallest perfect numbers
    int n1 = 6, n2 = 28, n3 = 496, n4 = 8128;
    unsigned long long product = (unsigned long long)n1 * n2 * n3 * n4;

    printf("The product of the four smallest perfect numbers is: %llu\\n", product);

    return 0;
}