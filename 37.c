#include<stdio.h>
#include<math.h>
float temp(float celsius);
int main(){
    float far = temp(2);
    printf("Fah is %f",far);
    return 0;
}
float temp(float celsius){
    float far = celsius * (9.0/5.0) + 32;
    return far;
}