#include<stdio.h>
#include<math.h>
int main(){
    int *ptr;
    int x;
    ptr=&x;
    *ptr=0;
    printf("%d\n",x);
    printf("%d\n",*ptr);
    *ptr+=5;
    printf("%d\n",x);
    printf("%d\n",*ptr);
    (*ptr)++;
    printf("%d\n",x);
    printf("%d\n",*ptr);
    return 0;
}