#include <stdio.h>
#include <math.h>

int main() {

  double x, resultado;
  x = 1000;
  
  resultado = log10(x);
  
  printf ("log10(%.2f) = %f\n", x, resultado);
  
  return 0;
  
}

/* ----------------------------------- RESUMO DO CÓDIGO --------------------------------

DESCRIÇÃO:

	- Retorna o logaritmo na base 10 de x.

DECLARAÇÃO:

	double log10(double x);

PARAMETROS:

    x − Valor cujo logaritmo é calculado, se o argumento for negativo, ocorre um erro 
    de domínio.

RETORNO:

	- Retorna o logaritmo na base 10 de x.

  - Se x é negativo, ele faz com que um erro de domínio apareça.

  - Se x é zero, que pode causar um erro de pólo (dependendo da implementação da biblioteca).

---------------------------------------------------------------------------------------*/