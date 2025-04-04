#include <stdio.h>
int main(){
    char string[20];
    scanf("%s", string);
    for(int i=0,j=19;i<=j;i++,j--){
            int temp = string[i]; 
            string[i]=string[j];
            string[j]=temp;
    }
    printf("%s", string);
    return 0;
}