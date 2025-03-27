#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Input the size of the triangle
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, i*N);
        
    }

    return 0;
}
