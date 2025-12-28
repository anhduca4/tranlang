#include <stdio.h>

int main() {
    // Four smallest perfect numbers: 6, 28, 496, 8128
    int nums[] = {6, 28, 496, 8128};
    unsigned long long product = 1;
    for (int i = 0; i < 4; ++i)
        product *= nums[i];

    printf("Product of four smallest perfect numbers (6, 28, 496, 8128): %llu\n", product);
    return 0;
}