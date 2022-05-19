#include "stdlib.h"
#include "stdio.h"

int main(int argc, char *argv[]) {
  int a [7];
  for (int i = 1; i < 7; i++) {
    a[i] = i;
    printf("%d ",a[i]);
}
printf("\n \n Inviertiedo orden...\n \n ");
for (int o = 6; o > 0; o--) {
  a[o] = o;
  printf("%d ",a[o]);
}
printf("\n");
  return 0;
}
