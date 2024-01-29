#include<stdio.h>
#include<math.h>
void swap(int a,int b);
int main(){
    int x;
    printf("ENTER VALUE OF x : ");
    scanf("%d",&x);
    int y;
    printf("ENTER VALUE OF y : ");
    scanf("%d",&y);
    swap(x,y);
    return 0;
}
void swap(int a,int b){
    int t=a;
    a=b;
    b=t;
    printf("a=%d & b=%d\n",a,b);
}