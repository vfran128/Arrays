#include "stdlib.h"
#include "stdio.h"

int main(int argc, char *argv[]) {
  for (int j = 0; j < i/2; j++) {
    if (argv[1][j]!= argv[1][i-j-1]) {
      printf("No es palindromo\n");
      return 1;
    }
  }

  printf("Es palindromo\n");

  return 0;
}
