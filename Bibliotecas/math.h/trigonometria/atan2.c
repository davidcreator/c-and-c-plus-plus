#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {

   double x, y, resultado, radianos;

   x = -7.0;
   y = 7.0;
   radianos = 180.0/PI;
   resultado = atan2(y, x) * radianos;
   printf("O arco tangente de x = %.2f°, y = %.2f° ", x, y);
   printf("é %f radianos\n", resultado);
   
   return 0;
}

/* ----------------------------------- RESUMO DO CÓDIGO --------------------------------

DESCRIÇÃO:

   - A função double atan2(double x) retorna o arco tangente do angulo "y/x" em radianos.

   - Baseado no sinal de ambos os valores para determinar o quadrante correto.

   - Use a tag -lm para compilar

DECLARAÇÃO:

   double atan2(doubly y, double x)

PARÂMETROS:

    x − Este é o valor de ponto flutuante que representa a cordenada x.

    y − Este é o valor de ponto flutuante que representa a cordenada y.

RETORNO:

   - Esta função retorna o arco tangente de y/x, no intervalo [-pi,+pi] radianos

---------------------------------------------------------------------------------------*/