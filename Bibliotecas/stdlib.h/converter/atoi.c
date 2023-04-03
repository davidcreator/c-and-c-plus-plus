#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

   int valor;
   char str[20];
   
   strcpy(str, "98993489");
   valor = atoi(str);
   printf("Valor da string = %s, valor do inteiro = %d\n", str, valor);

   strcpy(str, "tutorialspoint.com");
   valor = atoi(str);
   printf("Valor da string = %s, valor do inteiro = %d\n", str, valor);

   return(0);
}

/* -------------------------------- RESUMO DO CÓDIGO --------------------------------------

DEFINIÇÃO:

	- A função int atoi(const char *str) converte a string str para um número inteiro (tipo int).

DECLARAÇÃO:

	int atoi(const char *str);

PARÂMETROS

    str -- Esta é a string com a representação de um número inteiro.

RETORNO:

	- Esta função retorna o número inteiro convertido como um valor int. 
	Se nenhuma conversão válida pôde ser executada, ela retorna zero (0,0).


----------------------------------------------------------------------------------------- */