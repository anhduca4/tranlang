#include <stdio.h>

// Function to check perfect number
int is_perfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n/2; ++i) {
        if (n % i == 0) sum += i;
    }
    return sum == n;
}

int main() {
    int count = 0, num = 2;
    int perfects[4], idx = 0;
    while (count < 4) {
        if (is_perfect(num)) {
            perfects[idx++] = num;
            count++;
        }
        num++;
    }

    unsigned long long prod = 1;
    printf("The first 4 perfect numbers are: ");
    for (int i = 0; i < 4; ++i) {
        printf("%d ", perfects[i]);
        prod *= perfects[i];
    }
    printf("\nTheir product is: %llu\n", prod);
    return 0;
}