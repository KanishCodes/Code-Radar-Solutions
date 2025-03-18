#include <stdio.h>

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
int fibonacciSeries(int n){
    return n + fibonacciSeries(n-1);
    return 0;
}
