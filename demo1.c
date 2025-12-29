#include <stdio.h>

// Function to check if a number is perfect
int is_perfect(unsigned int n) {
    unsigned int sum = 1;
    for (unsigned int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i != n)
                sum += i + (n / i);
            else
                sum += i;
        }
    }
    return (n != 1 && sum == n);
}

// Simple bubble sort for small arrays
void sort(unsigned int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                unsigned int t = arr[j]; arr[j] = arr[j+1]; arr[j+1] = t;
            }
        }
    }
}

int main() {
    unsigned int perfects[10];
    int count = 0;
    unsigned int number = 2;
    while (count < 10) {
        if (is_perfect(number)) {
            perfects[count] = number;
            count++;
        }
        number++;
        if (number > 100000000) break;
    }

    // Print all perfect numbers found
    for (int i = 0; i < count; i++)
        printf("%u\n", perfects[i]);

    // Sort perfect numbers
    sort(perfects, count);

    // Sum the 5 largest (or all if less than 5)
    unsigned long long sum = 0;
    int k = count < 5 ? count : 5;
    for (int i = count - k; i < count; i++)
        sum += perfects[i];

    printf("Sum of 5 largest: %llu\n", sum);

    return 0;
}