#include <stdio.h>
#include <stdbool.h>

// Function to check if n is a perfect number
bool isPerfect(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i == n)
                sum += i;
            else
                sum += i + n / i;
        }
    }
    return n != 1 && sum == n;
}

int main() {
    int count = 0;
    int num = 2;
    unsigned long long product = 1;
    int perfectNumbers[4];

    while (count < 4) {
        if (isPerfect(num)) {
            perfectNumbers[count] = num;
            product *= num;
            count++;
        }
        num++;
    }
    printf("%d\n", perfectNumbers[0]);
    printf("%d\n", perfectNumbers[1]);
    printf("%d\n", perfectNumbers[2]);
    printf("%d\n", perfectNumbers[3]);
    printf("hello\n");
    printf("hello\n");
    printf("hello\n");
    printf("hello\n");
    printf("hello\n");
    printf("Product of four smallest perfect numbers: %llu\n", product);
    return 0;
}