#include <stdio.h>
#include <time.h>

int main() {

	clock_t start, end;
	double total;
  int i;

  start = clock();
  printf("Começo do programa, start = %ld pulsos de clock\n", start);
    
  printf("Iremos escanear um loop gigante, começando a %ld pulsos de clock\n", start);
  for(i=0; i< 1000000000; i++){
  }
  end = clock();
  printf("Fim do loop gigante, Terminando em %ld pulsos de clock\n", end);
   
  printf("Clocks por segundo: %ld\n", CLOCKS_PER_SEC);

  total = (double)(end - start)/CLOCKS_PER_SEC;
  printf("Tempo total pego pelo CPU: %f segundos\n", total);
  printf("Fechando o programa...\n");

	return 0;
}

/*

DESCRIÇÃO:

	- A função clock_t clock(void) retorna o número de pulsos de clock decorrido 
	desde que o programa foi lançado.

	- Para obter o número de segundos utilizados pelo CPU, você terá que dividir por 
	CLOCKS_PER_SEC

	- Em um sistema de 32 bits, onde CLOCKS_PER_SEC é igual a 1000000 esta função 
	irá retornar o mesmo valor aproximadamente a cada 72 minutos.

DECLARAÇÃO:

	clock_t clock(void);

RETORNO:

	- Esta função retorna o número de pulsos de clock decorrido desde o início do programa.

	- Em caso de falha, a função retorna um valor de -1.

*/