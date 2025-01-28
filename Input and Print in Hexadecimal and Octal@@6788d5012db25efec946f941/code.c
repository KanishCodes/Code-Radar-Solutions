#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d", &x);
    printf("Hexadecimal: %x\nOctal: %o", x);
    return 0;
}