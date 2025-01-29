#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y,z;
    scanf("%d %d %d", &x,&y,&z);
    if(x>y>z){
        printf("%d",x);
    }
    return 0;
}