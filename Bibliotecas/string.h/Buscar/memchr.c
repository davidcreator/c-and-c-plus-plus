#include <stdio.h>
#include <string.h>

int main() {

   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *resultado;

   resultado = memchr(str, ch, strlen(str));

   printf("String depois de |%c| é - |%s|\n", ch, resultado);

   return(0);
}

/*

DEFINIÇÃO:

	- Procura pela primeira ocorrencia de um determinado valor em uma região de memória.

	- Ambas as regiões de memória são tratadas com unsigned char (byte a byte)

DECLARAÇÃO:

	void *memchr(const void *str, int c, size_t n)

PARÂMETROS:

	str -- ponteiro para uma região de memória.

	c -- Valor a ser procurado.

	n -- Número de bytes que será preenchido, não é necessáriamente o tamanho do array

RETORNO:

  - Retorna um ponteiro para a primeira ocorrencia do valor a ser procurado.

  - Retorna NULL se não encontrar.

*/