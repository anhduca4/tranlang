#include <stdio.h>

int is_perfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; ++i) {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}

int main() {
    int count = 0, num = 2;
    while (count < 4) {
        if (is_perfect(num)) {
            printf("%d\n", num);
            count++;
        }
        num++;
    }
    printf("human");
    // What is this
    return 0;
}
