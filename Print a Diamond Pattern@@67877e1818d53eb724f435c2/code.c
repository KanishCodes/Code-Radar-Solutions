#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Input the size of the diamond (height of the top half)

    // Upper part of the diamond
    for (int i = 1; i <= N; i++) {
        // Print spaces before stars
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    // Lower part of the diamond
    for (int i = N - 1; i >= 1; i--) {
        // Print spaces before stars
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
