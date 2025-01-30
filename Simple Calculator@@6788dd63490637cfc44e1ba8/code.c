#include <stdio.h>
int main() {
    float x,y; char op; 
    scanf("%f %f %c", &x,&y,&op); 
    if(op=='+'){printf("%.0f", x+y);}
    else if(op=='-'){printf("%.0f", x-y);}
    else if(op=='*'){printf("%.0f", x*y);}
    else if(op =='/'){printf("%.0f", x/y);}
    else{printf("error in case of any error");}

    return 0;
}