// Your code here...#include <stdio.h>
#include <stdio.h>
#include <limits.h>
int main(){
  int n; 
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i<n; i++){
    scanf("%d", &arr[i]); 
  }
  int max = arr[0];
  
  for(int i = 0;i<n;i++){
   if(max < arr[i]){
    max = arr[i];
   }
  }
  
  int maxm= INT_MIN;
  for(int i = 0; i<n;i++){
    if(arr[i]> maxm && arr[i]<max){
      maxm = arr[i];
    }
  }
  printf("%d", maxm);
  return 0;
}