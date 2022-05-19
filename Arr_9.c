#include "stdlib.h"
#include "stdio.h"

int main(int argc, char *argv[]) {
  int a [21];
  for (int i = 1; i < 21; i++) {
    a[i] = i;
    printf("%d ",a[i]);
}
printf("\n\nInviertiedo orden...\n\n");

for (int o = 20; o > 0; o--) {
  a[o] = o;
  printf("%d ",a[o]);
}
printf("\n");
  return 0;
}
