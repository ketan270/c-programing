#include<stdio.h>
#include<math.h>
int main(){
    FILE *fptr;
    fptr=fopen("Student.txt","w");
    char name[100];
    int age;
    float cgpa;
    printf("ENTER YOUR NAME: ");
    scanf("%s",name);
    printf("ENTER YOUR AGE: ");
    scanf("%d",&age);
    printf("ENTER YOUR CGPA: ");
    scanf("%f",&cgpa);
    fprintf(fptr,"%s\t",name);
    fprintf(fptr,"%d\t",age);
    fprintf(fptr,"%f",cgpa);
}