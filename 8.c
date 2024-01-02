#include<stdio.h>
#include<math.h>
int main(){
    char ch;
    printf("ENTER CHARACTER: ");
    scanf("%c",&ch);

    if (ch>='a' && ch<='z'){
        printf("LOWER CASE");
    }
    else if(ch>='A' && ch<='Z'){
    printf("UPPER CASE");
    }
    else {
        printf("INVALID CHARACTER");
    }
    return 0;
}