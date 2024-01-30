#include<stdio.h>
#include<math.h>
int main(){
    int marks[3];
    printf("ENTER PHYSICS MARKS: ");
    scanf("%d",&marks[0]);
    printf("ENTER CHEMISTRY MARKS: ");
    scanf("%d",&marks[1]);
    printf("ENTER MATHS MARKS: ");
    scanf("%d",&marks[2]);
printf("physics =%d\nchemistry =%d\nmaths =%d",marks[0],marks[1],marks[2]);
return 0;
}