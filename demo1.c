#include <stdio.h>
#include <string.h>

// The first 10 known perfect numbers as strings (for large values)
const char* perfect_numbers[10] = {
    "6",
    "28",
    "496",
    "8128",
    "33550336",
    "8589869056",
    "137438691328",
    "2305843008139952128",
    "265252859812191058636308480000000",
    "191561942608236107294793378084303638130997321548169216"
};

// Adds two non-negative integer strings, result into result (result must be large enough)
void big_sum(const char* x, const char* y, char* result, size_t len) {
    int len_x = strlen(x), len_y = strlen(y);
    int max_len = len_x > len_y ? len_x : len_y;
    char temp[max_len + 2]; // for carry and \0
    int i = len_x - 1, j = len_y - 1, k = max_len, carry = 0;
    temp[k + 1] = '\0';
    while (k >= 0) {
        int d1 = (i >= 0) ? x[i--] - '0' : 0;
        int d2 = (j >= 0) ? y[j--] - '0' : 0;
        int s = d1 + d2 + carry;
        temp[k--] = (s % 10) + '0';
        carry = s / 10;
    }
    const char* p = temp;
    while (*p == '0' && *(p+1)) p++;
    strncpy(result, p, len-1);
    result[len-1] = '\0';
}

int main() {
    printf("The 10 smallest perfect numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("%2d: %s\n", i + 1, perfect_numbers[i]);
    }

    // Sum the 5 largest perfect numbers (indices 5 to 9)
    char sum[200];
    strncpy(sum, perfect_numbers[5], sizeof(sum)-1);
    sum[sizeof(sum)-1] = '\0';
    for (int i = 6; i < 10; ++i) {
        char temp[200];
        big_sum(sum, perfect_numbers[i], temp, sizeof(temp));
        strncpy(sum, temp, sizeof(sum)-1);
        sum[sizeof(sum)-1] = '\0';
    }
    printf("\nSum of the 5 largest perfect numbers:\n%s\n", sum);

    return 0;
}