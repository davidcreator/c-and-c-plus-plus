#include <stdio.h>
#include <math.h>

int main() {

   double x = 5;
  
   printf("O valor exponencial e^x de %.2f is %f\n", x, exp(x));
   printf("O valor exponencial e^x de %.2f is %f\n", x+1, exp(x+1));
   printf("O valor exponencial e^x de %.2f is %f\n", x+2, exp(x+2));
   
   return(0);
}

/* ----------------------------------- RESUMO DO CÓDIGO --------------------------------

DESCRIÇÃO:

	- A função double exp(double x) retorna o valor de e elevado a potencia x.

	- resultado = e^x

	- e = 2,7...

DECLARAÇÃO:

	double exp(double x)

PARAMETROS:

    x − Este é o valor de ponto flutuante.

RETORNO:

	- Retorna o valor exponencial de x.

---------------------------------------------------------------------------------------*/