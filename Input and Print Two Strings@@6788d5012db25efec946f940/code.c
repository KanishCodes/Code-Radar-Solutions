#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char x[100];
    char y[100];
    scanf("%s %s", &x,&y);
    printf("You entered: %s and %s", x,y);
    return 0;
}