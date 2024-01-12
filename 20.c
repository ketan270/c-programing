#include<stdio.h>
#include<math.h>
int main(){
    for (int i=0;i<=5;i++){
        if (i==3){
            continue;
        }

        printf("%d\n",i);
    }
    return 0;
}