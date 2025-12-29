#include <stdio.h>

int main() {
    // The four smallest perfect numbers
    int perfect1 = 6;
    int perfect2 = 28;
    int perfect3 = 496;
    int perfect4 = 8128;

    unsigned long long product = (unsigned long long)perfect1 * perfect2 * perfect3 * perfect4;

    printf("The product of the four smallest perfect numbers is: %llu\n", product);

    return 0;
}