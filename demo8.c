#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int a = 6;
    int b = 28;

    unsigned long long product = (unsigned long long)a * b ;

    printf("The product of numbers a=%d, b=%d, is: %llu\n", a, b, product);

    return 0;
}