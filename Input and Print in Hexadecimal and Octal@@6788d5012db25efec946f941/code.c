#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d", &x);
    printf("Hexadecimal: %X\nOctal: %o", x,x);
    return 0;
}