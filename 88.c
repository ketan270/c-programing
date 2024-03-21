#include<stdio.h>
#include<string.h>
struct vector 
{
    int x;
    int y;
};
void calc_Sum(struct vector v1,struct vector v2,struct vector sum);
int main(){
    struct vector v1={5,10};
    struct vector v2={15,2};
    struct vector sum={0};
     calc_Sum(v1,v2,sum);
    return 0;

}
void calc_Sum(struct vector v1,struct vector v2,struct vector sum){
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    printf("SUM OF X AXIS IS : %d\n",sum.x);
    printf("SUM OF Y AXIS IS : %d",sum.y);
}