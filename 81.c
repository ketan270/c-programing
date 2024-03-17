#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    fgets(name,100,stdin);
    int length= strlen(name);
    printf("LENGTH OF THE TYPED WORD IS %d ",length-1);
    return 0;
}