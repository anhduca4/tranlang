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
    unsigned long long product = 1;
    while (count < 4) {
        if (is_perfect(num)) {
            product *= num;
            count++;
        }
        num++;
    }
    printf("Tich cua 4 so hoan hao nho nhat la: %llu\n", product);
    return 0;
}
