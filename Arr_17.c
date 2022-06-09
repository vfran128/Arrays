#include "stdlib.h"
#include "stdio.h"

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int l[n];
  for (int i = 0; i < n; i++) {
    if (i == 0) {
      l[i] = 0;
      printf("%d ",l[i]);
    }
    if (i == 1) {
      l[i] = 1;
      printf("%d ",l[i]);
    }
    if (i >= 2){
      l[i] = l[i-1] + l[i-2];
      printf("%d ",l[i] );
    }
  }
  printf("\n");
  return 0;
}
