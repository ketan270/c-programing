#include<stdio.h>
#include<math.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    if(age>=18){
        printf("ADULT \n");   
    }
    else{
        printf("Not Adult \n");
    }
    printf("Thank You");
    return 0;
}