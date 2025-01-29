#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    if (x>1){
        if(x%1==0){
            if(x%x==0){
                printf("Prime");
            }
        }
    }
    else{
        printf("Not Prime");
    }
    return 0;
}