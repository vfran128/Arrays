#include "stdio.h"
#include "stdlib.h"
#include "time.h"
//PONER EL RESTO DE LAS CARTAS DE TRUCO.
int main(int argc, char *argv[]) {
  srand(time(NULL));
  int cartasNombre[40] ="1 de espada", "1 de basto", "7 de espada", "7 de oro", "3 de copa", "3 de basto", "3 de copa", "3 de espada",
  int cartas [40];
  int Cont [3] = {0,0,0} ;
  for (int i = 0; i < 3; i++) {
        cartas[i] = (rand()%40) +1 ;
        if (Cont[cartas[i]] == 0) {
          Cont[cartas[i]]++;
          printf("%d\n",cartas[i]);
        }
        else {
          i--;
        }

    }
  return 0;
}
