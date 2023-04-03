#include <stdio.h>  
#include <math.h> 

int main() {

  double x, fractpart, intpart;

  x = 3.14159265;
  fractpart = modf(x , &intpart);

  printf ("%f = %f + %f\n", x, intpart, fractpart);

  return 0;
}

/* ----------------------------------- RESUMO DO CÓDIGO --------------------------------

DESCRIÇÃO:

	- Quebra x em uma parte inteira e um fracionaria

  - A parte inteira é armazenado no objeto apontado por intpart, e a parte fracionária 
  é retornado pela função.

  - Ambas as partes têm o mesmo sinal que x.

DECLARAÇÃO:

	double modf(double x, double* intpart);

PARAMETROS:

    x -- Valor de ponto flutuante para quebrar em partes.

    intpart -- Apontador para um objecto (do mesmo tipo que x) em que a parte inteira 
    é armazenado com o mesmo sinal que x.

RETORNO:

	- A parte fracionária de x, com o mesmo sinal.

---------------------------------------------------------------------------------------*/