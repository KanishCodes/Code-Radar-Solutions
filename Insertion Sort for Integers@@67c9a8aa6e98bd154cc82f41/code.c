int insertionSort(int arr[], int a){
    for (int i = 0; i < a - 1; i++) {  // Number of passes (each pass places the largest element at the end)
        for (int j = 0; j < a - i - 1; j++) {  // Comparing adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1] to move the larger element forward
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
}
return 0;
}


int printArray(int arr[], int x){
    for(int i = 0; i<=x;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}