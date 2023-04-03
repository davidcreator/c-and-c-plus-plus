#include <stdio.h>
#include <time.h>

int main() {

	time_t tempo;
  struct tm *info;
  char buffer[80];

  time(&tempo);

  info = localtime(&tempo);

  strftime(buffer, sizeof(buffer),"%d/%m/%Y - %H:%M:%S", info);
  printf("Data: %s\n", buffer);

	return 0;
}

/*

DESCRIÇÃO:

	- A função  size_t strftime(char *str, size_t maxsize, const char *format, const struct tm *timeptr) 
	formata a hora representada na estrutura timeptr de acordo com as regras de 
	formatação definidas no formato e armazenados em str.

DECLARAÇÃO:

	size_t strftime(char *str, size_t maxsize, const char *format, const struct tm *timeptr)

PARAMETROS:

    str -- Este é o ponteiro para a array destino str onde a string resultante é copiado.

    maxsize -- Número máximo de caracteres que será copiado para str.

    format -- Esta é a string contendo qualquer combinação de caracteres regulares e 
    			 		especificadores de formato especial.

    			 -- Estes especificadores de formato são substituídos pela função para os 
    			 		valores correspondentes para representar o tempo especificado no tm.

		timeptr -- É um ponteiro para a estrutura tm que contém um tempo de calendário 
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

	- Se a string resultante se encaixa em menos caracteres que o total 
	(que inclui o nulo caractere de finalização), o número total de caracteres 
	copiados para str (não incluindo o nulo caracteres de terminação) é retornado.

	- Caso contrário, retorna zero.

TIPOS DE FORMATO:

	Símbolo 	Trocado por: 														Exemplos:
		%a 			Nome da semana abreviado									Sun
		%A 			Nome da semana inteiro										Sunday
		%b 			Nome do mês abreviado											Mar
		%B 			Nome do mês inteiro												March
		%c 			Tempo e hora representação								Sun Aug 19 02:56:02 2012
		%d 			Dia do mês (01-31)												19
		%H 			Hora em 24h formatado (00-23)							14
		%I 			Hora em 12h formatado (01-12)							05
		%j 			Dia do ano (001-366)											231
		%m 			Mês como um número decimal (01-12)				08
		%M 			Minutos (00-59) 													55
		%p 			Designação AM(manha) e PM(tarde/noite)		PM
		%S 			Segundos (00-60)													02
		%w 			Domingo a sabado em decimal (0-6)					4
		%x 			Representação da data											08/19/12
		%X 			Representação do tempo										02:50:06
		%y 			Ultimos dois digitos do ano (00-99)				01
		%Y 			Ano																				2012
		%Z 			Abreviação do fuso horário 								CDT
		%% 			Sinal %																		%

*/