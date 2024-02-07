#include <stdio.h>
#include <string.h>

#define MAX_LEN 1001

int main() {
    int t;
    scanf("%d", &t);
    char S[MAX_LEN];
    for (int i = 0; i < t; i++) {
        scanf("%s", S);
        int len = strlen(S); 
        char X[MAX_LEN * 2]; 
        int j;
        for (j = 0; j < len; j++) {
            X[j] = S[j]; 
        }
        int k;
        for (k = 0; k < len; k++) {
            X[j+k] = S[k]; 
        }
        X[j+k] = '\0'; 
        printf("%s\n", X); 
    }
    
}