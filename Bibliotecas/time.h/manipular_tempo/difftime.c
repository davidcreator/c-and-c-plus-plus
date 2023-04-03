#include <stdio.h>
#include <time.h>

int main() {

	time_t start, end;
  double diff;

  printf("Começando o programa...\n");
  time(&start);

  printf("Dormir por 5 segundos...\n");
  sleep(5);

  time(&end);
  diff = difftime(end, start);

  printf("Tempo de execução = %f\n", diff);
  printf("Saindo do programa...\n");

	return 0;
}

/*

DESCRIÇÃO:

	- A função double difftime(time_t time1, time_t time2) devolve a diferença de segundos 
	entre a time1 e time2 isto é (time1 - time2).

	- Os dois times estão especificados no tempo do calendário, que representa o tempo 
	decorrido desde a Epoch (00:00:00 de 1 de janeiro de 1970, Tempo Universal 
	Coordenado (UTC)).

DECLARAÇÃO:

	double difftime(time_t time1, time_t time2)

PARAMETROS:

	time1 -- É um objeto do tipo time_t para finalizar o tempo.

	time2 -- É um objeto do tipo time_t para iniciar o tempo.

RETORNO:

	- Esta função retorna a diferença entre time1 e time2 (time2 - time1) 
	devolvendo um double.

*/