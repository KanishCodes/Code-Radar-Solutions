#include <stdio.h>
#include <string.h>
int main(){
    char string[20];
    scanf("%s", string);
    int length = strlen(string);
    printf("%d",length);
    return 0;
}