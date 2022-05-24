#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(int argc, char *argv[]) {
  srand(time(NULL));
  char *cartasNombre[40] ={"1 de espada", "1 de basto", "7 de espada", "7 de oro", "3 de copa", "3 de basto", "3 de copa", "3 de espada","2 de espada", "2 de copa", "2 de oro" "2 de basto","1 de copa","1 de oro","12 de espada","12 de copa","12 de oro","12 de basto","11 de espada","11 de copa","11 de oro", "11 de basto","10 de espada", "10 de copa", "10 de oro", "10 de basto","7 de copa","7 de basto","6 de espada", "6 de copa", "6 de oro", "6 de basto", "5 de espada", "5 de copa", "5 de oro", "5 de basto", "4 de espada", "4 de copa", "4 de oro", "4 de basto"};
  int cartas [40];
  int baraja [3];
  for (int i = 0; i < 3; i++) {
        cartas[i] = (rand()%40) +1 ;
        if (baraja[cartas[i]] == 0) {
          baraja[cartas[i]]++;
          printf("%s\n",cartasNombre[cartas[i]]);
        }
        else {
          i--;
        }
    }
  return 0;
}
