#include <stdio.h>

int main() {
  float x, y, z;

  printf("Informe o Primeiro Numero: ");
  scanf("%f", &x);
  printf("Informe o Segundo Numero: ");
  scanf("%f", &y);
  
  z = x + y;
  
  printf("Resultado da Soma: %.2f", z);
  
  return 0;
}
