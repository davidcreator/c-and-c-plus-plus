#include <stdio.h>
#include <stdlib.h>

int main(){

   char str[50] = "20.30300 Só vai imprimir o número";
   char *string;
   long numero;

   numero = strtol(str, &string, 10);
   printf("O número(long int) é %ld\n", numero);
   printf("Parte da string sem o número: |%s|\n", string);

   return(0);
}

/* -------------------------------- RESUMO DO CÓDIGO --------------------------------------

DEFINIÇÃO:

	- A função long int strtol(const char *str, char **endptr, int base) converte a parte 
  inicial da seqüência de caracteres em str para um valor long int de acordo com a base 
  de dados, que deve estar entre 2 e 36, inclusive, ou seja, o valor especial 0.


DECLARAÇÃO:

	long int strtol(const char *str, char **endptr, int base);

PARÂMETROS

    str -- Esta é a string contendo a representação de um número inteiro.

    endptr - Esta é a referência a um objeto já alocado do tipo char*, cujo valor é 
    definido pela função para o próximo caractere em str após o valor numérico.

    base -- Esta é a base, a qual deve estar entre 2 e 36, inclusive, ou seja o valor especial 0.

RETORNO:

	- Esta função retorna o número inteiro convertido como um valor long int, 
  caso contrario o valor zero é retornado.


----------------------------------------------------------------------------------------- */