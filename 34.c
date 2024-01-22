#include<stdio.h>
#include<math.h>
void printHelloWorld(int count);
int main (){
    printHelloWorld(5);
    return 0;
}
void printHelloWorld(int count){
    if (count==0){
        return;
    }
    printf("HELLO WORLD\n");
    printHelloWorld(count-1);
}