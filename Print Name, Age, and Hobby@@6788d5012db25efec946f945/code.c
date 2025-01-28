#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char name[100];
    int age;
    char hobby[100];
    scanf("%c %d\n%c", &name, &age, &hobby);
    printf("Name: %c\nAge: %d\nHobby: %c", name, age, hobby);
    return 0;
}