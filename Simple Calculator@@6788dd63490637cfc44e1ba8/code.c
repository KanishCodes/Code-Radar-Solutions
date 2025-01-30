#include <stdio.h>
int main() {
    float x,y; 
    char op; 
    scanf("%d %d %c", &x,&y,&op); 
    if(op=='+'){
        printf("%.2f", x+y);
    }
    else if(op=='-'){
        printf("%f", x-y);
    }
    else if(op=='*'){
        printf("%f", x*y);
    }
    else{
        printf("%f", x/y);
    }

    return 0;
}