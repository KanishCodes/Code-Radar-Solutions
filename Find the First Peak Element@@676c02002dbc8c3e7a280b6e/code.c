#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Edge case: If there's only one element, it's the peak
    if (n == 1) {
        printf("%d", arr[0]);
        return 0;
    }

    // Check the first element
    if (arr[0] > arr[1]) {
        printf("%d", arr[0]);
        return 0;
    }

    // Check middle elements
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("%d", arr[i]);
            return 0;
        }
    }

    // Check the last element
    if (arr[n - 1] > arr[n - 2]) {
        printf("%d", arr[n - 1]);
    }

    return 0;
}