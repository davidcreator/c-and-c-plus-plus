#include <stdio.h> 
#include <math.h>

int main() {

  double x, resultado;
  x = 1024.0;

  resultado = sqrt(x);

  printf ("raiz(%.2f) = %.2f\n", x, resultado);

  return 0;
}

/* ----------------------------------- RESUMO DO CÓDIGO --------------------------------

DESCRIÇÃO:

	- Retorna a raiz quadrada de x

DECLARAÇÃO:

	double sqrt(double x);

PARAMETROS:

    x -- Valor na qual a raiz é calculada.

RETORNO:

	- Retorna a raiz quadrada de x

  - Se x é negativo faz com que tenha um erro de domínio.

---------------------------------------------------------------------------------------*/