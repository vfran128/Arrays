#include "stdlib.h"
#include "stdio.h"

int main(int argc, char *argv[]) {
double promedios[4];
int r = 0;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      r = rand() % 10;
      promedios[j] += r;
      printf("%d ",r );
    }
    printf("\n");
  }
  for (int i = 0; i < 4; i++) {
    promedios[i] = promedios[i]/4;
    printf("Promedio C%d %.2f\n",i+1 , promedios[i] );
  }
  return 0;
}
