#include <stdio.h>
int main() {
    int x,y; 
    char op; 
    scanf("%d %d %c", &x,&y,&op); 
    if(op=='+'){
        printf("%d", x+y);
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