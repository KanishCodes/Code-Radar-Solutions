#include <stdio.h>
void rev_array(int arr[], int start,int end){
    for(int i=start,j=end; i<j;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main(){
    int n;int k;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ", &arr[i]);
    }
    scanf("%d",&k);
    if(k>n){
        k=k%n;
    }
    rev_array(arr,0,n-1);
    rev_array(arr,0,k-1);
    rev_array(arr,k,n-1);
    for(int i=0;i<n;i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}