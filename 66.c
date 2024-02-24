#include<stdio.h>
#include<math.h>
void printstring(char arr[]);
int main(){
    char firstname[]="KETAN\n";
    char lastname[]="SHARMA";
    printstring(firstname);
    printstring(lastname);
    return 0;
}
void printstring(char arr[]){
    for (int i = 0;arr[i]!='\0'; i++)
    {
        printf("%c",arr[i]);
    }
    
}