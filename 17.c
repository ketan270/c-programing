#include<stdio.h>
#include<math.h>
int main (){
    int x;
    printf("ENTER NUMBER: ");
    scanf("%d",&x);
    int sum = 0;
    for(int i=1;i<=x;i++){
        sum=sum + i;
    } 
    printf("SUM IS %d \n",sum);
    return 0;
}