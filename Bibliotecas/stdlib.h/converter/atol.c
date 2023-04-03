#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

   int valor;
   char str[20];
   
   strcpy(str, "98993489");
   valor = atol(str);
   printf("Valor da string = %s, valor do inteiro = %ld\n", str, valor);

   strcpy(str, "tutorialspoint.com");
   valor = atol(str);
   printf("Valor da string = %s, valor do inteiro = %ld\n", str, valor);

   return(0);
}

/* -------------------------------- RESUMO DO CÓDIGO --------------------------------------

DEFINIÇÃO:

	- A função long int atol(const char *str) converte a string str para um número inteiro longo (tipo long int).

DECLARAÇÃO:

	long int atol(const char *str);

PARÂMETROS

    str -- Esta é a string com a representação de um número inteiro longo.

RETORNO:

	- Esta função retorna o número inteiro longo convertido como um valor long int. 
	Se nenhuma conversão válida pôde ser executada, ela retorna zero (0,0).


----------------------------------------------------------------------------------------- */