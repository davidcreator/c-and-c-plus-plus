#include <stdio.h>
#include <stdlib.h>

void final_exit1 (void) {
  puts ("Exit function 1.");
}

void final_exit2 (void) {
  puts ("Exit function 2.");
}

int main() {

  atexit (final_exit1);
  atexit (final_exit2);
  puts ("Main function.");

  return 0;
}

/* -------------------------------- RESUMO DO CÓDIGO --------------------------------------

DEFINIÇÃO:

	- A função void exit(int status) executa a função depois que o programa termina.

DECLARAÇÃO:

	int atexit(void (*func)(void));

PARÂMETROS

    Função a ser chamada. 

    - A função deve retornar nenhum valor e não têm argumentos.

RETORNO:

	- Um valor zero é retornado se a função foi registrado com êxito.

	- Se falhasse, um valor diferente de zero é retornado.


----------------------------------------------------------------------------------------- */