#include "stdlib.h"
#include "stdio.h"

int main(int argc, char *argv[]) {
  int a[] = {0,1,2,3,4,5,6,7,8,9};
  int i = 0;
  while (i <= 9) {
    printf("%d\n",a[i]);
    i++;
  }
  return 0;
}
