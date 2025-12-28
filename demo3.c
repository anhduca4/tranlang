#include <stdio.h>

int main() {
    // The four smallest perfect numbers
    int nums[] = {6, 28, 496, 8128};
    long long product = 1;
    for (int i = 0; i < 4; ++i) {
        product *= nums[i];
    }
    printf("The product of the four smallest perfect numbers (6, 28, 496, 8128) is: %lld\n", product);
    return 0;
}