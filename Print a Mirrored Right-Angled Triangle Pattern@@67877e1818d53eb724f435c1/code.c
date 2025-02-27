#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Input the size of the triangle

    for(int i = 1; i <= N; i++) { // Loop through rows
        // Print spaces for alignment
        for(int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}

