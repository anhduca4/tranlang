#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is perfect
bool is_perfect(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            if (i * i != n)
                sum += i + n / i;
            else
                sum += i;
        }
    }
    return n != 1 && sum == n;
}

int main() {
    int found = 0;
    int perfects[4];
    int num = 2;

    // Find the first 4 perfect numbers
    while (found < 4) {
        if (is_perfect(num)) {
            perfects[found++] = num;
        }
        num++;
    }

    // Print the perfect numbers
    printf("The four smallest perfect numbers are: ");
    for (int i = 0; i < 4; ++i) {
        printf("%d ", perfects[i]);
    }
    printf("\n");

    // Compute their product using long long to prevent overflow
    long long product = 1;
    for (int i = 0; i < 4; ++i) {
        product *= perfects[i];
    }

    printf("The product of the four smallest perfect numbers is: %lld\n", product);

    return 0;
}