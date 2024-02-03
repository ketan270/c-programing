#include<stdio.h>
#include<math.h>
int main(){
    float number = 120.00;
    float *ptr = &number;
    printf("ptr is %u\n", ptr);
    ptr ++;
    printf("ptr is %u\n", ptr);
    ptr --;
    printf("ptr is %u\n", ptr);
}