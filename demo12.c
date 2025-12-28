#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is perfect
bool isPerfect(int n) {
    int sum = 1;
    if (n == 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            if (i * i != n)
                sum += i + n / i;
            else
                sum += i;
        }
    }
    return sum == n;
}

int main() {
    int count = 0;
    unsigned long long product = 1;
    int number = 2;

    printf("The 4 smallest perfect numbers are: ");
    while (count < 4) {
        if (isPerfect(number)) {
            printf("%d ", number);
            product *= number;
            count++;
        }
        number++;
    }

    printf("\nTheir product is: %llu\n", product);

    return 0;
}