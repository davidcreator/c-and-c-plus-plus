#include <stdio.h>  
#include <math.h> 

int main() {

  printf ("O valor absoluto de 3.1416 é %f\n", fabs(3.1416));
  printf ("O valor absoluto def -10.6 é %f\n", fabs(-10.6));

  return 0;

}

/* ----------------------------------- RESUMO DO CÓDIGO --------------------------------

DESCRIÇÃO:

	- Retorna o valor absoluto ou modulo de x |x|

DECLARAÇÃO:

	double fabs(double x);

PARAMETROS:

    x -- Valor que voltará absoluto.

RETORNO:

	- Retorna o valor absoluto de x

---------------------------------------------------------------------------------------*/