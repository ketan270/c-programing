#include<stdio.h>
#include<math.h>
void calculatePrice(float value);
int main(){
    float value;
    printf("Enter Value : ");
    scanf("%f",&value);
    calculatePrice(value);
    return 0;
}
void calculatePrice(float value){
    value = value + (0.18 * value);
    printf("Final price is %f",value);
}