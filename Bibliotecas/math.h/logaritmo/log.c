#include <stdio.h>
#include <math.h>

int main() {

  double x, resultado;
  x = 5.5;

  resultado = log (x);

  printf ("log(%.2f) = %f\n", x, resultado);

  return 0;

}

/* ----------------------------------- RESUMO DO CÓDIGO --------------------------------

DESCRIÇÃO:

	- Retorna o logaritmo natural de x.

  - O logaritmo natural é a base-e logaritmo: o inverso da função exponencial natural(exp).
  Para (base-10) logaritmos comuns, consulte log10.

DECLARAÇÃO:

	double log (double x);

PARAMETROS:

    x − Valor cujo logaritmo é calculado, se o argumento for negativo, ocorre um erro
    de domínio.

RETORNO:

	- Retorna o logaritmo natural de x.

  - Se x é negativo, ele faz com que um erro de domínio apareça.

  - Se x é zero, que pode causar um erro de pólo (dependendo da implementação da biblioteca).

---------------------------------------------------------------------------------------*/
