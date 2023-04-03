#include <stdio.h>
#include <string.h>
#include "../../victor.h/lib/strings.h"

int main() {

   char string[50];
   int tamanho;

   printf("Insira a string: ");
   fgets(string, 50, stdin);

   remove_line_break(string);

   tamanho = strlen(string);
   printf("Tamanho da string |%s| é |%d|\n", string, tamanho);
   
   return(0);
}

/* 
DESCRIÇÃO:

	- A função size_t strlen(const char *str) calcula o número de caracteres da string str, 
	mas não inclui o caractere NULL ou (/0) de terminação de string.

DECLARAÇÃO:

	- Declaração da função strlen().

		size_t strlen(const char *str);

PARAMETROS:

    str -- String cujo o tamanho deseja-se ser encontrado.

RETORNO:

	- Esta função retorna o tamanho da string.

DICA:

	- Pode ser usada para verificar se um campo que o usuario preencheu está em branco ou não
	apenas verificando se o retorno da função é igual a 1, pois temos o /n ou enter 
	inserido pelo usuario
	
*/