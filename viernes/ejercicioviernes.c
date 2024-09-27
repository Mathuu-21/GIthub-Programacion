#include <stdio.h>

int main (int argc, char *argv[]) {
 double mayor=1, menor=10, prom=0;
 int nota [6];
 for (int i=0; i<6; i++)
 {
    printf("Ingrese el elemento %d\n");
    scanf("%f", &nota[i]);
 }
  return 0;
}