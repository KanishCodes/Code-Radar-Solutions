#include <stdio.h>
#include <string.h>
int main(){
    char string[100];
    scanf("%s", string);
    int length = strlen(string);
    int count =0;
    for (int i = 0; i < length; i++) {
        count++;
    }
    printf("%d", count);

    return 0;
}