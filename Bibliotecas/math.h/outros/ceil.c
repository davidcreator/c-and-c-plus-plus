#include <stdio.h>  
#include <math.h> 

int main() {

  printf ("Arredondamento de 2.3 é %.1f\n", ceil(2.3));
  printf ("Arredondamento de 3.8 é %.1f\n", ceil(3.8));
  printf ("Arredondamento de -2.3 é %.1f\n", ceil(-2.3));
  printf ("Arredondamento de -3.8 é %.1f\n", ceil(-3.8));

  return 0;
}

/* ----------------------------------- RESUMO DO CÓDIGO --------------------------------

DESCRIÇÃO:

	- Arredonda o valor de x, se o valor decimal foi maior que 5 arredonda para cima,
  caso contrario arredonda para baixo.

DECLARAÇÃO:

	double modf(double x);

PARAMETROS:

    x -- Valor a ser arredondado.

RETORNO:

	- Retorna o valor arredondado.

---------------------------------------------------------------------------------------*/