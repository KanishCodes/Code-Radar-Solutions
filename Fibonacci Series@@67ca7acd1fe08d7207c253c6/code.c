#include <stdio.h>
int fibonacciSeries(int n){
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(){
    int n;
    scanf("%d", &n);
    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }
    fibonacciSeries(n);
    return 0;
}

