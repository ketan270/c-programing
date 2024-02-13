#include<stdio.h>
#include<math.h>
int main(){
    int arr[]={1,2,3,4,5};
    printf("%d\n",*(arr+2));
    printf("%d\n",*(arr+3));
    printf("%d",*(arr+1));
    return 0;
}