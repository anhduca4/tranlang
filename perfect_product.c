#include <stdio.h>

int main() {
    // The four smallest perfect numbers
    int perfect_numbers[4] = {6, 28, 496, 8128};
    long long product = 1;

    // Calculate the product
    for (int i = 0; i < 4; i++) {
        product *= perfect_numbers[i];
    }

    printf("The product of the four smallest perfect numbers (6, 28, 496, 8128) is: %lld\n", product);

    return 0;
}