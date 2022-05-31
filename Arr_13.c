#include "stdlib.h"
#include "stdio.h"

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  char *mes[13]= {"-" , "Enero", "Febrero", "Marzo" ,"Mayo", "Abril" , "Junio", "Julio" ,"Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre" };

  if (n <= 0 || n > 12) {
    printf("Mes invalido\n");
    return 1;
  }

  printf("%s\n",mes[n] );
  return 0;
}
