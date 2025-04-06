#include <stdio.h>
#include <string.h>
int main(){
    char string[20];
    gets(string);
    int length = strlen(string);
    for(int i=0,j=length-1;i<=j;i++,j--){
            int temp = string[i]; 
            string[i]=string[j];
            string[j]=temp;
    }
    puts(st);
    return 0;
}