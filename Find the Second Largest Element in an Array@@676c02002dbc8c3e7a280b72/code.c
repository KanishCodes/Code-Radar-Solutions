#include <stdio.h>
#include <limits.h>  // For INT_MIN

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = INT_MIN, second_max = INT_MIN;

    // Find the maximum element
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Find the second maximum element
    for (int i = 0; i < n; i++) {
        if (arr[i] > second_max && arr[i] < max) {
            second_max = arr[i];
        }
    }

    // If second_max is still INT_MIN, it means there's no second distinct max
    if (second_max == INT_MIN) {
        printf("-1");
    } else {
        printf("%d", second_max);
    }

    return 0;
}
