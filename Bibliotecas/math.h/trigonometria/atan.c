#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {

   double x, resultado, radianos;

   x = 1.0;
   radianos = 180.0/PI;
   resultado = atan(x)*radianos;
   printf("O arco tangente de %.2f° é %f radianos\n", x, resultado);
   
   return 0;
}

/* ----------------------------------- RESUMO DO CÓDIGO --------------------------------

DESCRIÇÃO:

   - A função double atan(double x) retorna o arco tangente do angulo "x" em radianos.

   - Use a tag -lm para compilar

DECLARAÇÃO:

   double atan(double x)

PARÂMETROS:

    x − Este é o valor de ponto flutuante que representa um ângulo expresso em radianos.

RETORNO:

   - Esta função retorna o arco tangente de x

---------------------------------------------------------------------------------------*/