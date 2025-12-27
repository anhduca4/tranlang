#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int a = 6;
    int b = 28;
    int c = rand() % 100 + 1; // random between 1-100
    int d = rand() % 100 + 1;
    int e = rand() % 100 + 1;

    unsigned long long product = (unsigned long long)a * b * c * d * e;

    printf("The product of numbers a=%d, b=%d, c=%d, d=%d, e=%d is: %llu\n", a, b, c, d, e, product);

    return 0;
}