#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n);  // Take the size of the array as input
    int arr[n];  // Declare the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    } 

    int k; 
    scanf("%d", &k);  // Take the value of k (element to search) as input

    // Search for the element k in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            printf("%d\n", i);
            return 0;  // Exit after finding the element
        }
        else{
            printf("-1\n");
        }
    }

    return 0;
}
