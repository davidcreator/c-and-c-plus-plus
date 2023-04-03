#include <stdio.h>
#include <string.h>

int main ()
{
   int len;
   const char str1[] = "ABCDEF4960910160";
   const char str2[] = "013";

   len = strcspn(str1, str2);

   printf("A primeira combinação de caracteres entre str1 e str2 está em %d\n", len+1);
   
   return(0);
}

/*
DESCRIÇÃO:

	- A função size_t strspn(const char *str1, const char *str2) calcula o comprimento do 
  segmento inicial de str1 na qual consiste pelo menos 1 dos caracteres de str2 sem que
  a sequencia quebre.

DECLARAÇÃO:

	size_t strcspn(const char *str1, const char *str2)

PARAMETROS:

    str1 -- String na qual será analisado.

    str2 -- String que contem a lista de caracteres que irá combinar com str1.

RETORNO:

	- Esta função retorna o indice da str1 do ultimo caracterer encontrado que combina com str2
	por isso soma-se mais 1 ao resultado.

*/

