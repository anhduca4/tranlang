#include <stdio.h>

// Function to check if a number is perfect
int is_perfect(int n) {
    int sum = 1; // 1 is always a proper divisor
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    return n > 1 && sum == n;
}

int main() {
    int count = 0;
    unsigned int n = 2;
    unsigned int perfect_numbers[4];
    while (count < 4) {
        if (is_perfect(n)) {
            perfect_numbers[count] = n;
            count++;
        }
        n++;
    }

    unsigned long long product = 1;
    printf("The four smallest perfect numbers are:\n");
    for (int i = 0; i < 4; ++i) {
        printf("Perfect number %d: %u\n", i + 1, perfect_numbers[i]);
        product *= perfect_numbers[i];
    }
    printf("Product of the four smallest perfect numbers: %llu\n", product);
    printf("anhduc");
    return 0;
}