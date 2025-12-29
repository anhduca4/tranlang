#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is perfect
bool isPerfect(int n) {
    int sum = 1;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0)
            sum += i;
    }
    return n != 1 && sum == n;
}

int main() {
    int count = 0;
    int num = 2;
    int perfects[4];
    while (count < 4) {
        if (isPerfect(num)) {
            perfects[count] = num;
            count++;
        }
        num++;
    }

    long long product = 1;
    for (int i = 0; i < 4; i++) {
        product *= perfects[i];
    }

    printf("The four smallest perfect numbers are: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", perfects[i]);
    }
    printf("\nTheir product is: %lld\n", product);

    return 0;
}