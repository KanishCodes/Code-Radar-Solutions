#include <stdio.h>
#include <string.h>
#include <ctype.h>
int countWords(char str[]) {
    int count = 0, inWord = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }
    return count;
}
int main(){
    char string[100];
    scanf("%s", string);
    int length = strlen(string);
    
    printf("%d", countWords(string));
    

    return 0;
}