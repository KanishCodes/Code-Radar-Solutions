#include <stdio.h>
#include <string.h>
int main(){
    char string[20];
    fgets(string, sizeof(string), stdin);
    int length = strlen(string);
    for(int i=0,j=length-1;i<=j;i++,j--){
            int temp = string[i]; 
            string[i]=string[j];
            string[j]=temp;
    }
    puts(string);
    return 0;
}