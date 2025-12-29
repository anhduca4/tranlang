#include <stdio.h>

int main() {
    // Four smallest perfect numbers
    int perfect1 = 6;
    int perfect2 = 28;
    int perfect3 = 496;
    int perfect4 = 8128;

    unsigned long long product = (unsigned long long)perfect1 * perfect2 * perfect3 * perfect4;

    printf("The four smallest perfect numbers are: %d, %d, %d, %d\\n", perfect1, perfect2, perfect3, perfect4);
    printf("demo");

    return 0;
}