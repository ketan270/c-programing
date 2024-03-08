#include<stdio.h>
#include<math.h>
int main(){
    int i,j,k=1;
    for (i = 1; i <=5; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            printf("%d ",(j)%2);
        }
        printf("\n");
    }
    return 0;
}