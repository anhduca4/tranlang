#include <stdio.h>

// Function to check for perfect number
int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n/2; ++i) {
        if (n % i == 0) sum += i;
    }
    return sum == n;
}

int main() {
    int count = 0;
    int num = 2;
    int perfect[4];
    while (count < 4) {
        if (isPerfect(num)) {
            perfect[count] = num;
            ++count;
        }
        ++num;
    }
    // Calculate product
    unsigned long long product = 1;
    for (int i = 0; i < 4; ++i) {
        product *= perfect[i];
    }

    printf("The 4 smallest perfect numbers are: %d, %d, %d, %d\n", 
           perfect[0], perfect[1], perfect[2], perfect[3]);
    printf("Their product is: %llu\n", product);

    return 0;
}