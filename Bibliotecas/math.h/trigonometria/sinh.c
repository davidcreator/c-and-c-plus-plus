#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {

   double x;

   x = 0.5;
   printf("O seno hyperbolico de %.2f° é %f radianos\n", x, sinh(x));

   x = 1.0;
   printf("O seno hyperbolico de %.2f° é %f radianos\n", x, sinh(x));

   x = 1.5;
   printf("O seno hyperbolico de %.2f° é %f radianos\n", x, sinh(x));
   
   return 0;
}

/* ----------------------------------- RESUMO DO CÓDIGO --------------------------------

DESCRIÇÃO:

   - A função double sinh(double x) retorna o seno hyperbolico do angulo "x" em radianos.

   - Use a tag -lm para compilar

DECLARAÇÃO:

   double sinh(double x)

PARÂMETROS:

    x − Este é o valor de ponto flutuante que representa um ângulo expresso em radianos.

RETORNO:

   - Esta função retorna o seno hyperbolico de x

---------------------------------------------------------------------------------------- */