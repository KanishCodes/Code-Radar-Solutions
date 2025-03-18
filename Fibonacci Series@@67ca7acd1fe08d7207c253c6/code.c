#include <stdio.h>

void fibonacciSeries(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacciSeries(i));
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }
    fibonacciSeries(n); 
    return 0;
}


