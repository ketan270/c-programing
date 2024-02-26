#include<stdio.h>
#include<math.h>
int length(char arr[]);
int main(){
    char name[100];
    fgets(name,100,stdin);
    printf("Length is %d",length(name));
    return 0;
}
int length(char arr[]){
    int count = 0;
    for (int i = 1; arr[i]!='\0'; i++)
    {
        count++;
    }
    return count;
    
}