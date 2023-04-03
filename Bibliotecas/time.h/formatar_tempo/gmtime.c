#include <stdio.h>
#include <time.h>

#define BST (+1)
#define CCT (+8)

int main() {

	time_t tempo;
  struct tm *info;

  time(&tempo);
  /* Get GMT time */
  info = gmtime(&tempo);
   
  printf("Relogio mundial atual:\n");
  printf("London : %2d:%02d\n", (info->tm_hour+BST), info->tm_min);
  printf("China  : %2d:%02d\n", (info->tm_hour+CCT), info->tm_min);

	return 0;
}

/*

DESCRIÇÃO:

	- A função struct tm *gmtime(const time_t *timer) usa o valor apontado por temporizador 
	para preencher uma estrutura tm com os valores que representam o tempo correspondente, 
	expressa em Tempo Universal Coordenado (UTC) ou o fuso horário GMT.

DECLARAÇÃO:

	struct tm *gmtime(const time_t *timer)

PARAMETROS:

	timeptr -- É um ponteiro para o tipo time_t que representa um calendario.

RETORNO:

	- Retorna um ponteiro para a estrutura tm que contém um tempo de calendário preenchido
	de acordo com o parametro passado, componentes:

	struct tm {
	   int tm_sec;         Segundos,  			Vária de 0 até 59          
	   int tm_min;         Minutos, 				Vária de 0 até 59           
	   int tm_hour;        Horas, 					Vária de 0 até 23             
	   int tm_mday;        Dia do mês, 			Vária de 1 até 31  
	   int tm_mon;         Mês, 						Vária de 0(Janeiro) até 11(Dezembro)              
	   int tm_wday;        Dia da semana, 	Vária de 0(Domingo) até 6(Sabado)    
	   int tm_yday;        Dia do ano, 			Vária de 0 até 365  
	   int tm_isdst;       Horário de verão           
	   int tm_year;        Número de anos desde 1900    
	};

*/