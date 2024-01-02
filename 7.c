#include<stdio.h>
#include<math.h>

int main (){
    int marks;
    printf("Enter Marks: ");
    scanf("%d",&marks);
    if (marks>30 && marks<100){
        printf("PASS");
    }
    else if(marks<=30){
        printf("FAIL");
    }else{
        printf("ENTER VALID MARKS");
    }
    return 0;
}