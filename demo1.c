#include <stdio.h>

// The first 10 known perfect numbers (as strings for large values)
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

int main() {
    printf("The 10 smallest perfect numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("%2d: %s\n", i + 1, perfect_numbers[i]);
    }
    return 0;
}