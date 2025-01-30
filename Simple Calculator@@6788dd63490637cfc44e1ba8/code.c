#include <stdio.h>
int main() {
    float x,y; char op; 
    scanf("%f %f %c", &x,&y,&op); 
    if(op=='+'){
        printf("%.0f", x+y);
    }
    else if(op=='-'){
        printf("%.0f", x-y);
    }
    else if(op=='*'){
        printf("%.0f", x*y);
    }
    else{
        printf("%.0f", x/y);
    }

    return 0;
}