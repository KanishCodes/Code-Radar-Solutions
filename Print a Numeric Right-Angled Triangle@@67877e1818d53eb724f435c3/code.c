#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Input the size of the triangle

    for(int i = 1; i <= N; i++) { // Loop through each row
        for(int j = 1; j <= i; j++) { // Loop through each number in the row
            printf("%d", j); // Print the number j
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}

