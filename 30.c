#include<stdio.h>
#include<math.h>
void table(int n);
int main (){
    int n;
    printf("ENTER FIRST NUMBER: ");
    scanf("%d",&n);
    table(n);
    return 0;
}
void table(int n){
    for (int i=1;i<=10;i++){
    printf("%d\n",i*n);
    }
}    