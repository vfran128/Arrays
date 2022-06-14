#include "stdlib.h"
#include "stdio.h"

int main(int argc, char *argv[]) {
double promediosco[3];
double promediosfi[3];
int r = 0;
//hacer matriz y asignar valores
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      r = (rand() % 9) + 1;
      promediosco[j] += r;
      promediosfi[i] += r;
      printf("%d ",r );
    }
    printf("\n");
  }
  //Imprimir pomedios
  for (int i = 0; i < 3; i++) {
    promediosco[i] = promediosco[i]/3;
    printf("Promedio C%d %.2f\n",i+1 , promediosco[i] );
  }
  printf("\n");
  for (int i = 0; i < 3; i++) {
    promediosfi[i] = promediosfi[i]/3;
    printf("Promedio F%d %.2f\n",i+1 , promediosfi[i] );
  }
  return 0;
}
