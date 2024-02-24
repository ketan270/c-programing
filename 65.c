#include<stdio.h>
#include<math.h>
int main(){
    float bs,gs,da,hra;
    printf("Enter basic salary: ");
    scanf("%f",&bs);
    if (bs<1500)
    {
        hra= bs * 10/100;
        da= bs * 90/100;
        gs=bs + hra + da;
        printf("Gross Salary = RS %.2f\n",gs);
    }
    else{
        hra= 500;
        da =bs * 98/100;
        gs=bs + da + hra;
    printf("Gross Salary = RS %.2f\n",gs);
    }
    return 0;
}