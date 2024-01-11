#include<stdio.h>
#include<math.h>
int main (){
    int x;
    printf("ENTER NUMBER : ");
    scanf("%d",&x);
    for (int i=1;i<=10;i++){
        printf("%d\n",x*i);
    }
    return 0;
}