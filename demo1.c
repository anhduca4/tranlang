#include <stdio.h>

// Function to check if a number is perfect
int is_perfect(unsigned int n) {
    unsigned int sum = 1;
    for (unsigned int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i != n)
                sum += i + (n / i);
            else
                sum += i;
        }
    }
    return (n != 1 && sum == n);
}

int main() {
    int count = 0;
    unsigned int number = 2;
    // Print up to 10 perfect numbers found
    while (count < 10) {
        if (is_perfect(number)) {
            printf("%u\n", number);
            count++;
        }
        number++;
        // Prevent endless search in demo: stop at a reasonable bound
        if (number > 100000000) break;
    }
    return 0;
}