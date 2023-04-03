#include <stdio.h>
#include <stdlib.h>

int main() {

   int a = 5, b = -10;
   long int x = 65987L, y = -1005090L;

   printf("valor absoluto de %d = %d\n", a, abs(a));
   printf("valor absoluto de %d = %d\n", a, abs(b));
   printf("valor absoluto de %ld = %ld\n", x, labs(x));
   printf("valor absoluto de %ld = %ld\n", y, labs(y));
   
   return(0);
}

/* -------------------------------- RESUMO DO CÓDIGO --------------------------------------

DEFINIÇÃO:

	- As funções retornam o valor absoluto(positivo) de int

DECLARAÇÃO:

	int abs(int x);

	long int labs(long int x);

PARÂMETROS

    x -- valor inteiro.

RETORNO:

	- Retorna o valor absoluto de x


----------------------------------------------------------------------------------------- */