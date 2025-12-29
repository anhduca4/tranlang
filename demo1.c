#include <stdio.h>

int main() {
    // The first four perfect numbers
    int p1 = 6;
    int p2 = 28;
    int p3 = 496;
    int p4 = 8128;
    unsigned long long product = 1ULL * p1 * p2 * p3 * p4;
    printf("The first four perfect numbers are:\n");
    printf("%d\n", p1);
    printf("%d\n", p2);
    printf("%d\n", p3);
    printf("%d\n", p4);
    printf("Their product is: %llu\n", product);

    printf("duc1");
    
    return 0;
}