#include <stdio.h>
#include <string.h>
int main(){
    char string[20];
    scanf("%s", string);
    int length = strlen(string);
    int isPalindrome = 1;
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        if (string[i] != string[j]) {
            isPalindrome = 0;  
            break;
        }
    }

    if (isPalindrome) {
        printf("Yes");
    } else {
        printf("No");
    }


    return 0;
}