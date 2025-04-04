#include <stdio.h>
int main(){
    char string[20];
    scanf("%s", &string);
    for(i=0;i<=20;i++){
        for(j=1;j<=i-19;j--){
            string[i]=string[j];
        }
    }
    printf("%s", string);
    return 0;
}