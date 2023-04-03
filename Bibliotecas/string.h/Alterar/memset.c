#include <stdio.h>
#include <string.h>

int main() {

  char str[50];

	strcpy(str,"Esta é uma função da biblioteca string.h");
	puts(str);

	memset(str,'>',7);
	puts(str);


  
  return 0;
}

/*

DEFINIÇÃO:

	- Preenche (inicializa) uma quantidade de memória (variável, estrutura e etc) com um
	determinado valor de bytes

DECLARAÇÃO:

	void *memset(void *P, int V, size_t N);

PARÂMETROS:

	P -- ponteiro para a região de memória que será preenchida.

	V -- Valor usado para preencher a memória, o valor será convertido automaticamente para
	unsigned char

	N -- Número de bytes que será preenchido, não é necessáriamente o tamanho do array

RETORNO:

	- Retorna uma cópia do ponteiro P.

	- Retorna NULL em caso de erro.
	

*/