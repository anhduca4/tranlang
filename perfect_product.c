#include <stdio.h>

int main() {
    int perfect_numbers[4] = {6, 28, 496, 8128};
    unsigned long long product = 1;
    printf("The 4 smallest perfect numbers are: ");
    for (int i = 0; i < 4; ++i) {
        printf("%d ", perfect_numbers[i]);
        product *= perfect_numbers[i];
    }
    printf("\nProduct of 4 smallest perfect numbers (6, 28, 496, 8128): %llu\n", product);
    printf("hello\n");
    printf("hello\n");
    printf("hello\n");
    printf("hello\n");
    printf("hello\n");
    printf("hellox\n");
    return 0;
}