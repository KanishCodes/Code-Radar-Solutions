#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int number,divisor;
    scanf("%d %d",&number, &divisor);
    if (number%divisor==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}