#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Input the size of the triangle
    for(int i = 1;i<=N; i++){
        char ch = 'A';
        for(int j = 1; j<=i;j++){
            printf("%c ", ch);
            ch++;
        }
        
        printf("\n");
    }

    return 0;
}