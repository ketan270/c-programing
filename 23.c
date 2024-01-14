#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("ENTER NUMBER : ");
    scanf("%d",&n);

    int fact=1;
    for (int i=1;i<=n;i++){
        fact = fact * i;
    }
    printf("FACTORIAL IS : %d",fact);
    return 0;
}