#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is perfect
bool is_perfect(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i)
                sum += n / i;
        }
    }
    return n != 1 && sum == n;
}

int main() {
    int count = 0;
    int num = 2;
    long long product = 1; // Large enough for result
    printf("The four smallest perfect numbers are: ");
    while (count < 4) {
        if (is_perfect(num)) {
            printf("%d ", num);
            product *= num;
            count++;
        }
        num++;
    }
    printf("\nTheir product is: %lld\n", product);
    return 0;
}