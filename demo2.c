#include <stdio.h>

int main() {
    // The four smallest perfect numbers
    int perfect1 = 6;
    int perfect2 = 28;
    int perfect3 = 496;
    int perfect4 = 8128;

    unsigned long long product = 1;
    product *= perfect1;
    product *= perfect2;
    product *= perfect3;
    product *= perfect4;

    printf("The four smallest perfect numbers are: %d, %d, %d, %d\n", perfect1, perfect2, perfect3, perfect4);
    printf("The product of the four smallest perfect numbers is: %llu\n", product);
    return 0;
}