#include <stdio.h>
#include <stdlib.h>

int main() {

   printf("Começo do programa....\n");
   
   printf("Saindo do programa....\n");
   exit(0);

   printf("Programa já saiu, não irá aparecer essa mensagem!\n");

   return(0);
}

/* -------------------------------- RESUMO DO CÓDIGO --------------------------------------

DEFINIÇÃO:

	- A função void exit(int status) termina o processo de chamada imediatamente. 

	- Quaisquer descritores de arquivos abertos pertencentes ao processo serão fechados 
	e os filhos do processo são herdadas por processo 1, o init, e o processo pai é 
	enviado um sinal SIGCHLD

DECLARAÇÃO:

	void exit(int status)

PARÂMETROS

    status -- Este é o valor de status retornado para o processo pai.

RETORNO:

	- Não retorna nada.


----------------------------------------------------------------------------------------- */