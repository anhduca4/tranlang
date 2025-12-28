#include <stdio.h>

int main() {
    // The four smallest perfect numbers
    int nums[] = {6, 28, 496, 8128};
    unsigned long long product = 1;
    for(int i = 0; i < 4; ++i) {
        product *= nums[i];
    }
    
    printf("The product of the 4 smallest perfect numbers is: %llu\n", product);

    return 0;
}