#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {

   double x;

   x = 0.5;
   printf("O cosseno hyperbolico de %.2f° é %f radianos\n", x, cosh(x));

   x = 1.0;
   printf("O cosseno hyperbolico de %.2f° é %f radianos\n", x, cosh(x));

   x = 1.5;
   printf("O cosseno hyperbolico de %.2f° é %f radianos\n", x, cosh(x));
   
   return 0;
}

/* ----------------------------------- RESUMO DO CÓDIGO --------------------------------

DESCRIÇÃO:

   - A função double cosh(double x) retorna o cosseno hyperbolico do angulo "x" em radianos.

   - Use a tag -lm para compilar

DECLARAÇÃO:

   double cosh(double x)

PARÂMETROS:

    x − Este é o valor de ponto flutuante que representa um ângulo expresso em radianos.

RETORNO:

   - Esta função retorna o cosseno hyperbolico de x

---------------------------------------------------------------------------------------- */