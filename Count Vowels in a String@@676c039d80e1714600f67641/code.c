#include <stdio.h>
#include <string.h>
int main(){
    char string[20];
    scanf("%s", string);
    int length = strlen(string);
    int count =0;
    for(int i=0;i<length;i++){
            if(string[i]=='a' || string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A' || string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U'){
                count++;
            }
    }
    printf("%d", count);
    return 0;
}