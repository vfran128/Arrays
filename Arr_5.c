#include "stdlib.h"
#include "stdio.h"
#include "time.h"
#include "limits.h"


int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int aMax = INT_MIN;
  int aMin = INT_MAX;
  int a[100];
  for (int i = 0; i <= 100; i++) {
    a[i] = (rand()%100) ;
    if(aMax < a[i]) {aMax = a[i];}
    if(aMin > a[i]) {aMin = a[i];}
  }
printf("El maximo es:%d\n",aMax);
printf("El minimo es:%d\n",aMin);
  return 0;
}
