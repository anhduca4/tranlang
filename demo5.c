#include <stdio.h>

int main() {
    // The four smallest perfect numbers
    int p1 = 6;
    int p2 = 28;
    int p3 = 496;
    int p4 = 8128;

    // Print the 4 perfect numbers
    printf("The 4 smallest perfect numbers are: %d, %d, %d, %d\\n", p1, p2, p3, p4);

    // Calculate the product
    long long product = (long long)p1 * p2 * p3 * p4;

    printf("Product of the 4 smallest perfect numbers is: %lld\\n", product);

    return 0;
}