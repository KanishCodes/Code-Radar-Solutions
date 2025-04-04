#include <stdio.h>
#include <string.h>
int main(){
    char string[20];
    scanf("%s", string);
    int length = strlen(string);
    for(int i=0,j=length-1;i<=j;i++,j--){
            int temp = string[i]; 
            string[i]=string[j];
            string[j]=temp;
    }
    printf("%s", string);
    return 0;
}