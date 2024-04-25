#include<stdio.h>
#include<math.h>
int main(){
    FILE *fptr;
    fptr=fopen("Sum.txt","r");
    int a;
    fscanf(fptr,"%d\t",&a);
    int b;
    fscanf(fptr,"%d\t",&b);
    fclose(fptr);
    fptr=fopen("Sum.txt","w");
    fprintf(fptr,"%d",a+b);
    fclose(fptr);
    return 0;
    
}