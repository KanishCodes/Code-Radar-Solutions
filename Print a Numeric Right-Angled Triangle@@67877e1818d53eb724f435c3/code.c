#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Input the size of the triangle
    for(int i = 1;i<=N; i++){
        int d=1;
        for(int j = 1; j<=i;j++){
            printf("%d", d);
            
        }
        d++;
        printf("\n");
    }

    return 0;
}

