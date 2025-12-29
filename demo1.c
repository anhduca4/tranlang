#include <stdio.h>

// The smallest 10 known perfect numbers (as of 2024).
// Larger ones cannot be found by a standard algorithm in reasonable time or with standard C data types.
const char* perfects[10] = {
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

int main() {
    printf("The 10 smallest known perfect numbers are:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%2d: %s\n", i + 1, perfects[i]);
    }
    return 0;
}