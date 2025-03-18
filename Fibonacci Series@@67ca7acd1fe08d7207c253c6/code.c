#include <stdio.h>

int fibonacciSeries(int b) {
    for (int i = 0; i < b; i++) {
        printf("%d ", fibonacciSeries(i));  // Print each Fibonacci number
    }
    return 0;
}



