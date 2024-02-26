#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d\n%d",&a,&b);
    char operator;
    printf("ENTER OPERATOR: ");
    scanf("%c",&operator);
    if (operator =='+')
    {
        printf("%d",a+b);
    }
    else if (operator=='-')
    {
        printf("%d",a-b);
    }
    else if (operator=='/')
    {
        printf("%d",a/b);
    }
    else if (operator=='*')
    {
        printf("%d",a*b);
    }
    
    return 0;
}