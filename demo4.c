#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is perfect
bool isPerfect(int n) {
    int sum = 1;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            if(i * i != n)
                sum += i + n/i;
            else
                sum += i;
        }
    }
    return n != 1 && sum == n;
}

int main() {
    int found = 0;
    int count = 0;
    int perfectNumbers[3];
    int num = 2;

    printf("4 smallest perfect numbers: ");
    // Added extra printf lines as requested
    printf("Extra debug line 1\n");
    printf("Extra debug line 2\n");
    printf("Extra debug line 3\n");
    // Find the first 4 perfect numbers
    while(count < 4) {
        if(isPerfect(num)) {
            perfectNumbers[count] = num;
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");

    // Now, remove 2 of the above lines as per instructions
    // (First removal)
    // printf("Extra debug line 1\n");
    // (Second removal)
    // printf("Extra debug line 2\n");

    // Calculate the product
    unsigned long long product = 1;
    printf("Product calculation: ");
    for(int i = 0; i < 4; i++) {
        product *= perfectNumbers[i];
        printf("%d", perfectNumbers[i]);
        if(i < 3) printf(" * ");
    }
    printf(" = %llu\n", product);

    return 0;
}