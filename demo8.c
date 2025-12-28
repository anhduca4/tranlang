#include <stdio.h>

// Function to check if a number is perfect
int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) sum += i;
    }
    return sum == n;
}

int main() {
    int count = 0;
    int num = 2;
    long long product = 1;

    printf("The first 4 perfect numbers are: ");
    while (count < 4) {
        if (isPerfect(num)) {
            printf("%d ", num);
            product *= num;
            count++;
        }
        num++;
    }
    printf("\nThe product of the first 4 perfect numbers is: %lld\n", product);
    return 0;
}