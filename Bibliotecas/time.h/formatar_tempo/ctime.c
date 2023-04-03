#include <stdio.h>
#include <time.h>

int main() {

	time_t tempo_local;

  time(&tempo_local);

  printf("Tempo local = %s", ctime(&tempo_local));

	return 0;
}

/*

DESCRIÇÃO:

	- A função char *ctime(const time_t *timer) retorna um string que representa a hora local 
	com base no argumento temporizador

DECLARAÇÃO:

	char *ctime(const time_t *timer)

PARAMETROS:

	timer -- É um ponteiro para um objeto do tipo time_t que contem um calendario.

RETORNO:

	- Esta função retorna uma string C contendo a data e informações do tempo em um 
	formato legível: WWW Mmm dd hh:mm:ss aaa

	- WWW é o dia da semana, 
	- Mmm é o mês em letras, 
	- dd é o dia do mês, 
	- hh:mm:ss é a hora, minuto e segundo, 
	- aaaa é o ano

*/