#include <stdio.h>
#include <math.h>

int main ()
{
  double x, resultado;
  int expoente;

  x = 8.0;
  resultado = frexp (x , &expoente);
  printf ("%.2f = %.2f * 2^%d\n", x, resultado, expoente);
  return 0;
}

/* ----------------------------------- RESUMO DO CÓDIGO --------------------------------

DESCRIÇÃO:

	- Quebra o ponto de número flutuante x em seu significando binário 
	(um ponto flutuante com um valor absoluto entre 0,5 (incluído) e 1.0 (excluído)) 
	e um expoente integral para 2, de tal forma que:

		x = significand * 2 expoente

	- O expoente é armazenado no local apontado por exp, e o significando é o valor
	retornado pela função.

	  Se x é zero, ambas as partes (significand e expoente) são iguais a zero.

	  Se x for negativo, o significand retornado por essa função é negativo.

DECLARAÇÃO:

	double frexp (double x, int* exp);

PARAMETROS:

    x -- Valor a ser decomposto.

    exp -- Ponteiro para um int em que o valor do expoente é armazenado.

RETORNO:

	- O significando binário de x.

	- Este valor é o valor de ponto flutuante, cujo valor absoluto estabelece no 
	intervalo [0.5, 1] que, uma vez multiplicado por 2 elevado à potência de exp, 
	produz x.

---------------------------------------------------------------------------------------*/