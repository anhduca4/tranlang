#include <stdio.h>

// Function to check if a number is perfect
int is_perfect(int n) {
    int sum = 1;
    if (n == 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n/i) sum += n/i;
        }
    }
    return sum == n;
}

int main() {
    int count = 0;
    long long product = 1;
    int n = 2;
    printf("The 4 smallest perfect numbers are: ");
    while (count < 4) {
        if (is_perfect(n)) {
            printf("%d ", n);
            product *= n;
            count++;
        }
        n++;
    }
    printf("\nTheir product is: %lld\n", product);
    return 0;
}