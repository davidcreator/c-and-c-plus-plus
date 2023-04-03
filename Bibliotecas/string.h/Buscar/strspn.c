#include <stdio.h>
#include <string.h>

int main() {
   
  int length;
  const char str1[] = "ABCDEFG019874";
  const char str2[] = "ABCD";

  length = strspn(str1, str2);

  printf("Comprimento da str2 dentro da str1: %d\n", length);
   
  return(0);
} 

/*
DESCRIÇÃO:

	- A função size_t strspn(const char *str1, const char *str2) calcula o comprimento do 
	segmento inicial de str1 na qual consiste todos os caracteres de str2.

DECLARAÇÃO:

	size_t strspn(const char *str1, const char *str2)

PARAMETROS:

    str1 -- String na qual será analisado.

    str2 -- String que contem a lista de caracteres que irá combinar com str1.

RETORNO:

	- Esta função retorna o indice da str1 do primeiro caracterer encontrado que combina com str2

*/

