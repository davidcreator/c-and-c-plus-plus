#include <stdio.h>
#include <stdlib.h>

int main(){

   char str[50] = "20.30300 Só vai imprimir o número";
   char *string;
   double numero;

   numero = strtod(str, &string);
   printf("O número(double) é %f\n", numero);
   printf("Parte da string sem o número: |%s|\n", string);

   return(0);
}

/* -------------------------------- RESUMO DO CÓDIGO --------------------------------------

DEFINIÇÃO:

	- A função double strtod(const char * str, char ** endptr) converte a string apontada 
   pelo argumento str para um número de ponto flutuante (tipo double). 

   - Se entptr não é nulo, um ponteiro para o caracter depois do último carácter usado 
   na conversão é armazenado no local referenciado pela endptr.

DECLARAÇÃO:

	double strtod(const char * str, char ** endptr);

PARÂMETROS

    str -- Este é o valor a ser convertido para um double.

    endptr - Esta é a referência a um objeto já alocado do tipo char*, cujo valor é 
    definido pela função para o próximo caractere em str após o valor numérico.

RETORNO:

	- Esta função retorna o número convertido como um valor double, 
   caso contrario o valor (0.0) é retornado.


----------------------------------------------------------------------------------------- */