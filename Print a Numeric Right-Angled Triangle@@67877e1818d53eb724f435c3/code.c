#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Input the size of the triangle
    for(int i = 1;i<=N; i++){
        for(int j = 1; j<=i;j++){
            printf("%d ", j);
        }
        
        printf("\n");
    }

    return 0;
}

