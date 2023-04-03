#include <stdio.h>
#include <time.h>

int main() {

	struct tm t;

   t.tm_sec    = 10;
   t.tm_min    = 10;
   t.tm_hour   = 6;
   t.tm_mday   = 25;
   t.tm_mon    = 2;
   t.tm_year   = 89;
   t.tm_wday   = 6;

   puts(asctime(&t));

	return 0;
}

/*

DESCRIÇÃO:

	- A função char *asctime(const struct tm *timeptr) retorna um ponteiro para uma string 
	que representa o dia e hora da estrutura struct timeptr.

DECLARAÇÃO:

	char *asctime(const struct tm *timeptr);

PARAMETROS:

	- O timeptr é um ponteiro para a estrutura tm que contém um tempo de calendário 
	dividido em seus componentes, como mostrado abaixo:

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

RETORNO:

	- Esta função retorna uma string C contendo as informações de data e hora em um 
	formato legível WWW Mmm dd hh:mm:ss aaaa

	- WWW é o dia da semana, 
	- Mmm é o mês em letras, 
	- dd é o dia do mês, 
	- hh:mm:ss é a hora, minuto e segundo, 
	- aaaa é o ano

*/