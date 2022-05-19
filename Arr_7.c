#include "stdlib.h"
#include "stdio.h"
#include "time.h"

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int a[100];
  double sum0=0;
  double sum1=0;
  double sum2=0;
  double sum3=0;
  double sum4=0;
  double sum5=0;
  double sum6=0;
  double sum7=0;
  double sum8=0;
  double sum9=0;
  for (int i = 0; i < 100; i++) {
    a[i] = rand()%10;
     if(a[i] == 0){sum0++;}
     if(a[i] == 1){sum1++;}
     if(a[i] == 2){sum2++;}
     if(a[i] == 3){sum3++;}
     if(a[i] == 4){sum4++;}
     if(a[i] == 5){sum5++;}
     if(a[i] == 6){sum6++;}
     if(a[i] == 7){sum7++;}
     if(a[i] == 8){sum8++;}
     if(a[i] == 9){sum9++;}

  }
  printf("Frecuencia de aparicón\n");
  printf("Cero:%.2f%\n",sum0);
  printf("Uno:%.2f%\n",sum1);
  printf("Dos:%.2f%\n",sum2);
  printf("Tres:%.2f%\n",sum3);
  printf("Cuatro:%.2f%\n",sum4);
  printf("Cinco:%.2f%\n",sum5);
  printf("Seis:%.2f%\n",sum6);
  printf("Siete:%.2f%\n",sum7);
  printf("Ocho:%.2f%\n",sum8);
  printf("Nueve:%.2f%\n",sum9);
  return 0;
}
