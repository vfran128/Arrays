#include "stdlib.h"
#include "stdio.h"

int main(int argc, char *argv[]) {
  int i =0;
  while (argv[1][i] != 0)  {
    i++;
  }
  printf("%d\n",i );

return 0;
}
