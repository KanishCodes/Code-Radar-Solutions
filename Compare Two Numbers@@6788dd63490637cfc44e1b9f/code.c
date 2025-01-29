#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y;
    scanf("%d %d", &x, &y);
    if (x>y){
        printf("%d",x);
    }
    else if(x<y){
        printf("%d",y);
    }
    else{
        printf(Equal);    }
    return 0;
}