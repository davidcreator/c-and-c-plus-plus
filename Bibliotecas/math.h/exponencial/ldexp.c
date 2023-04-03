#include <stdio.h>
#include <math.h>

int main() {

  double x, resultado;
  int expoente;

  x = 0.95;
  expoente = 4;
  resultado = ldexp (x , expoente);
  printf ("%.2f * 2^%d = %.2f\n", x, expoente, resultado);
  return 0;
}

/* ----------------------------------- RESUMO DO CÓDIGO --------------------------------

DESCRIÇÃO:

   - Retorna o resultado da multiplicação x(o significado) por 2 elevado à potência de 
   exp(o expoente).

   		lexpr(x, exp) = x * 2^exp

DECLARAÇÃO:

   double ldexp (double x, int exp);

PARÂMETROS:

    x − Valor significand.

    exp -- Valor do expoente.

RETORNO:

   - Esta função retorna o arco seno de x

---------------------------------------------------------------------------------------*/