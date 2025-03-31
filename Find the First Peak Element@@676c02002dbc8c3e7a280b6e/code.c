#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        // First element (only compare with next element)
        if (i == 0) {
            if (arr[i] > arr[i + 1]) {
                printf("%d ", arr[i]);
            }
        }
        // Last element (only compare with previous element)
        else if (i == n - 1) {
            if (arr[i] > arr[i - 1]) {
                printf("%d ", arr[i]);
            }
        }
        // Middle elements (compare with both neighbors)
        else {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                printf("%d ", arr[i]);
            }
        }
    }

    return 0;
}