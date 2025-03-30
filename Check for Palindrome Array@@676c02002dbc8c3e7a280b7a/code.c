void plaindrome_checker(int arr[], int n){
    int flag =0;
    for(int i =0;i<= n/2 && n!=0; i++){
        if(arr[i]!= arr[n-i-1]){
            flag =1;
            break;
        }
    }
    if(flag ==1){
        printf("YES");
    }
    else{
        printf("NO")
    }
}

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d ", arr[i]);
    }
    plaindrome_checker(arr[], n);
    return 0;
}