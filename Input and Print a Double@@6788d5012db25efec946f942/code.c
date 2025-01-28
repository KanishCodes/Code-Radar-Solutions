#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float x;
    scanf("%.4f", &x);
    printf("You entered: %.4f", x);
    return 0;
}