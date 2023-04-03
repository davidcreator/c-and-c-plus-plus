#include <stdio.h>
#include <string.h>
#include "../../victor.h/lib/strings.h"

int main(){

  char haystack[20];
  char needle[10];
  char *resultado;

  printf("Insere a string haystack: ");
  fgets(haystack, 20, stdin);
  remove_line_break(haystack);

  printf("Insere a string needle: ");
  fgets(needle, 20, stdin);
  remove_line_break(needle);

  resultado = strstr(haystack, needle);

  printf("A substring é: %s\n", resultado);
   
  return(0);
}

/*
DESCRIÇÃO:

	- A função char *strstr(const char *haystack, const char *needle) encontra a primeira
  ocorrencia de sobrescrita needle dentro da string haystack

  - A terminação \0 não é comparada.

DECLARAÇÃO:

	char *strstr(const char *haystack, const char *needle)

PARAMETROS:

    haystack -- String na qual será analisado.

    needle -- String pequena que será procurada dentro da string grande haystack

RETORNO:

	- Esta função retorna um ponteiro da primeira ocorrencia em haystack e o resto da
  sequencia do needle ou retorna NULL caso não encontre a sequencia inteira.

*/

