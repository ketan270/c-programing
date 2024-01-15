#include<stdio.h>
#include<math.h>
void namaste();
void bonjour();
int main (){
    printf("ENTER i for indian & f for french : ");
    char ch;
    scanf("%c",&ch);
    if (ch == 'i'){
    namaste();
    }
    else if (ch == 'f')
     {
        bonjour();
    }
    else{
        printf("INVALID CHARACTER");
    }
    return 0;
}
void namaste(){
    printf("NAMASTE");
}
void bonjour(){
    printf("bonjour");
}
