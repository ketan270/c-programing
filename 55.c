#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,sum=0,a;
    scanf("%d",&n);
    while (n!=0) {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}