#include <stdio.h>
#include <limits.h>  // For INT_MIN

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = INT_MAX, second_min = INT_MAX;

    // Find the maximum element
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Find the second maximum element
    for (int i = 0; i < n; i++) {
        if (arr[i] < second_min && arr[i] > min) {
            second_min = arr[i];
        }
    }

    // If second_max is still INT_MIN, it means there's no second distinct max
    if (second_min == INT_MAX) {
        printf("-1");
    } else {
        printf("%d", second_min);
    }

    return 0;
}