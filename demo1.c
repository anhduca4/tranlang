#include <stdio.h>

int main() {
    // Four smallest perfect numbers
    int perfect_numbers[4] = {6, 28, 496, 8128};
    unsigned long long product = 1;

    for (int i = 0; i < 4; i++) {
        product *= perfect_numbers[i];
    }

    printf("The product of the 4 smallest perfect numbers (6, 28, 496, 8128) is: %llu\n", product);
    return 0;
}