#include <stdio.h>
#include <stdlib.h>

int main() {

   div_t resultado1;
   ldiv_t resultado2;

   resultado1 = div(27, 4);
   printf("O quociente de (27/4) = %d\n", resultado1.quot);
   printf("O resto da divisão de (27/4) = %d\n", resultado1.rem);

   resultado2 = ldiv(100000L, 30000L);
   printf("O quociente de (100000L/30000L) = %ld\n", resultado2.quot);
   printf("O resto da divisão de (100000L/30000L) = %ld\n", resultado2.rem);

   return(0);
}

/* -------------------------------- RESUMO DO CÓDIGO --------------------------------------

DEFINIÇÃO:

	- As funções dividem numer (numerador) pelo denom (denominador).

DECLARAÇÃO:

	div_t div(int numer, int denom);

  div_t div(long int numer, long int denom);

PARÂMETROS

    numer -- numerador da divisão.

    denom -- denominador da divisão

RETORNO:

	- Esta função devolve o valor em uma estrutura definida em <cstdlib>, 
  que tem dois membros. 

  Para div_t: 

    int quot; -> Conciente da divisão

    int rem; -> Resto da divisão


----------------------------------------------------------------------------------------- */