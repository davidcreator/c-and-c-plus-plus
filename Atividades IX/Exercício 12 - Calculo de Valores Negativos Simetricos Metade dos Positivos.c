#include <stdio.h>
#include <math.h>

int main(void) {
  float nro;

  printf("Informe um número: ");
  scanf("%f", &nro);

  if(nro < 0) {
    nro *= -1;
    printf("O simétrico é: %.2f", nro);
  }
  else if(nro > 0) {
    nro /= 2;
    printf("A metade do valor é: %.2f", nro);
  }
  else {
    printf("O valor é zero!!!");
  }
  
  return 0;
}
