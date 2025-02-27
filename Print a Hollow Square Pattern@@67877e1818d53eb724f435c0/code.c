#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Input the size of the square

    for(int i = 1; i <= N; i++) { // Loop through rows
        for(int j = 1; j <= N; j++) { // Loop through columns
            // Print '*' for the border or for the first and last row/column
            if(i == 1 || i == N || j == 1 || j == N) {
                printf("*");
            } else {
                printf(" "); // Print space for inner part
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
