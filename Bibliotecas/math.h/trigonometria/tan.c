#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {

   double x, resultado, radianos;

   x = 60.0;
   radianos = PI/180.0;
   resultado = tan(x*radianos);
   printf("A tangente de %.2f° é %f radianos\n", x, resultado);
   
   x = 90.0;
   radianos = PI/180.0;
   resultado = tan(x*radianos);
   printf("A tangente de %.2f° é %f radianos\n", x, resultado);
   
   return 0;
}

/* ----------------------------------- RESUMO DO CÓDIGO --------------------------------

DESCRIÇÃO:

   - A função double tan(double x) retorna a tangente do angulo "x" em radianos.

   - Use a tag -lm para compilar

DECLARAÇÃO:

   double tan(double x)

PARÂMETROS:

    x − Este é o valor de ponto flutuante que representa um ângulo expresso em radianos.

RETORNO:

   - Esta função retorna a tangente de x

---------------------------------------------------------------------------------------- */