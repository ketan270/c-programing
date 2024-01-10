#include<stdio.h>
#include<math.h>
int main (){
    int x;
    printf("ENTER NUMBER: ");
    scanf("%d",&x);
    int sum = 0;
    for(int i=1,j=x;i<=x && j>=1;i++,j--){
        sum=sum + i;
        printf("%d\n",j);
    } 
    printf("SUM IS %d \n",sum);
    return 0;
}