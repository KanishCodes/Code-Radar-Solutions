#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { // Outer loop for passes
        for (int j = 0; j < n - i - 1; j++) { // Inner loop for swapping
            if (arr[j] > arr[j + 1]) { 
                // Swap if the element is greater than the next one
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


