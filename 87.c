#include<stdio.h>
#include<string.h>

typedef struct address
{
    int house_No;
    int block;
    char city[100];
    char state[100];
} add;

int main(){
    add s1;

    printf("ENTER HOUSE NO: ");
    scanf("%d", &s1.house_No);

    printf("ENTER BLOCK: ");
    getchar();
    scanf("%d", &s1.block);

    printf("ENTER CITY: ");
    getchar();
    fgets(s1.city, sizeof(s1.city), stdin);

    printf("ENTER STATE: ");
    getchar();
    fgets(s1.state, sizeof(s1.state), stdin);
    printf("\n");

    printf("ENTERED HOUSE NO: %d\n", s1.house_No);
    printf("ENTERED BLOCK: %d\n", s1.block);
    printf("ENTERED CITY: %s", s1.city);
    printf("ENTERED STATE: %s", s1.state);
    return 0;
}