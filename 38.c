#include<stdio.h>
#include<math.h>
int calculatePercentage(int sub1,int sub2,int sub3);
int main(){
    int sub1;
    printf("ENTER MARKS OF sub1 here: ");
    scanf("%d",&sub1);
     int sub2;
    printf("ENTER MARKS OF sub2 here: ");
    scanf("%d",&sub2);
     int sub3;
    printf("ENTER MARKS OF sub3 here: ");
    scanf("%d",&sub3);
    printf("PERCENTAGE IS %d",calculatePercentage(sub1,sub2,sub3));
    return 0;
}
int calculatePercentage(int sub1,int sub2,int sub3){
    return ((sub1 + sub2 + sub3)/3);
}