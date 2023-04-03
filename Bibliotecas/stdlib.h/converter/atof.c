#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

   float valor;
   char str[20];
   
   strcpy(str, "98993489");
   valor = atof(str);
   printf("Valor da string = %s, valor do float = %.2f\n", str, valor);

   strcpy(str, "tutorialspoint.com");
   valor = atof(str);
   printf("Valor da string = %s, valor do float = %.2f\n", str, valor);

   return(0);
}

/* -------------------------------- RESUMO DO CÓDIGO --------------------------------------

DEFINIÇÃO:

	- A função double atof(const char *str) converte a string str para um número de ponto flutuante (tipo double).

DECLARAÇÃO:

	double atof(const char *str);

PARÂMETROS

    str -- Esta é a string com a representação de um número de ponto flutuante.

RETORNO:

	- Esta função retorna o número de ponto flutuante convertido como um valor double. 
	Se nenhuma conversão válida pôde ser executada, ela retorna zero (0,0).


----------------------------------------------------------------------------------------- */