#include <stdio.h>  
#include <math.h> 

int main() {

  printf ("Arredondamento de 2.3 é %.1f\n", floor(2.3));
  printf ("Arredondamento de 3.8 é %.1f\n", floor(3.8));
  printf ("Arredondamento de -2.3 é %.1f\n", floor(-2.3));
  printf ("Arredondamento de -3.8 é %.1f\n", floor(-3.8));

  return 0;
}

/* ----------------------------------- RESUMO DO CÓDIGO --------------------------------

DESCRIÇÃO:

	- Arredonda sempre para baixo o valor de x.

DECLARAÇÃO:

	double floor(double x);

PARAMETROS:

    x -- Valor a ser arredondado para baixo.

RETORNO:

	- Retorna o valor arredondado para baixo.

---------------------------------------------------------------------------------------*/