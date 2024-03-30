#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Hello.txt","r");
    int in;
    fscanf(fptr,"%d",&in);
    printf("%d",in);
    fscanf(fptr,"%d",&in);
    printf("%d",in  );
    fscanf(fptr,"%d",&in);
    printf("%d",in);
    fscanf(fptr,"%d",&in);
    printf("%d",in);
    fscanf(fptr,"%d",&in);
    printf("%d",in);
    fscanf(fptr,"%d",&in);
   printf("%d",in);
    fclose(fptr);
    return 0;
}