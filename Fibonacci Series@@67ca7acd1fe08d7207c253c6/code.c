#include <stdio.h>

int fibonacciSeries(int b) {
    for (int i = 0; i < b; i++) {
        printf("%d ", fibonacciSeries(i));
    }
    printf("\n");
    return 0;
}



