#include <stdio.h>
#include <math.h>

const char *character(char str[]);

int main(){
    char str[100];
    printf("ENTER WORD: ");
    fgets(str,sizeof(str),stdin);
    printf("%s", character(str));
    return 0;
}

const char *character(char str[]){
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'l') {
            return "YES";
        }
    }
    return "NO";
}
