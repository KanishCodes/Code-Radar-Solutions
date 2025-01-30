#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int t;
    scanf("%d", &t);
    if(t<=0){
        printf("Freezing");
    }
    else{
        printf("Above Freezing");
    }
    return 0;
}