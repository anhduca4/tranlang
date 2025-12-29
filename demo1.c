#include <stdio.h>

int main() {
    // Four smallest perfect numbers
    int perfect1 = 6;
    int perfect2 = 28;
    int perfect3 = 496;
    int perfect4 = 8128;

    unsigned long long product = (unsigned long long)perfect1 * perfect2 * perfect3 * perfect4;

    printf("The four smallest perfect numbers are:\n");
    printf("%d\n", perfect1);
    printf("%d\n", perfect2);
    printf("%d\n", perfect3);
    printf("%d\n", perfect4);

    return 0;
}
// Calculation steps
    printf("%d * %d * %d = %d\n", perfect1, perfect2, perfect3, perfect1 * perfect2 * perfect3);
    printf("%d * %d * %d * %d = %llu\n", perfect1, perfect2, perfect3, perfect4, product);
    printf("The product of all four perfect numbers is: %llu\n", product);
    printf("demo");