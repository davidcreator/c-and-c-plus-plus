#include <stdio.h>
#include <math.h>

int main() {

   double x;

   x = 0.5;
   printf("A tangente hyperbolica de %.2f° é %f radianos\n", x, tanh(x));

   x = 1.0;
   printf("A tangente hyperbolica de %.2f° é %f radianos\n", x, tanh(x));

   x = 1.5;
   printf("A tangente hyperbolica de %.2f° é %f radianos\n", x, tanh(x));
   
   return 0;
}

/* ----------------------------------- RESUMO DO CÓDIGO --------------------------------

DESCRIÇÃO:

   - A função double tanh(double x) retorna a tangente hyperbolico do angulo "x" em radianos.

   - Use a tag -lm para compilar

DECLARAÇÃO:

   double tanh(double x)

PARÂMETROS:

    x − Este é o valor de ponto flutuante que representa um ângulo expresso em radianos.

RETORNO:

   - Esta função retorna a tangente hyperbolico de x

---------------------------------------------------------------------------------------- */