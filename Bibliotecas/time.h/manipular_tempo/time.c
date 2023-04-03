#include <stdio.h>
#include <time.h>

struct tempo {
	time_t anos, meses, semanas, dias, horas, minutos, segundos;
};


int main() {

	struct tempo t;

  t.segundos = time(NULL);
  t.minutos = t.segundos/60;
  t.horas = t.minutos/60;
  t.dias = t.horas/24;
  t.semanas = t.dias/7;
  t.meses = t.dias/30;
  t.anos = t.meses/12;

  printf("Anos desde 1° de janeiro de 1970 = %ld anos\n", t.anos);
  printf("Meses desde 1° de janeiro de 1970 = %ld meses\n", t.meses);
  printf("Semanas desde 1° de janeiro de 1970 = %ld meses\n", t.semanas);
  printf("Dias desde 1° de janeiro de 1970 = %ld dias\n", t.dias);
  printf("Horas desde 1° de janeiro de 1970 = %ld horas\n", t.horas);
  printf("Minutos desde 1° de janeiro de 1970 = %ld minutos\n", t.minutos);
  printf("Segundos desde 1° de janeiro de 1970 = %ld segundos\n", t.segundos);

	return 0;
}

/*

DESCRIÇÃO:

	- A função time_t time(time_t *seconds) retorna o tempo decorrido desde a Epoch 
	(00:00:00 UTC, 01 de janeiro de 1970), medido em segundos.

	- Se segundos não é NULL, o valor de retorno também é armazenado em segundos variáveis.

DECLARAÇÃO:

	time_t time(time_t *seconds)

PARAMETROS:

	seconds -- Este é o ponteiro para um objeto do tipo time_t, 
						 onde o valor segundos será armazenado.

RETORNO:

	- O tempo de calendário atual como um objeto time_t.

*/