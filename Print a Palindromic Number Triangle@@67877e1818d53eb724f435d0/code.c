#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Input the size of the triangle

    for (int i = 1; i <= N; i++) {
        // Print spaces for right alignment
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }

        // Print first half (increasing numbers)
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print second half (decreasing numbers)
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
// Your code here...