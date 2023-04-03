#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {

   double x, resultado, radianos;

   x = 0.9;
   radianos = 180.0/PI;
   resultado = asin(x)*radianos;
   printf("O arco seno de %.2f° é %f radianos\n", x, resultado);
   
   return 0;
}

/* ----------------------------------- RESUMO DO CÓDIGO --------------------------------

DESCRIÇÃO:

   - A função double asin(double x) retorna o arco seno do angulo "x" em radianos.

   - Use a tag -lm para compilar

DECLARAÇÃO:

   double asin(double x)

PARÂMETROS:

    x − Este é o valor de ponto flutuante que representa um ângulo expresso em radianos.

RETORNO:

   - Esta função retorna o arco seno de x

---------------------------------------------------------------------------------------*/