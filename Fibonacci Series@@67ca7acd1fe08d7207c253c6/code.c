#include <stdio.h>

int fibonacciSeries(int b) {
    if (b==0) return 0;
    if (b==1) return 1;
    return fibonacciSeries(b-1) + fibonacciSeries(b-2);
    return 0;
}



