#include <stdio.h>
#include <string.h>

int main() {

   char str1[15];
   char str2[15];
   int resultado;

   memcpy(str1, "Abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   resultado = memcmp(str1, str2, 2);

   if(resultado > 0)
      printf("str1 é maior que str2\n");
   else if(resultado < 0)
      printf("str1 é menor que str2\n");
   else 
      printf("str1 é igual a str2\n");
   
   return(0);
}

/*

DEFINIÇÃO:

	- Compara os primeiro N bytes de memória de duas regiões

	- Ambas as regiões de memória são tratadas com unsigned char (byte a byte)

	- Comparação lexicográfica

DECLARAÇÃO:

	int memcmp(const void *str1, const void *str2, size_t n)

PARÂMETROS:

	str1 -- ponteiro para uma região de memória.

	str2 -- Ponteiro para uma região de memória.

	n -- Número de bytes que será preenchido, não é necessáriamente o tamanho do array

RETORNO:

  	Retorno < 0 -> str1 é menor que str2.

    Retorno > 0 -> str1 é maior que str2.

    Retorno = 0 -> str1 é igual a str2.

*/