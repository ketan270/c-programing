#include<stdio.h>
#include<math.h>
void doWork(int a,int b,int *sum,int *prod,int *avg);
int main(){
    int a;
    printf("ENTER VALUE OF a : ");
    scanf("%d",&a);
    int b;
    printf("ENTER VALUE OF b : ");
    scanf("%d",&b);
    int sum,prod,avg;
    doWork(a,b,&sum,&prod,&avg);
    printf("sum is %d\nprod is %d\navg is %d\n",sum,prod,avg);
    return 0;
}
void doWork(int a,int b,int *sum,int *prod,int *avg){
    *sum= a+b;
    *prod= a *b;
    *avg=(a+b)/2;
}