#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y,z;
    scanf("%d %d", &x,&y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("%d %d", x,y);
       return 0;
}