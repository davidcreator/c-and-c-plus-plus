#include <stdio.h> 
#include <math.h>

int main() {

  printf ("7^3 = %f\n", pow(7.0, 3.0));
  printf ("4.73^12 = %f\n", pow(4.73, 12.0));
  printf ("32.01^1.54 = %f\n", pow(32.01, 1.54));

  return 0;
}

/* ----------------------------------- RESUMO DO CÓDIGO --------------------------------

DESCRIÇÃO:

	- Retorna base elevada ao expoente: base^expoente

DECLARAÇÃO:

	double pow(double base, double exponent);

PARAMETROS:

    base -- Valor de base.

    exponent -- Expoente

RETORNO:

	- Retorna base elevada ao expoente: base^expoente

  - Se a base é negativo e o expoente é finito, mas não um valor inteiro, faz com que 
  um erro de domínio.

  - Se ambos base e expoente é zero, ele também pode causar um erro de domínio em 
  determinadas implementações.

  - Se a base é zero e expoente for negativo, pode causar um erro de domínio ou um 
  erro de pólo (ou nenhuma, dependendo da implementação da biblioteca).

  - A função também pode causar um erro de gama se o resultado for muito grande ou 
  muito pequeno para ser representado por um valor do tipo de retorno.

---------------------------------------------------------------------------------------*/