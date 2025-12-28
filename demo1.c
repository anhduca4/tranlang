#include <stdio.h>

// Function to check if a number is perfect
int is_perfect(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i)
                sum += n / i;
        }
    }
    return (n != 1) && (sum == n);
}

int main() {
    int found = 0;
    int num = 2;
    long long product = 1;
    printf("The first 4 perfect numbers are: ");
    while (found < 4) {
        if (is_perfect(num)) {
            printf("%d ", num);
            product *= num;
            found++;
        }
        num++;
    }
    printf("\\nTheir product is: %lld\\n", product);
    return 0;
}