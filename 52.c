#include<stdio.h>
#include<math.h>
int printodd(int arr[],int n);
int main(){
    int arr[]={1,2,3,4,5,6};
    printodd(arr,6);
    return 0;
}
int printodd(int arr[],int n){
    for (int i=0;i<n;i++){
        if (arr[i] % 2!=0){
            printf("%d\n",arr[i]);
        }
    }
}
