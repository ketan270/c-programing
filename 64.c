#include<stdio.h>
#include<math.h>
int main(){
    int year;
    printf("ENTER YEAR: ");
    scanf("%d",&year);
    if ((year%4==0))
    {
        printf("THE YEAR %d Is Leap Year",year);
    }
    else if (year%400==0)
    {
        printf("THE YEAR %d Is Leap Year",year);   
    }
    else if (year%100==0)
    {
        printf("THE YEAR %d Is Not Leap Year",year);
    }
    
    else{
        printf("THE YEAR %d Is Not Leap Year",year);
    }
    return 0;
}    