#include<stdio.h>
#include<math.h>
float temp(float celsius);
int main(){
    float far = temp(16);
    printf("Fah is %f",far);
    return 0;
}
float temp(float celsius){
    float far = celsius * (9/5) + 32;
    return far;
}