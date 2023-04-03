#include <stdio.h>
#include <string.h>

int main() {

  const char str1[] = "abcde2fghi3jk4l";
  const char str2[] = "34";
  char *resultado;

  resultado = strpbrk(str1, str2);
  if(resultado) 
    printf("A primeira combinação de caracteres: %c\n", *resultado);
  else 
    printf("Caractere não encontrado!\n");
   
  return(0);
}

/*
DESCRIÇÃO:

	- A função char *strpbrk(const char *str1, const char *str2) encontra o primeiro caractere
  da string str1 que combine com qualquer caracter da string str2, isto não inclui o caractere
  NULL

DECLARAÇÃO:

	char *strpbrk(const char *str1, const char *str2)

PARAMETROS:

    str1 -- String na qual será analisado.

    str2 -- String que contem a lista de caracteres que irá combinar com str1.

RETORNO:

	- Esta função retorna um ponteiro do caractere dentro de str1 que combina com um dos
  caracteres de str2 ou retorna NULL caso não haja combinação.

*/

