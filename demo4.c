#include <stdio.h>

int main() {
    // Four smallest perfect numbers
    int p1 = 6, p2 = 28, p3 = 496, p4 = 8128;
    long long product = (long long)p1 * p2 * p3 * p4;
    printf("The four smallest perfect numbers: %d, %d, %d, %d\\n", p1, p2, p3, p4);
    printf("Their product: %lld\\n", product);
    return 0;
}