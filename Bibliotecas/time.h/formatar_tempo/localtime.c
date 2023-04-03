#include <stdio.h>
#include <time.h>

int main() {

	time_t tempo;
  struct tm *info;

  time(&tempo);

  info = localtime(&tempo);
  printf("Tempo e data local: %s\n", asctime(info));

	return 0;
}

/*

DESCRIÇÃO:

	- A função struct tm *localtime(const time_t *timer) usa o tempo apontado por 
	temporizador para preencher uma estrutura tm com os valores que representam a 
	hora local correspondente.

	- O valor do temporizador é dividido nas estruturas da tm e expressa no fuso 
	horário local.

	- É praticamente a mesma coisa do ctime(), a diferença que o ctime retorna uma
	string já formatada e o localtime() retorna uma struct tm com os dados preenchidos

DECLARAÇÃO:

	struct tm *localtime(const time_t *timer)

PARAMETROS:

	timer -- É um ponteiro para o tipo time_t que representa um calendario local.

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