#include <stdio.h>
#include <string.h>
#include <errno.h>

int main() {
   FILE *arq;

   arq = fopen("file.txt","r");
   if(arq == NULL) {
      printf("Error: %s\n", strerror(errno));
   }
   
   return(0);
}

/*
DESCRIÇÃO:

	- A função char *strerror(int errnum) procura um array interno para o numero de error 
	errnum e retorna um ponteiro uma string de mensagem de erro.

	- A mensagem de erro produzida pelo strerror delende da plataforma e do compilador. 

DECLARAÇÃO:

	char *strerror(int errnum)

PARAMETROS:

    errnum -- Este é o numero de erro, usualmente errno.

RETORNO:

	- Esta função retorna um ponteiro para a string de erro descrita pelo erro errnum

*/