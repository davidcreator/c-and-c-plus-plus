#include <stdio.h>
#include <stdlib.h>

int main () {

   printf("PATH : %s\n", getenv("PATH"));
   printf("HOME : %s\n", getenv("HOME"));
   printf("ROOT : %s\n", getenv("ROOT"));

   return(0);
}

/* -------------------------------- RESUMO DO CÓDIGO --------------------------------------

DEFINIÇÃO:

	- A função void exit(int status) pesquisas a string de ambiente apontada pelo nome e 
	retorna o valor associado à string.

DECLARAÇÃO:

	char *getenv(const char *name)

PARÂMETROS

    name -- Esta é a string contendo o nome da variável pedida.

RETORNO:

	- Esta função retorna uma string null-terminated com o valor da variável de 
	ambiente solicitado, ou NULL se a variável de ambiente não existe.


----------------------------------------------------------------------------------------- */