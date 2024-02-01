#include <stdio.h>

int main(void) {
	int numbers[]={10,20,30,40,50,60};
	printf("%d",sizeof(numbers)/sizeof(numbers[0]));
    return 0;
}

