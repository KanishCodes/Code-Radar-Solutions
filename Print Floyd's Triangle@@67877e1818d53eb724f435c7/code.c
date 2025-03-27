#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Input the size of the triangle
    int m = 1;
    for(int i = 1;i<=N; i++){
        
        for(int j = 1; j<=i;j++){
            printf("%d ", m);
            m++;
        }
        
        printf("\n");
    }

    return 0;
}