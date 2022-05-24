#include "stdlib.h"
#include "stdio.h"

int main(int argc, char *argv[]) {
  int i =0;
  while (argv[1][i] != 0)  {
    i++;
  }
  printf("%d\n",i );

  for (int j = 0; j < i/2; j++) {
    if (argv[1][j]!= argv[1][i-j-1]) {
      printf("No es palindromo\n");
      return 1;
    }
  }

  printf("Es palindromo\n");

  return 0;
}
