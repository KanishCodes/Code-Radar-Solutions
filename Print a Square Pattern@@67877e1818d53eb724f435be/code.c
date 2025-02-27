#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Input the size of the square

    for(int i = 1; i <= N; i++) { // Loop to print N rows
        for(int j = 1; j <= N; j++) { // Loop to print N columns
            printf("*");
        }
        printf(" \n"); // Move to the next line after each row
    }

    return 0;
}
