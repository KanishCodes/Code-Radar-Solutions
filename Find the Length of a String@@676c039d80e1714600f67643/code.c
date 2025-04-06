#include <stdio.h>
#include <string.h>
int stringLength(const char *str) {
    if (str[0] == '\0') {
        return 0;
    }
    return strlen(str);
}
int main() {
    char string[100];
    fgets(string, sizeof(string), stdin);
    int len = strlen(string);
    if (len > 0 && string[len - 1] == '\n') {
        string[len - 1] = '\0';
    }
    int length = stringLength(string);
    printf("%d", length);
    return 0;
}
