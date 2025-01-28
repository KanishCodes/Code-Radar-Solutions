#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y,z;
    scanf("%d %d %d", &x,&y,&z);
    printf("Average: %.2f", (x+y+z)/3.0);
    return 0;
}