int binarySearch(int arr[], int n, int target){
    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high){
        mid = (low+high) / 2;

        if (target == arr[mid]){
            return mid;
        }
        else if(arr[mid]>target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    
    }
    return -1;
}