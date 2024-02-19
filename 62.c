#include<stdio.h>
#include<math.h>
int swapwithouttempvariable(int a,int b);
int main(){
    int a,b;
    scanf("%d\n%d",&a,&b);
    swapwithouttempvariable(a,b);
}
int swapwithouttempvariable(int a,int b){
    a=a-b;
    b=a+b;
    a=b-a;
    printf("a is %d\nb is %d",a,b);
}