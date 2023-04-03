#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

  char command[50];

  system("clear");

  strcpy(command, "ls -l" );
  system(command);

  return(0);
} 

/* -------------------------------- RESUMO DO CÓDIGO --------------------------------------

DEFINIÇÃO:

	- A função int system(const char *command) passa o nome do comando ou programa 
	especificado pelo comando para o ambiente de host a ser executado pelo processador 
	de comando e retorna após o comando foi concluído.

DECLARAÇÃO:

	int system(const char *command)

PARÂMETROS

    command -- Esta é a string contendo o nome da variável pedida.

RETORNO:

	- O valor retornado é -1 em caso de erro, e o status de retorno do comando contrário.


----------------------------------------------------------------------------------------- */