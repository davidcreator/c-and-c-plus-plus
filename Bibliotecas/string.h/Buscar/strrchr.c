#include <stdio.h>
#include <string.h>

int main() {

   const char string[] = "http://www.tutorialspoint.com";
   const char caracter = '.';
   char *resultado;

   resultado = strrchr(string, caracter);

   printf("String: %s\n", string);
   printf("String após |%c| é: |%s|\n", caracter, resultado);
   
   return(0);
}
/*
DESCRIÇÃO:

	- A função char *strrchr(const char *str, int c) procura pela ultima ocorrencia de um 
	caractere (unsigned char) dentro da string apontada pelo argumento str.

DECLARAÇÃO:

	- Declaração da função strchr().

		char *strrchr(const char *str, int c)

PARAMETROS:

    str -- Esta é a string que será analisada.

    c -- Este é o caractere que será procurado dentro da string str, passado como inteiro
    mas internamento é convertido a char.

RETORNO:

	Isto retorna um ponteiro para a primeira ocorrencia do caractere na string str, ou retorna
	NULL se não encontrar o caractere.

*/