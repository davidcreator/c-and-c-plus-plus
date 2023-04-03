#include <stdio.h>
#include <stdlib.h>

int main(){

   char str[50] = "203030.0 Só vai imprimir o número";
   char *string;
   long numero;

   numero = strtoul(str, &string, 10);
   printf("O número(unsigned long int) é %lu\n", numero);
   printf("Parte da string sem o número: |%s|\n", string);

   return(0);
}

/* -------------------------------- RESUMO DO CÓDIGO --------------------------------------

DEFINIÇÃO:

	- A função unsigned long int strtoul(const char *str, char **endptr, int base) converte a parte inicial da 
  seqüência de caracteres em str para um valor long int de acordo com a base de dados, 
  que deve estar entre 2 e 36, inclusive, ou seja, o valor especial 0.


DECLARAÇÃO:

	unsigned long int strtoul(const char *str, char **endptr, int base);

PARÂMETROS

    str -- Esta é a string contendo a representação de um número inteiro sem sinal.

    endptr - Esta é a referência a um objeto já alocado do tipo char*, cujo valor é 
    definido pela função para o próximo caractere em str após o valor numérico.

    base -- Esta é a base, a qual deve estar entre 2 e 36, inclusive, ou seja o valor especial 0.

RETORNO:

	- Esta função retorna o número inteiro sem sinal convertido como um valor unsigned long int, 
  caso contrario o valor zero é retornado.


----------------------------------------------------------------------------------------- */