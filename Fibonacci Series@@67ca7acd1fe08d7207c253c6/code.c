#include <stdio.h>

int fibonacciSeries(int b) {
    if (b==0) return 0;
    if (b==1) return 1;
    for (int i = 0; i < b; i++) {
        printf("%d ", fibonacciSeries(i));  // Print each Fibonacci number
    }
    return 0;
}



