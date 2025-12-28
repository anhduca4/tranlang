#include <stdio.h>

// Function to check if n is a perfect number
int is_perfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n/2; ++i) {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}

int main() {
    int count = 0;
    int number = 2;
    int perfect_numbers[4];
    long long product = 1;


    printf("The four smallest perfect numbers are: ");
    for(int i = 0; i < 4; ++i) {
        printf("%d ", perfect_numbers[i]);
    }
    printf("\nTheir product is: %lld\n", product);

    return 0;
}