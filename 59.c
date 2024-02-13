#include<stdio.h>
#include<math.h>
int reverse(int arr[],int n);
void printArr(int arr[],int n);
int main (){
    int arr[]={1,2,3,4,5,6};
    reverse(arr,6);
    printArr(arr,6);
}
void printArr(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d\t",arr[i]);
        printf("\n");
    }
}
int reverse(int arr[],int n){
    for (int i=0;i<n/2;i++){
        int firstVal= arr[i];
        int secondVal = arr[n-i-1];
        arr[i]=secondVal;
        arr[n-i-1]=firstVal;
    }
}