#include<stdio.h>
#include<math.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    if(age>=18){
        printf("ADULT");   
    }
    else{
        printf("Not Adult");
    }
    return 0;
}