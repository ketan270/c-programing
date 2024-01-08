#include <stdio.h>

int main() {
  int myNumbers[] = {25, 50, 75, 100};
  myNumbers[0] = 33;

  printf("%d", myNumbers[0]);
 
  return 0;
}