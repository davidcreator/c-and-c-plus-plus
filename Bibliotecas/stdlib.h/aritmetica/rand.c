#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

   int i, n;
   time_t tempo;
   
   n = 5;
   
   /* Inicializar o gerador de números randomicos */
   srand((unsigned) time(&tempo));

   /* Imprimir 5 números aleatorios entre 1 e 50 */
   for( i = 0 ; i < n ; i++ ) {
      printf("%d ", rand() % 50 +1);
   }
   printf("\n");
   
   return(0);
}

/* -------------------------------- RESUMO DO CÓDIGO --------------------------------------

DEFINIÇÃO:

	- A função int rand(void) devolve um número pseudo-aleatório no intervalo de 
  0 a RAND_MAX.

  - RAND_MAX é uma constante cujo valor padrão pode variar entre implementações mas 
  é concedida a ter pelo menos 32767.

  - A função void srand(unsigned int seed) abastece o gerador de números aleatórios 
  utilizado pela função rand.

DECLARAÇÃO:

	int rand(void);

  void srand(unsigned int seed);

PARÂMETROS

    seed -- Este é um valor inteiro a ser utilizado como semente pelo algoritmo 
    gerador de número pseudo-aleatório, rand().

RETORNO:

	- Esta função retorna um valor inteiro entre 0 e RAND_MAX.


----------------------------------------------------------------------------------------- */