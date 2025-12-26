#include <stdio.h>

int main() {
    int perfect_numbers[4] = {6, 28, 496, 8128};
    unsigned long long product = 1;
    for (int i = 0; i < 4; ++i) {
        product *= perfect_numbers[i];
    }
    printf("Product of 4 smallest perfect numbers (6, 28, 496, 8128): %llu\n", product);
    return 0;
}