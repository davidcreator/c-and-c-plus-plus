#include <string.h>
#include <stdio.h>

int main() {

   char str[80] = "Isto é o meu - www.tutorialspoint.com - website";
   const char s[2] = "-";
   char *token;

   /* Pegar o primeiro simbolo */
   token = strtok(str, s);

   /* Pegar os outros tokens */
   while(token != NULL) {
      printf( "%s\n", token);
      token = strtok(NULL, s);
   }

   return(0);
}

/*
DESCRIÇÃO:

	- A função char *strtok(char *str, const char *delim) quebra a string str entre varios
  simbolos(tokens) usando o delimitador delim

  - A terminação \0 não é comparada.

DECLARAÇÃO:

	char *strtok(char *str, const char *delim)

PARAMETROS:

    str -- O conteudo da string que será quebrado em varios outros conteudos menores.

    delim -- String que terá o delimitador na qual quebrará a string str, elas podem variar
    de uma chamada para outra.

RETORNO:

	- Retorna um ponteiro para a ultimo simbolo(token) encontrado na string.

  - Um ponteiro NULL é retornado se tiver acabado os tokens delimitadores.

*/

