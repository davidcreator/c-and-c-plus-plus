#include <stdio.h>
#include <time.h>

int main() {

	int resultado;
  struct tm info;
  char buffer[80];

  info.tm_year = 2001 - 1900;
  info.tm_mon = 7 - 1;
  info.tm_mday = 4;
  info.tm_hour = 0;
  info.tm_min = 0;
  info.tm_sec = 1;
  info.tm_isdst = -1;

  resultado = mktime(&info);
  if(resultado == -1){
      printf("Error: incapaz de fazer tempo usando mktime\n");
   }else{
      strftime(buffer, sizeof(buffer), "%c", &info );
      printf("%s\n", buffer);
   }

	return 0;
}

/*

DESCRIÇÃO:

	- A função time_t mktime(struct tm *timeptr) converte a estrutura apontada por timeptr 
	em um valor time_t de acordo com o fuso horário local.

DECLARAÇÃO:

	time_t mktime(struct tm *timeptr)

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

	- Esta função retorna um valor time_t correspondente ao tempo do calendário passado 
	como argumento.

	- Em caso de erro, um valor -1 é retornado.

*/