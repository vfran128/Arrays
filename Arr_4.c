#include "stdlib.h"
#include "stdio.h"
#include "time.h"

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int a [100];
  int suma = 0;
  int resultado = 0;
  for (int i = 0; i <= 100; i++) {
    a[i] = (rand() % 100) +1;
    suma += a[i];
    // printf("%d ",a[i]);
  }
    // printf("\n");
   resultado = suma / 100;
   printf("Promedio:%d\n",resultado );
  return 0;
}
